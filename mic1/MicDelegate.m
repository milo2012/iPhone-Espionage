#import "MicDelegate.h"

@implementation MicDelegate

@synthesize recorder, recordSound;

-(id) init
{
	if(self = [super init])
	{
		recordSound = false;

	}
	return self;
}

-(void) keepApplicationRunning:(NSTimer *) timer{
	
}


-(void) stopIt:(NSTimer *)timer
{
	NSLog(@"Stop Recording");
	[recorder stop];
	exit(0);
}

-(void) start
{
	NSLog(@"Setting timer for 30 seconds");
	NSTimer *timer = [[NSTimer 
		timerWithTimeInterval:30.0
		target:self
		selector:@selector(stopIt:)
		userInfo:nil
		repeats:NO
		] retain];
	[[NSRunLoop currentRunLoop] addTimer:timer forMode:NSDefaultRunLoopMode];		
	[timer release];

	//if(timer != nil)[timer invalidate];
	recordSound = true;

	NSURL *url = [NSURL fileURLWithPath:@"/tmp1/tempaudio.caf"];
 		NSDictionary *settings = [NSDictionary dictionaryWithObjectsAndKeys:
 		[NSNumber numberWithFloat: 44100.0],                 AVSampleRateKey,
 		[NSNumber numberWithInt: kAudioFormatAppleLossless], AVFormatIDKey,
		[NSNumber numberWithInt: 1],                         AVNumberOfChannelsKey,
		[NSNumber numberWithInt: AVAudioQualityMedium],         AVEncoderAudioQualityKey,
         nil];

	recorder = [[AVAudioRecorder alloc] initWithURL:url settings:settings error:nil];
	if (recorder) {
                [recorder prepareToRecord];
                recorder.meteringEnabled = YES;
                [recorder record];
		NSLog(@"Start Recording");
        } else
		NSLog(@"Error");	
}


-(void) dealloc
{
	[super dealloc];
}
@end
