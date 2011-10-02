#import <AVFoundation/AVFoundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CoreMedia.h>
#import <UIKit/UIKit.h>

UIKIT_EXTERN CGImageRef UIGetScreenImage();


int main(int argc, char **argv, char **envp) {
	NSAutoreleasePool *pool;
    	pool = [[NSAutoreleasePool alloc] init];

	NSString  *jpgPath = [NSTemporaryDirectory() stringByAppendingPathComponent:@"test.png"];
	
	CGImageRef cgScreen = UIGetScreenImage();
	UIImage *screenshot = [UIImage imageWithCGImage:cgScreen];
        CGImageRelease(cgScreen);

	NSData *imageData = [NSData dataWithData:UIImagePNGRepresentation(screenshot)];
	[imageData writeToFile:jpgPath atomically:YES];	

	NSError *error;
	NSFileManager *fileMgr = [NSFileManager defaultManager];
	NSString *documentsDirectory = NSTemporaryDirectory();
	NSLog(@"Documents directory: %@", [fileMgr contentsOfDirectoryAtPath:documentsDirectory error:&error]);

	return 0;
}
