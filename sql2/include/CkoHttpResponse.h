// Chilkat Objective-C header.
// Generic/internal class name =  HttpResponse
// Wrapped Chilkat C++ class name =  CkHttpResponse



@interface CkoHttpResponse : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Body
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSData *)Body;

// property getter: Body
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)BodyMutable;

// property getter: BodyQP
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)BodyQP;

// property getter: BodyStr
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)BodyStr;

// property getter: Charset
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Charset;

// property getter: ContentLength
// m_cppType = unsigned long
- (NSNumber *)ContentLength;

// property getter: Date
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)Date;

// property getter: Domain
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Domain;

// property getter: Header
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Header;

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

// property getter: NumCookies
// m_cppType = int
- (NSNumber *)NumCookies;

// property getter: NumHeaderFields
// m_cppType = int
- (NSNumber *)NumHeaderFields;

// property getter: StatusCode
// m_cppType = int
- (NSNumber *)StatusCode;

// property getter: StatusLine
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)StatusLine;

// method: GetCookieDomain
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetCookieDomain: (NSNumber *)index;

// method: GetCookieExpires
// m_cppType = bool
// arg:index - int
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetCookieExpires: (NSNumber *)index;

// method: GetCookieExpiresStr
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetCookieExpiresStr: (NSNumber *)index;

// method: GetCookieName
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetCookieName: (NSNumber *)index;

// method: GetCookiePath
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetCookiePath: (NSNumber *)index;

// method: GetCookieValue
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetCookieValue: (NSNumber *)index;

// method: GetHeaderField
// m_cppType = bool
// arg:fieldName - const char *
// arg:outStr - CkString &
- (NSString *)GetHeaderField: (NSString *)fieldName;

// method: GetHeaderFieldAttr
// m_cppType = bool
// arg:fieldName - const char *
// arg:attrName - const char *
// arg:outStr - CkString &
- (NSString *)GetHeaderFieldAttr: (NSString *)fieldName 
	attrName: (NSString *)attrName;

// method: GetHeaderName
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetHeaderName: (NSNumber *)index;

// method: GetHeaderValue
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetHeaderValue: (NSNumber *)index;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;


@end
