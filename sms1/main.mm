#include <stdio.h>
#include <notify.h>
#include <unistd.h>
#include <stdarg.h>
#import <Foundation/Foundation.h>
#import <Foundation/NSDictionary.h>
//#import <CoreTelephony/CTMessageCenter.h>
#import <CoreTelephony/CTCall.h>
#import <CoreTelephony/CTCallCenter.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTMessageStatus.h>
#import <CoreTelephony/CTMessagePart.h>
#import <CoreTelephony/CDStructures.h>
#import <CoreTelephony/CTMessageCenter.h>

typedef struct __CTSMSMessage CTSMSMessage;
NSString *CTSMSMessageCopyAddress(void *, CTSMSMessage *);
NSString *CTSMSMessageCopyText(void *, CTSMSMessage *);

id CTTelephonyCenterGetDefault(void);
void CTTelephonyCenterAddObserver(id,id,CFNotificationCallback,NSString*,void*,int);

static void callback(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo) {
    //fprintf(stderr, "Notification intercepted: %s\n", [name UTF8String]);
    fprintf(stderr, "Notification intercepted: %s\n", (char *)name);
    if (userInfo) CFShow(userInfo);
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
    printf("-s     listen to standard notifications\n");
    printf("-t     listen to core telephony notifications\n");
}

int main(int argc, char **argv)
{
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

    if (argc < 2) {usage(argv[0]); exit(0);}

    NSString *readNotifications = @"";
    NSArray *notifications = [readNotifications componentsSeparatedByString:@"BOUNDARY"];

    opterr = 0;
    int c;
    BOOL isTelephony = NO;
    BOOL isStandard = NO;

    while ((c = getopt (argc, argv, "ts")) != -1)
     switch (c)
     {
        case 's': 
            isStandard = YES;
             break;
        case 't': 
            isTelephony = YES;
            break;
        case '?':
         if (isprint (optopt))
            fprintf (stderr, "Unknown option `-%c'.\n", optopt);
         else
            fprintf (stderr,
            "Unknown option character `\\x%x'.\n",
            optopt);
         return 1;
        default:
         return 0;
     }

    if ((!isStandard) && (!isTelephony))
    {
        printf("Listen either to standard (-s), telephony (-t) notifications or both\n");
        printf("No notification type selected. Exiting.\n");
        exit(-1);
    }

    if (isStandard)
    {
        printf("Watching for Standard Notifications (%d notifications)\n", [notifications count]);

        for (id *notification in notifications)
        {
         CFNotificationCenterAddObserver(
                                 CFNotificationCenterGetDarwinNotifyCenter(),
                                 NULL,
                                 callback,
                                 NULL,
                                 NULL,
                                 CFNotificationSuspensionBehaviorHold);
    

        }
    }

    if (isTelephony)
    {
        printf("Watching for Core Telephony notifications\n");
        id ct = CTTelephonyCenterGetDefault();
        CTTelephonyCenterAddObserver(
            ct, 
            NULL, 
            callback,
            NULL,
            NULL,
            CFNotificationSuspensionBehaviorHold);
    }

    // Set up a signal handler so we can clean up when we're interrupted from the command line
    sig_t oldHandler = signal(SIGINT, signalHandler);
    if (oldHandler == SIG_ERR) {
        printf("Could not establish new signal handler");
        exit(1);
    }

    // Start the run loop. Now we'll receive notifications.
    printf("Starting Notification Scan. ^C to quit.\n");
    CFRunLoopRun();
        
    printf("Unexpectedly back from CFRunLoopRun()!\n");
    [pool release];
}
