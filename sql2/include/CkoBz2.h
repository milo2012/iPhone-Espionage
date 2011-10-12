// Chilkat Objective-C header.
// Generic/internal class name =  Bz2
// Wrapped Chilkat C++ class name =  CkBz2



@interface CkoBz2 : NSObject {

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
// arg:outBytes - CkByteData &
- (NSData *)CompressFileToMem: (NSString *)inFilename;

// method: CompressMemToFile
// m_cppType = bool
// arg:inData - CkByteData &
// arg:outFilename - const char *
- (BOOL)CompressMemToFile: (NSData *)inData 
	outFilename: (NSString *)outFilename;

// method: CompressMemory
// m_cppType = bool
// arg:inData - CkByteData &
// arg:outBytes - CkByteData &
- (NSData *)CompressMemory: (NSData *)inData;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UncompressFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)UncompressFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: UncompressFileToMem
// m_cppType = bool
// arg:inFilename - const char *
// arg:outBytes - CkByteData &
- (NSData *)UncompressFileToMem: (NSString *)inFilename;

// method: UncompressMemToFile
// m_cppType = bool
// arg:inData - CkByteData &
// arg:outFilename - const char *
- (BOOL)UncompressMemToFile: (NSData *)inData 
	outFilename: (NSString *)outFilename;

// method: UncompressMemory
// m_cppType = bool
// arg:inData - CkByteData &
// arg:outBytes - CkByteData &
- (NSData *)UncompressMemory: (NSData *)inData;

// method: UnlockComponent
// m_cppType = bool
// arg:regCode - const char *
- (BOOL)UnlockComponent: (NSString *)regCode;


@end
