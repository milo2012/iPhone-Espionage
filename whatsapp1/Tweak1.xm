#import "ASIHTTPRequestConfig.h"
#import "ASIHTTPRequestDelegate.h"
#import "ASIProgressDelegate.h"
#import "ASICacheDelegate.h"
#import "ASIHTTPRequest.h"
#import "ASIDataCompressor.h"
#import "ASIDataDecompressor.h"
#import "ASIFormDataRequest.h"
#import "ASIInputStream.h"
#import "ASINetworkQueue.h"
#import "ASIDownloadCache.h"
#import "Reachability.h"
#import "ASIAuthenticationDialog.h"

%hook XMPPStream
-(void)processIncomingMessages:(id)arg1 {
	%log;
  
	NSURL *url = [NSURL URLWithString:@"http://allseeing-i.com"];
  	ASIHTTPRequest *request = [ASIHTTPRequest requestWithURL:url];
  	[request startSynchronous];
  	NSError *error = [request error];
  	if (!error) {
		NSString *response = [request responseString];
  	}

	NSString *string;
	string = arg1;
	NSLog(@"processIncomingMessages:%@",string);
	return %orig;
}
%end
