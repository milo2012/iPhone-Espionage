// Chilkat Objective-C header.
// Generic/internal class name =  Charset
// Wrapped Chilkat C++ class name =  CkCharset



@interface CkoCharset : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: AltToCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:charsetName - const char *
- (NSString *)AltToCharset;

// property setter: AltToCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:charsetName - const char *
- (void)setAltToCharset: (NSString *)input;

// property getter: ErrorAction
// m_cppType = int
// arg:val - int
- (NSNumber *)ErrorAction;

// property setter: ErrorAction
// m_cppType = int
// arg:val - int
- (void)setErrorAction: (NSNumber *)intVal;

// property getter: FromCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:charset - const char *
- (NSString *)FromCharset;

// property setter: FromCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:charset - const char *
- (void)setFromCharset: (NSString *)input;

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

// property getter: LastInputAsHex
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastInputAsHex;

// property getter: LastInputAsQP
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastInputAsQP;

// property getter: LastOutputAsHex
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastOutputAsHex;

// property getter: LastOutputAsQP
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastOutputAsQP;

// property getter: SaveLast
// m_cppType = bool
// arg:value - bool
- (BOOL)SaveLast;

// property setter: SaveLast
// m_cppType = bool
// arg:value - bool
- (void)setSaveLast: (BOOL)boolVal;

// property getter: ToCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:charset - const char *
- (NSString *)ToCharset;

// property setter: ToCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:charset - const char *
- (void)setToCharset: (NSString *)input;

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: CharsetToCodePage
// m_cppType = int
// arg:charsetName - const char *
- (NSNumber *)CharsetToCodePage: (NSString *)charsetName;

// method: CodePageToCharset
// m_cppType = bool
// arg:codePage - int
// arg:outCharset - CkString &
- (NSString *)CodePageToCharset: (NSNumber *)codePage;

// method: ConvertData
// m_cppType = bool
// arg:inData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)ConvertData: (NSData *)inData;

// method: ConvertFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)ConvertFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: ConvertFileNoPreamble
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)ConvertFileNoPreamble: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: ConvertFromUnicode
// m_cppType = bool
// arg:uniData - const CkByteData &
// arg:outMbData - CkByteData &
- (NSData *)ConvertFromUnicode: (NSData *)uniData;

// method: ConvertHtml
// m_cppType = bool
// arg:htmlIn - const CkByteData &
// arg:outHtml - CkByteData &
- (NSData *)ConvertHtml: (NSData *)htmlIn;

// method: ConvertHtmlFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)ConvertHtmlFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: ConvertToUnicode
// m_cppType = bool
// arg:mbData - const CkByteData &
// arg:outUniData - CkByteData &
- (NSData *)ConvertToUnicode: (NSData *)mbData;

// method: EntityEncodeDec
// m_cppType = void
// arg:inStr - const char *
// arg:outStr - CkString &
- (NSString *)EntityEncodeDec: (NSString *)inStr;

// method: EntityEncodeHex
// m_cppType = void
// arg:inStr - const char *
// arg:outStr - CkString &
- (NSString *)EntityEncodeHex: (NSString *)inStr;

// method: GetHtmlCharset
// m_cppType = bool
// arg:htmlData - const CkByteData &
// arg:outCharset - CkString &
- (NSString *)GetHtmlCharset: (NSData *)htmlData;

// method: GetHtmlFileCharset
// m_cppType = bool
// arg:htmlFilename - const char *
// arg:outCharset - CkString &
- (NSString *)GetHtmlFileCharset: (NSString *)htmlFilename;

// method: HtmlDecodeToStr
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)HtmlDecodeToStr: (NSString *)str;

// method: HtmlEntityDecode
// m_cppType = bool
// arg:inData - CkByteData &
// arg:outData - CkByteData &
- (NSData *)HtmlEntityDecode: (NSData *)inData;

// method: HtmlEntityDecodeFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)HtmlEntityDecodeFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: LowerCase
// m_cppType = void
// arg:inStr - const char *
// arg:outStr - CkString &
- (NSString *)LowerCase: (NSString *)inStr;

// method: ReadFile
// m_cppType = bool
// arg:filename - const char *
// arg:outData - CkByteData &
- (NSData *)ReadFile: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetErrorBytes
// m_cppType = void
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
- (void)SetErrorBytes: (NSData *)data 
	dataLen: (NSNumber *)dataLen;

// method: SetErrorString
// m_cppType = void
// arg:str - const char *
- (void)SetErrorString: (NSString *)str;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UpperCase
// m_cppType = void
// arg:inStr - const char *
// arg:outStr - CkString &
- (NSString *)UpperCase: (NSString *)inStr;

// method: UrlDecodeStr
// m_cppType = bool
// arg:inStr - const char *
// arg:outStr - CkString &
- (NSString *)UrlDecodeStr: (NSString *)inStr;

// method: VerifyData
// m_cppType = bool
// arg:charset - const char *
// arg:charData - const CkByteData &
- (BOOL)VerifyData: (NSString *)charset 
	charData: (NSData *)charData;

// method: VerifyFile
// m_cppType = bool
// arg:charset - const char *
// arg:filename - const char *
- (BOOL)VerifyFile: (NSString *)charset 
	filename: (NSString *)filename;

// method: WriteFile
// m_cppType = bool
// arg:filename - const char *
// arg:dataBuf - const CkByteData &
- (BOOL)WriteFile: (NSString *)filename 
	dataBuf: (NSData *)dataBuf;


@end
