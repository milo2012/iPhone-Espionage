// Chilkat Objective-C header.
// Generic/internal class name =  HtmlToXml
// Wrapped Chilkat C++ class name =  CkHtmlToXml



@interface CkoHtmlToXml : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: DropCustomTags
// m_cppType = bool
// arg:v - bool
- (BOOL)DropCustomTags;

// property setter: DropCustomTags
// m_cppType = bool
// arg:v - bool
- (void)setDropCustomTags: (BOOL)boolVal;

// property getter: Html
// m_cppType = CkString &
// arg:html - const char *
// arg:str - CkString &
- (NSString *)Html;

// property setter: Html
// m_cppType = CkString &
// arg:html - const char *
// arg:str - CkString &
- (void)setHtml: (NSString *)input;

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

// property getter: Nbsp
// m_cppType = long
// arg:v - long
- (NSNumber *)Nbsp;

// property setter: Nbsp
// m_cppType = long
// arg:v - long
- (void)setNbsp: (NSNumber *)longVal;

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// property getter: XmlCharset
// m_cppType = CkString &
// arg:charset - const char *
// arg:str - CkString &
- (NSString *)XmlCharset;

// property setter: XmlCharset
// m_cppType = CkString &
// arg:charset - const char *
// arg:str - CkString &
- (void)setXmlCharset: (NSString *)input;

// method: ConvertFile
// m_cppType = bool
// arg:inHtmlFilename - const char *
// arg:outXmlFilename - const char *
- (BOOL)ConvertFile: (NSString *)inHtmlFilename 
	outXmlFilename: (NSString *)outXmlFilename;

// method: DropTagType
// m_cppType = void
// arg:tagName - const char *
- (void)DropTagType: (NSString *)tagName;

// method: DropTextFormattingTags
// m_cppType = void
- (void)DropTextFormattingTags;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: ReadFileToString
// m_cppType = bool
// arg:filename - const char *
// arg:srcCharset - const char *
// arg:outStr - CkString &
- (NSString *)ReadFileToString: (NSString *)filename 
	srcCharset: (NSString *)srcCharset;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetHtmlBytes
// m_cppType = void
// arg:inData - CkByteData &
- (void)SetHtmlBytes: (NSData *)inData;

// method: SetHtmlFromFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SetHtmlFromFile: (NSString *)filename;

// method: ToXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToXml;

// method: UndropTagType
// m_cppType = void
// arg:tagName - const char *
- (void)UndropTagType: (NSString *)tagName;

// method: UndropTextFormattingTags
// m_cppType = void
- (void)UndropTextFormattingTags;

// method: UnlockComponent
// m_cppType = bool
// arg:code - const char *
- (BOOL)UnlockComponent: (NSString *)code;

// method: WriteStringToFile
// m_cppType = bool
// arg:str - const char *
// arg:filename - const char *
// arg:charset - const char *
- (BOOL)WriteStringToFile: (NSString *)str 
	filename: (NSString *)filename 
	charset: (NSString *)charset;

// method: Xml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)Xml;


@end
