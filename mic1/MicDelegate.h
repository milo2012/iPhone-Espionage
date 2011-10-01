#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>
#import <Foundation/Foundation.h>


@interface MicDelegate: NSObject{
	BOOL recordSound;
	AVAudioRecorder *recorder;
}

-(void) keepApplicationRunning:(NSTimer *)timer;
-(void) start;
-(void) stopIt:(NSTimer *)timer;

@property (nonatomic, retain) AVAudioRecorder *recorder;
@property (assign) BOOL recordSound;

@end
