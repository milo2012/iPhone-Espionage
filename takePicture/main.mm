#import "RootViewController.h"
#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) {
	NSAutoreleasePool *p = [[NSAutoreleasePool alloc] init];
	RootViewController *obj = [[RootViewController alloc] init];
	[obj takePicture];
	
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


	[obj release];	
	[p drain];
	return 0;
}

// vim:ft=objc
