#import <sqlite3.h>
//#import "/usr/include/sqlite3.h"

#define allTrim( object ) [object stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet] 

int main(int argc, char **argv, char **envp) {
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	NSString *addressBook = @"/private/var/mobile/Library/AddressBook/AddressBook.sqlitedb";
	NSString *smsDB = @"/private/var/mobile/Library/SMS/sms.db";
	NSString *cellTowerLocation = @"/private/var/root/Library/Caches/locationd/consolidated.db";
	NSString *callHistoryMobile = @"/private/var/mobile/Library/CallHistory/call_history.db";
	NSString *callHistoryWireless  = @"/private/var/wireless/Library/CallHistory/call_history.db"; 
	NSString *googleMaps = @"/mobile/Library/Caches/Map/Tiles/MapTiles.sqlitedb";
	NSString *emailDB = @"/mobile/Library/Mail/Envelope Index";
	NSString *voiceMail = @"/mobile/Library/Voicemail/voicemail.db";	
	NSString *addressBook = @"/private/var/root/Library/AddressBook/AddressBook.sqlitedb";
	NSString *addressBookImages = @"/private/var/root/Library/AddressBook/AddressBookImages.sqlitedb";

	sqlite3 *database;
	sqlite3_stmt *statement;

	if(sqlite3_open([addressBook UTF8String],&database)==SQLITE_OK){
		const char *sqlStatement = "select ABPerson.prefix, ABPerson.first,ABPerson.last, ABMultiValue.value from ABPerson,ABMultiValue where ABMultiValue.record_id=ABPerson.ROWID";
		NSError* error = nil;
		sqlite3_prepare_v2(database,sqlStatement,-1,&statement,nil);
		if(error!=nil){
			NSLog(@"Error: %@ %@",error, [error userInfo]);
		}else{
			
			while(sqlite3_step(statement)==SQLITE_ROW)
			{		
				char *firstNameMessage1 = (char *)sqlite3_column_text(statement,1);
				NSString *firstNameMessage2 = nil;
				if(firstNameMessage1 != NULL){
					firstNameMessage2 = [NSString stringWithUTF8String:(char *) sqlite3_column_text(statement,1)];
				}

				char *lastNameMessage1 = (char *)sqlite3_column_text(statement,2);
				NSString *lastNameMessage2 = nil;
				if(lastNameMessage1 != NULL){
					lastNameMessage2 = [NSString stringWithUTF8String:(char *) sqlite3_column_text(statement,2)];
				}
				printf("%s\t\t%s\n",
[firstNameMessage2 UTF8String],[lastNameMessage2 UTF8String]);   

			}
		}
	}
	sqlite3_finalize(statement);
	[pool release];
	[smsDB release];
	[callHistoryMobile release];
	[callHistoryWireless release];
	[cellTowerLocation release];
	[googleMaps release];
	[emailDB release];
	[voiceMail release];
	printf("exit program\n");
	return 0;
}
