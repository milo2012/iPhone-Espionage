#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>
#import <Foundation/Foundation.h>
#import "MicDelegate.h"

int main(int argc, char *argv[]) {
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

	NSArray *arguments = [[NSProcessInfo processInfo] arguments];
	NSString *timeToRecord = [arguments objectAtIndex: 1];

	MicDelegate *obj = [[MicDelegate alloc] init];
	
	[obj start];
	
	NSDate *now = [[NSDate alloc] init];
	NSTimer *timer = [[NSTimer alloc] initWithFireDate:now
		  interval:5*60
		  target:obj
		  selector:@selector(keepApplicationRunning:)	
		  userInfo:nil
		  repeats:YES];

	NSRunLoop *runLoop = [NSRunLoop currentRunLoop];
	[runLoop addTimer:timer forMode:NSDefaultRunLoopMode];
	[runLoop run];

	[timeToRecord release];
	[timer release];
	[pool release];
	return 0;
}

