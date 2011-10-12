// Chilkat Objective-C header.
// Generic/internal class name =  Gzip
// Wrapped Chilkat C++ class name =  CkGzip



@interface CkoGzip : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Comment
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Comment;

// property setter: Comment
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setComment: (NSString *)input;

// property getter: ExtraData
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (NSData *)ExtraData;

// property setter: ExtraData
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (void)setExtraData: (NSData *)data;

// property getter: ExtraData
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (NSMutableData *)ExtraDataMutable;

// property setter: ExtraData
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (void)setExtraDataMutable: (NSMutableData *)data;

// property getter: Filename
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Filename;

// property setter: Filename
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setFilename: (NSString *)input;

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

// property getter: LastMod
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)LastMod;

// property setter: LastMod
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (void)setLastMod: (NSDate *)dateVal;

// property getter: UseCurrentDate
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseCurrentDate;

// property setter: UseCurrentDate
// m_cppType = bool
// arg:newVal - bool
- (void)setUseCurrentDate: (BOOL)boolVal;

// property getter: VerboseLogging
// m_cppType = bool
// arg:newVal - bool
- (BOOL)VerboseLogging;

// property setter: VerboseLogging
// m_cppType = bool
// arg:newVal - bool
- (void)setVerboseLogging: (BOOL)boolVal;

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: CompressFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)CompressFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: CompressFile2
// m_cppType = bool
// arg:inFilename - const char *
// arg:embeddedFilename - const char *
// arg:outFilename - const char *
- (BOOL)CompressFile2: (NSString *)inFilename 
	embeddedFilename: (NSString *)embeddedFilename 
	outFilename: (NSString *)outFilename;

// method: CompressFileToMem
// m_cppType = bool
// arg:inFilename - const char *
// arg:outData - CkByteData &
- (NSData *)CompressFileToMem: (NSString *)inFilename;

// method: CompressMemToFile
// m_cppType = bool
// arg:db - const CkByteData &
// arg:outFilename - const char *
- (BOOL)CompressMemToFile: (NSData *)db 
	outFilename: (NSString *)outFilename;

// method: CompressMemory
// m_cppType = bool
// arg:dbIn - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)CompressMemory: (NSData *)dbIn;

// method: CompressString
// m_cppType = bool
// arg:inStr - const char *
// arg:outCharset - const char *
// arg:outBytes - CkByteData &
- (NSData *)CompressString: (NSString *)inStr 
	outCharset: (NSString *)outCharset;

// method: CompressStringToFile
// m_cppType = bool
// arg:inStr - const char *
// arg:outCharset - const char *
// arg:outFilename - const char *
- (BOOL)CompressStringToFile: (NSString *)inStr 
	outCharset: (NSString *)outCharset 
	outFilename: (NSString *)outFilename;

// method: Decode
// m_cppType = bool
// arg:str - const char *
// arg:encoding - const char *
// arg:outBytes - CkByteData &
- (NSData *)Decode: (NSString *)str 
	encoding: (NSString *)encoding;

// method: DeflateStringENC
// m_cppType = void
// arg:str - const char *
// arg:charset - const char *
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)DeflateStringENC: (NSString *)str 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;

// method: Encode
// m_cppType = bool
// arg:byteData - CkByteData &
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)Encode: (NSData *)byteData 
	encoding: (NSString *)encoding;

// method: ExamineFile
// m_cppType = bool
// arg:inGzFilename - const char *
- (BOOL)ExamineFile: (NSString *)inGzFilename;

// method: ExamineMemory
// m_cppType = bool
// arg:inGzData - CkByteData &
- (BOOL)ExamineMemory: (NSData *)inGzData;

// method: InflateStringENC
// m_cppType = void
// arg:str - const char *
// arg:charset - const char *
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)InflateStringENC: (NSString *)str 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: ReadFile
// m_cppType = bool
// arg:filename - const char *
// arg:outBytes - CkByteData &
- (NSData *)ReadFile: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UnTarGz
// m_cppType = bool
// arg:gzFilename - const char *
// arg:destDir - const char *
// arg:bNoAbsolute - bool
- (BOOL)UnTarGz: (NSString *)gzFilename 
	destDir: (NSString *)destDir 
	bNoAbsolute: (BOOL)bNoAbsolute;

// method: UncompressFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)UncompressFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: UncompressFileToMem
// m_cppType = bool
// arg:inFilename - const char *
// arg:outData - CkByteData &
- (NSData *)UncompressFileToMem: (NSString *)inFilename;

// method: UncompressFileToString
// m_cppType = bool
// arg:inFilename - const char *
// arg:inCharset - const char *
// arg:outStr - CkString &
- (NSString *)UncompressFileToString: (NSString *)inFilename 
	inCharset: (NSString *)inCharset;

// method: UncompressMemToFile
// m_cppType = bool
// arg:db - const CkByteData &
// arg:outFilename - const char *
- (BOOL)UncompressMemToFile: (NSData *)db 
	outFilename: (NSString *)outFilename;

// method: UncompressMemory
// m_cppType = bool
// arg:dbIn - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)UncompressMemory: (NSData *)dbIn;

// method: UncompressString
// m_cppType = bool
// arg:inData - CkByteData &
// arg:inCharset - const char *
// arg:outStr - CkString &
- (NSString *)UncompressString: (NSData *)inData 
	inCharset: (NSString *)inCharset;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: WriteFile
// m_cppType = bool
// arg:filename - const char *
// arg:binaryData - CkByteData &
- (BOOL)WriteFile: (NSString *)filename 
	binaryData: (NSData *)binaryData;

// method: XfdlToXml
// m_cppType = bool
// arg:xfdl - const char *
// arg:outStr - CkString &
- (NSString *)XfdlToXml: (NSString *)xfdl;


@end
