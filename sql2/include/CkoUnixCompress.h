// Chilkat Objective-C header.
// Generic/internal class name =  UnixCompress
// Wrapped Chilkat C++ class name =  CkUnixCompress



@interface CkoUnixCompress : NSObject {

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

// method: CompressFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)CompressFile: (NSString *)inFilename 
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

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UnTarZ
// m_cppType = bool
// arg:zFilename - const char *
// arg:destDir - const char *
// arg:bNoAbsolute - bool
- (BOOL)UnTarZ: (NSString *)zFilename 
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


@end
