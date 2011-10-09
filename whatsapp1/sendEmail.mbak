#import "sendEmail.h"
@implementation sendEmail

+(void)doThis:(NSString *)msg:(NSString *)title;
{
	NSMutableString *strOutput = [NSMutableString stringWithCapacity:1000];

	CkoMailMan *mailman = [[[CkoMailMan alloc] init] autorelease];
	BOOL success;
	success = [mailman UnlockComponent: @""];
	if (success != YES) {
    		[strOutput appendString: mailman.LastErrorText];
    		[strOutput appendString: @"\n"];
   		NSLog(@"%@",strOutput); 
	}

	
	//  Set the SMTP server.
	mailman.SmtpHost = @"smtp.gmail.com";

	mailman.SmtpUsername = @"";
	mailman.SmtpPassword = @"";

	mailman.SmtpSsl = YES;
	mailman.SmtpPort = [NSNumber numberWithInt:465];
	
	//  Create a new email object
	CkoEmail *email = [[[CkoEmail alloc] init] autorelease];

	email.Subject = title;
	
	//email.Subject = @"Incoming WhatsApp Message";
	
	email.Body = msg;
	
	//email.Body = @"This is a test";
	//NSString *argStr = [[NSString alloc] initWithString:arg1];
	//email.Body = @"argStr";
	//NSLog(argStr);
	//email.Body = @"test";

	email.From = @"keithtest10@gmail.com <keithtest10@gmail.com>";
	[email AddTo: @"keithtest10@gmail.com" emailAddress: @"keithtest10@gmail.com"];

	success = [mailman SendEmail: email];
	if (success != YES) {
    		[strOutput appendString: mailman.LastErrorText];
    		[strOutput appendString: @"\n"];
    		NSLog(@"results: %@",strOutput);
	}

	success = [mailman CloseSmtpConnection];
	if (success != YES) {
    		[strOutput appendString: @"Connection to SMTP server not closed cleanly."];
    		[strOutput appendString: @"\n"];
	}

	[strOutput appendString: @"Mail Sent!"];
	[strOutput appendString: @"\n"];
	
 	NSLog(@"%@",strOutput); 
	//[strOutput release];

}

@end
