// Chilkat Objective-C header.
// Generic/internal class name =  Rss
// Wrapped Chilkat C++ class name =  CkRss



@interface CkoRss : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: LastErrorHtml
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastErrorHtml;

// property getter: LastErrorText
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastErrorText;

// property getter: LastErrorXml
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastErrorXml;

// property getter: NumChannels
// m_cppType = int
- (NSNumber *)NumChannels;

// property getter: NumItems
// m_cppType = int
- (NSNumber *)NumItems;

// method: AddNewChannel
// m_cppType = CkRss *
- (CkoRss *)AddNewChannel;

// method: AddNewImage
// m_cppType = CkRss *
- (CkoRss *)AddNewImage;

// method: AddNewItem
// m_cppType = CkRss *
- (CkoRss *)AddNewItem;

// method: DownloadRss
// m_cppType = bool
// arg:url - const char *
- (BOOL)DownloadRss: (NSString *)url;

// method: GetAttr
// m_cppType = bool
// arg:tag - const char *
// arg:attrName - const char *
// arg:outStr - CkString &
- (NSString *)GetAttr: (NSString *)tag 
	attrName: (NSString *)attrName;

// method: GetChannel
// m_cppType = CkRss *
// arg:index - int
- (CkoRss *)GetChannel: (NSNumber *)index;

// method: GetCount
// m_cppType = int
// arg:tag - const char *
- (NSNumber *)GetCount: (NSString *)tag;

// method: GetDate
// m_cppType = bool
// arg:tag - const char *
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetDate: (NSString *)tag;

// method: GetImage
// m_cppType = CkRss *
- (CkoRss *)GetImage;

// method: GetInt
// m_cppType = int
// arg:tag - const char *
- (NSNumber *)GetInt: (NSString *)tag;

// method: GetItem
// m_cppType = CkRss *
// arg:index - int
- (CkoRss *)GetItem: (NSNumber *)index;

// method: GetString
// m_cppType = bool
// arg:tag - const char *
// arg:outStr - CkString &
- (NSString *)GetString: (NSString *)tag;

// method: LoadRssFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadRssFile: (NSString *)filename;

// method: LoadRssString
// m_cppType = bool
// arg:rssString - const char *
- (BOOL)LoadRssString: (NSString *)rssString;

// method: MGetAttr
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:attrName - const char *
// arg:outStr - CkString &
- (NSString *)MGetAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName;

// method: MGetString
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:outStr - CkString &
- (NSString *)MGetString: (NSString *)tag 
	index: (NSNumber *)index;

// method: MSetAttr
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:attrName - const char *
// arg:value - const char *
- (BOOL)MSetAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName 
	value: (NSString *)value;

// method: MSetString
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:value - const char *
- (BOOL)MSetString: (NSString *)tag 
	index: (NSNumber *)index 
	value: (NSString *)value;

// method: NewRss
// m_cppType = void
- (void)NewRss;

// method: Remove
// m_cppType = void
// arg:tag - const char *
- (void)Remove: (NSString *)tag;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetAttr
// m_cppType = void
// arg:tag - const char *
// arg:attrName - const char *
// arg:value - const char *
- (void)SetAttr: (NSString *)tag 
	attrName: (NSString *)attrName 
	value: (NSString *)value;

// method: SetDate
// m_cppType = void
// arg:tag - const char *
// arg:dateTime - SYSTEMTIME &
- (void)SetDate: (NSString *)tag 
	dateTime: (NSDate *)dateTime;

// method: SetDateNow
// m_cppType = void
// arg:tag - const char *
- (void)SetDateNow: (NSString *)tag;

// method: SetInt
// m_cppType = void
// arg:tag - const char *
// arg:value - int
- (void)SetInt: (NSString *)tag 
	value: (NSNumber *)value;

// method: SetString
// m_cppType = void
// arg:tag - const char *
// arg:value - const char *
- (void)SetString: (NSString *)tag 
	value: (NSString *)value;

// method: ToXmlString
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToXmlString;


@end
