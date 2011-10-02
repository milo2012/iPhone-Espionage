#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import "delegate.h"

int main(int argc, char *argv[]) {	
	NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
        //int once = (argc > 1 && strcmp(argv[1],"once") == 0);

	int distance=0;
	int sleepTime;

	if(argv[1]){
		distance = atoi(argv[1]);
	}

	if(argv[2]){
		sleepTime = atoi(argv[2]);
	}
	else{
		sleepTime = 30;
	}	
        [[delegate alloc] start:distance:sleepTime];
        NSRunLoop *runLoop = [NSRunLoop currentRunLoop];
        [runLoop run];
        
        [pool release];
    return 0;
}

