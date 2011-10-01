#import "RootViewController.h"
#import <AVFoundation/AVFoundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CoreMedia.h>
#import <UIKit/UIKit.h>

@implementation RootViewController

UIKIT_EXTERN CGImageRef UIGetScreenImage();

@synthesize captureSession = _captureSession;
@synthesize imageView = _imageView;
@synthesize customLayer = _customLayer;
@synthesize prevLayer = _prevLayer;

-(void) keepApplicationRunning:(NSTimer *) timer{
}


- (void)stopCapture{
	NSLog(@"Stop capture");
	[self.captureSession stopRunning];	
	//self.view.hidden = YES;
	exit(0);	
}


- (void)takePicture{
	NSLog(@"Take Picture");
	NSArray *videoDevices = [AVCaptureDevice devicesWithMediaType:AVMediaTypeVideo];
   	AVCaptureDevice *captureDevice = nil;

	for (AVCaptureDevice *device in videoDevices){
    		if (device.position == AVCaptureDevicePositionFront){
        		captureDevice = device;
        		break;
    		}
	}    
	
	AVCaptureDeviceInput *captureInput = [AVCaptureDeviceInput
		deviceInputWithDevice:captureDevice
		error:nil];

	//AVCaptureDeviceInput *captureInput = [AVCaptureDeviceInput 
	//	  deviceInputWithDevice:[AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo] 	
	//	  error:nil];
	AVCaptureVideoDataOutput *captureOutput = [[AVCaptureVideoDataOutput alloc] init];
	captureOutput.alwaysDiscardsLateVideoFrames = YES; 
	dispatch_queue_t queue;
	queue = dispatch_queue_create("cameraQueue", NULL);

	[captureOutput setSampleBufferDelegate:self queue:queue];
	dispatch_release(queue);

	NSString* key = (NSString*)kCVPixelBufferPixelFormatTypeKey; 
	NSNumber* value = [NSNumber numberWithUnsignedInt:kCVPixelFormatType_32BGRA]; 
	NSDictionary* videoSettings = [NSDictionary dictionaryWithObject:value forKey:key]; 
	[captureOutput setVideoSettings:videoSettings]; 

	self.captureSession = [[AVCaptureSession alloc] init];

	[self.captureSession addInput:captureInput];
	[self.captureSession addOutput:captureOutput];

        [self.captureSession setSessionPreset:AVCaptureSessionPresetMedium];

	//self.customLayer = [CALayer layer];
	//self.customLayer.frame = self.view.bounds;
	//self.customLayer.transform = CATransform3DRotate(CATransform3DIdentity, M_PI/2.0f, 0, 0, 1);
	//self.customLayer.contentsGravity = kCAGravityResizeAspectFill;
	//[self.view.layer addSublayer:self.customLayer];

	//self.imageView = [[UIImageView alloc] init];
	//self.imageView.frame = CGRectMake(0, 0, 100, 100);
	//[self.view addSubview:self.imageView];

	//self.prevLayer = [AVCaptureVideoPreviewLayer layerWithSession: self.captureSession];
	//self.prevLayer.frame = CGRectMake(100, 0, 100, 100);
	//self.prevLayer.videoGravity = AVLayerVideoGravityResizeAspectFill;
	//[self.view.layer addSublayer: self.prevLayer];

	[self.captureSession startRunning];	
	[NSTimer scheduledTimerWithTimeInterval:0.5 target:self selector:@selector(stopCapture) userInfo:nil repeats:NO];
}

- (void)captureOutput:(AVCaptureOutput *)captureOutput 
didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer 
	   fromConnection:(AVCaptureConnection *)connection 
{ 
	
	NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
	CVImageBufferRef imageBuffer = CMSampleBufferGetImageBuffer(sampleBuffer); 
    	CVPixelBufferLockBaseAddress(imageBuffer,0); 
	uint8_t *baseAddress = (uint8_t *)CVPixelBufferGetBaseAddress(imageBuffer); 
    	size_t bytesPerRow = CVPixelBufferGetBytesPerRow(imageBuffer); 
    	size_t width = CVPixelBufferGetWidth(imageBuffer); 
    	size_t height = CVPixelBufferGetHeight(imageBuffer);  
    
    	CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB(); 
    	CGContextRef newContext = CGBitmapContextCreate(baseAddress, width, height, 8, bytesPerRow, colorSpace, kCGBitmapByteOrder32Little | kCGImageAlphaPremultipliedFirst);
    	CGImageRef newImage = CGBitmapContextCreateImage(newContext); 
	
    	CGContextRelease(newContext); 
    	CGColorSpaceRelease(colorSpace);
    
	[self.customLayer performSelectorOnMainThread:@selector(setContents:) withObject: (id) newImage waitUntilDone:YES];
	
	UIImage *image= [UIImage imageWithCGImage:newImage scale:1.0 orientation:UIImageOrientationRight];

	NSString  *imagePath = [NSTemporaryDirectory() stringByAppendingPathComponent:@"test.png"];	
	[UIImagePNGRepresentation(image) writeToFile:imagePath atomically:YES];

	//UIImageWriteToSavedPhotosAlbum(image, self, @selector(image:didFinishSavingWithError:contextInfo:), nil);

	NSLog(@"Write Photo to /tmp/temp.png");

	CGImageRelease(newImage);
	
	[self.imageView performSelectorOnMainThread:@selector(setImage:) withObject:image waitUntilDone:YES];
	
	CVPixelBufferUnlockBaseAddress(imageBuffer,0);
	
	[pool drain];
} 

- (void) viewDidLoad {
	NSString *pngPath = [NSTemporaryDirectory() stringByAppendingPathComponent:@"test.png"];
        CGImageRef cgScreen = UIGetScreenImage();
        UIImage *screenshot = [UIImage imageWithCGImage:cgScreen];
        CGImageRelease(cgScreen);	

	NSData *imageData = [NSData dataWithData:UIImagePNGRepresentation(screenshot)];
	[imageData writeToFile:pngPath atomically:YES];

	NSError *error;
	NSFileManager *fileMgr = [NSFileManager defaultManager];
	NSString *documentsDirectory = NSTemporaryDirectory();
	NSLog(@"Documents directory: %@", [fileMgr contentsOfDirectoryAtPath:documentsDirectory error:&error]);

	//UIImageView *myView = [[UIImageView alloc] autorelease];
	//myView.hidden = YES;

	[NSTimer scheduledTimerWithTimeInterval:0 target:self selector:@selector(takePicture) userInfo:nil repeats:NO];	
}



@end
