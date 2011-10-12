// Chilkat Objective-C header.
// Generic/internal class name =  HtmlToText
// Wrapped Chilkat C++ class name =  CkHtmlToText



@interface CkoHtmlToText : NSObject {

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

// property getter: RightMargin
// m_cppType = int
// arg:newVal - int
- (NSNumber *)RightMargin;

// property setter: RightMargin
// m_cppType = int
// arg:newVal - int
- (void)setRightMargin: (NSNumber *)intVal;

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

// method: ToText
// m_cppType = bool
// arg:html - const char *
// arg:outStr - CkString &
- (NSString *)ToText: (NSString *)html;

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


@end
