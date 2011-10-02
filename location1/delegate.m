#import "delegate.h"

@implementation delegate
//CLLocation *oldLocation = [[CLLocation alloc] init];
//CLLocation *newLocation = [[CLLocation alloc] init];

	
- (void)start:(int)_distance:(int)_sleepTime{
	distance=_distance;
	sleepTime=_sleepTime;
        locationManager = [[CLLocationManager alloc] init];
        locationManager.delegate = self;
        [locationManager startUpdatingLocation];
	printf("Update every %d km\n",distance);
}

-(void) startItAgain:(NSTimer *)timer{
	[locationManager startUpdatingLocation];
}

- (void)locationManager:(CLLocationManager *)manager
        didUpdateToLocation:(CLLocation *)newLocation
	                   fromLocation:(CLLocation *)oldLocation
{
    double dist = [newLocation getDistanceFrom:oldLocation]/1000;
    if(newLocation.horizontalAccuracy < 100){
	int convertToSeconds = sleepTime*60;
	//printf("Sleeping for %d minutes",sleepTime);
	NSLog(@"Sleeping for %d minutes",sleepTime);
	[locationManager stopUpdatingLocation];
	NSTimer *timer = [[NSTimer timerWithTimeInterval:convertToSeconds
				   target:self
				   selector:@selector(startItAgain:)
				   userInfo:nil
				   repeats:NO
				   ]retain];
	[[NSRunLoop currentRunLoop] addTimer:timer forMode:NSDefaultRunLoopMode];
	[timer release];
	NSLog(@"No updates");
    }else{
	NSLog(@"Distance moved: %@",dist);
    }		
    if(dist>distance){
	//Send email with new location
        //printf ( "newLocation: %s\n", [newLocation.description UTF8String]);
    }
    //printf ( "oldLocation: %s\n", [oldLocation.description UTF8String]);
}

- (void)locationManager:(CLLocationManager *)manager
           didFailWithError:(NSError *)error
{
    printf ( "ERROR: %s\n", [[error localizedDescription] UTF8String]);
        exit(1);
}

@end
