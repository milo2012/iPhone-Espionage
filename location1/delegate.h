#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface delegate : NSObject <CLLocationManagerDelegate> {
        CLLocationManager *locationManager;
        int sleepTime;
	int distance;
}

- (void)start:(int)_distance:(int)_sleepTime;
@end

