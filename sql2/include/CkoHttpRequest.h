// Chilkat Objective-C header.
// Generic/internal class name =  HttpRequest
// Wrapped Chilkat C++ class name =  CkHttpRequest



@interface CkoHttpRequest : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Charset
// m_cppType = CkString &
// arg:charset - const char *
// arg:str - CkString &
- (NSString *)Charset;

// property setter: Charset
// m_cppType = CkString &
// arg:charset - const char *
// arg:str - CkString &
- (void)setCharset: (NSString *)input;

// property getter: HttpVersion
// m_cppType = CkString &
// arg:version - const char *
// arg:str - CkString &
- (NSString *)HttpVersion;

// property setter: HttpVersion
// m_cppType = CkString &
// arg:version - const char *
// arg:str - CkString &
- (void)setHttpVersion: (NSString *)input;

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

// property getter: NumHeaderFields
// m_cppType = int
- (NSNumber *)NumHeaderFields;

// property getter: NumParams
// m_cppType = int
- (NSNumber *)NumParams;

// property getter: Path
// m_cppType = CkString &
// arg:path - const char *
// arg:str - CkString &
- (NSString *)Path;

// property setter: Path
// m_cppType = CkString &
// arg:path - const char *
// arg:str - CkString &
- (void)setPath: (NSString *)input;

// property getter: SendCharset
// m_cppType = bool
// arg:val - bool
- (BOOL)SendCharset;

// property setter: SendCharset
// m_cppType = bool
// arg:val - bool
- (void)setSendCharset: (BOOL)boolVal;

// method: AddBytesForUpload
// m_cppType = bool
// arg:name - const char *
// arg:filename - const char *
// arg:byteData - CkByteData &
- (BOOL)AddBytesForUpload: (NSString *)name 
	filename: (NSString *)filename 
	byteData: (NSData *)byteData;

// method: AddBytesForUpload2
// m_cppType = bool
// arg:name - const char *
// arg:filename - const char *
// arg:byteData - CkByteData &
// arg:contentType - const char *
- (BOOL)AddBytesForUpload2: (NSString *)name 
	filename: (NSString *)filename 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType;

// method: AddFileForUpload
// m_cppType = bool
// arg:name - const char *
// arg:filename - const char *
- (BOOL)AddFileForUpload: (NSString *)name 
	filename: (NSString *)filename;

// method: AddFileForUpload2
// m_cppType = bool
// arg:name - const char *
// arg:filename - const char *
// arg:contentType - const char *
- (BOOL)AddFileForUpload2: (NSString *)name 
	filename: (NSString *)filename 
	contentType: (NSString *)contentType;

// method: AddHeader
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)AddHeader: (NSString *)name 
	value: (NSString *)value;

// method: AddParam
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)AddParam: (NSString *)name 
	value: (NSString *)value;

// method: AddStringForUpload
// m_cppType = bool
// arg:name - const char *
// arg:filename - const char *
// arg:strData - const char *
// arg:charset - const char *
- (BOOL)AddStringForUpload: (NSString *)name 
	filename: (NSString *)filename 
	strData: (NSString *)strData 
	charset: (NSString *)charset;

// method: AddStringForUpload2
// m_cppType = bool
// arg:name - const char *
// arg:filename - const char *
// arg:strData - const char *
// arg:charset - const char *
// arg:contentType - const char *
- (BOOL)AddStringForUpload2: (NSString *)name 
	filename: (NSString *)filename 
	strData: (NSString *)strData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType;

// method: GenerateRequestText
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)GenerateRequestText;

// method: GetHeaderField
// m_cppType = bool
// arg:name - const char *
// arg:outStr - CkString &
- (NSString *)GetHeaderField: (NSString *)name;

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

// method: GetParam
// m_cppType = bool
// arg:name - const char *
// arg:outStr - CkString &
- (NSString *)GetParam: (NSString *)name;

// method: GetParamName
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetParamName: (NSNumber *)index;

// method: GetParamValue
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetParamValue: (NSNumber *)index;

// method: GetUrlEncodedParams
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetUrlEncodedParams;

// method: LoadBodyFromBytes
// m_cppType = bool
// arg:binaryData - CkByteData &
- (BOOL)LoadBodyFromBytes: (NSData *)binaryData;

// method: LoadBodyFromFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadBodyFromFile: (NSString *)filename;

// method: LoadBodyFromString
// m_cppType = bool
// arg:bodyStr - const char *
// arg:charset - const char *
- (BOOL)LoadBodyFromString: (NSString *)bodyStr 
	charset: (NSString *)charset;

// method: RemoveAllParams
// m_cppType = void
- (void)RemoveAllParams;

// method: RemoveParam
// m_cppType = void
// arg:name - const char *
- (void)RemoveParam: (NSString *)name;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetFromUrl
// m_cppType = void
// arg:url - const char *
- (void)SetFromUrl: (NSString *)url;

// method: UseGet
// m_cppType = void
- (void)UseGet;

// method: UseHead
// m_cppType = void
- (void)UseHead;

// method: UsePost
// m_cppType = void
- (void)UsePost;

// method: UsePostMultipartForm
// m_cppType = void
- (void)UsePostMultipartForm;

// method: UsePut
// m_cppType = void
- (void)UsePut;

// method: UseUpload
// m_cppType = void
- (void)UseUpload;

// method: UseUploadPut
// m_cppType = void
- (void)UseUploadPut;

// method: UseXmlHttp
// m_cppType = void
// arg:xmlBody - const char *
- (void)UseXmlHttp: (NSString *)xmlBody;


@end
