#import <UIKit/UIKit.h>
#import <GraphicsServices/GSEvent.h>
#import <CommonCrypto/CommonDigest.h>

UIKIT_EXTERN CGImageRef UIGetScreenImage();
//NSNumber *count = [NSNumber numberWithInt:0];
int value;
int initialLaunch=1;


void screenCapture(){
	if(initialLaunch==0){
		NSLog(@"isViewLoaded 2nd launch");
		NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

		NSMutableArray *pngList2 = [[NSMutableArray alloc] init];
		NSMutableArray *sortedArray = [[NSMutableArray alloc] init];		
	
	        NSArray *dirContents = [[NSFileManager defaultManager] directoryContentsAtPath:@"/tmp/"];
       	 	for (NSString *tString1 in dirContents) {
        		if ([tString1 hasSuffix:@".png"]) {
				tString1 = [tString1 stringByReplacingOccurrencesOfString:@"test" withString:@""];
				tString1 = [tString1 stringByReplacingOccurrencesOfString:@".png" withString:@""];
	               		[pngList2 addObject:tString1];
               		}	
        	}
		[pngList2 sortUsingDescriptors: [NSArray arrayWithObject:[[[NSSortDescriptor alloc] initWithKey:@"doubleValue" ascending:YES] autorelease]]];

		sortedArray = [pngList2 copy];
	
		NSString *lastObjectStr = [sortedArray lastObject];
		NSLog(@"lastObjectStr: %@",lastObjectStr);	

	     	for(NSString *str1 in sortedArray){
       	 		NSLog(@"List of screenshots : test%@.png",str1);
       		}  
	
		NSNumber *newCounter = [NSNumber numberWithInteger:[lastObjectStr integerValue]];
		value = [newCounter intValue];
		newCounter = [NSNumber numberWithInt:value +1];
		NSLog(@"Next filename: test%@.png",[newCounter stringValue]);
	
		NSString  *jpgPath = [NSString stringWithFormat:@"/tmp/test%@.png",[newCounter stringValue]];
		CGImageRef cgScreen = UIGetScreenImage();
		UIImage *screenshot = [UIImage imageWithCGImage:cgScreen];	
		CGImageRelease(cgScreen);
       		NSData *imageData = [NSData dataWithData:UIImagePNGRepresentation(screenshot)];
		[imageData writeToFile:jpgPath atomically:YES];
		
        	[pngList2 release];
        	[sortedArray release];
        	[pool release];
	}
}

//%hook UINavigationController
//-(void)viewDidAppear:(BOOL)view{
//	screenCapture();
//	%orig;
//}
//%end

//%hook UITableViewController
//-(void)viewDidAppear:(BOOL)view{
//	screenCapture();
//	%orig;
//}
//%end

//%hook UITabBarController
//-(void)viewDidAppear:(BOOL)view{
//	screenCapture();
//	%orig;
//}
//%end

//%hook UITableViewController 
//-(void)viewDidLoad{
//	screenCapture();
//	%orig;
//}
//%end

%hook UIViewController
-(void)viewDidLoad{
	initialLaunch=0;
	%orig;
}
-(BOOL)isViewLoaded{
	screenCapture();
	return %orig;
}

-(void)applicationWillSuspend{
	NSLog(@"appWillSuspend");
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	NSMutableArray *pngList3 = [[NSMutableArray alloc] init];

	NSData *dataBuffer = [[NSData alloc] init];

	NSArray *dirContents = [[NSFileManager defaultManager] directoryContentsAtPath:@"/tmp/"];
	for (NSString *tString in dirContents) {
    		if ([tString hasSuffix:@".png"]) {
			[pngList3 addObject:tString];
		}
	}
	NSFileManager *fileMgr = [[NSFileManager alloc] init];
	NSMutableArray *newPngListMD5 =  [[NSMutableArray alloc] init];
	NSMutableArray *newPngListFile = [[NSMutableArray alloc] init];

	//MD5 the files and add to Array for comparison later
	for(NSString *anID in pngList3){
		dataBuffer = [fileMgr contentsAtPath: [NSString stringWithFormat:@"/tmp/%@",anID]];
		unsigned char result[16];
		CC_MD5(dataBuffer.bytes, dataBuffer.length, result);
		NSString *md5String = [NSString stringWithFormat:
       	 		@"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
       	 		result[0], result[1], result[2], result[3], 
       	 		result[4], result[5], result[6], result[7],
       	 		result[8], result[9], result[10], result[11],
       	 		result[12], result[13], result[14], result[15]
      			];
			[newPngListMD5 addObject:md5String];
			[newPngListFile addObject:anID];
	}
	//Remove Duplicated Images
	NSArray *copy = [newPngListMD5 copy];
	NSInteger index = [copy count] - 1;
	for (id object in [copy reverseObjectEnumerator]) {
    		if ([newPngListMD5 indexOfObject:object inRange:NSMakeRange(0, index)] != NSNotFound) {
			[fileMgr removeItemAtPath: [NSString stringWithFormat:@"/tmp/%@",[newPngListFile objectAtIndex:index]] error: NULL];
			NSLog(@"Deleted file: %@", [newPngListFile objectAtIndex:index]);	
       			[newPngListFile removeObjectAtIndex:index];	
       			[newPngListMD5 removeObjectAtIndex:index];
    		}
    		index--;
	}

	[newPngListMD5 release];
	[fileMgr release];
	[newPngListFile release];
	[pool release];
	%orig;
}

%end


//%hook UIView
//-(BOOL)isEnabled{
//	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
//	NSLog(@"view isEnabled");
//	[pool release];
//	return %orig;
//}
//%end


