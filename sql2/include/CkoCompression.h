// Chilkat Objective-C header.
// Generic/internal class name =  Compression
// Wrapped Chilkat C++ class name =  CkCompression



@interface CkoCompression : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Algorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:alg - const char *
- (NSString *)Algorithm;

// property setter: Algorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:alg - const char *
- (void)setAlgorithm: (NSString *)input;

// property getter: Charset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Charset;

// property setter: Charset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setCharset: (NSString *)input;

// property getter: EncodingMode
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)EncodingMode;

// property setter: EncodingMode
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setEncodingMode: (NSString *)input;

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

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: BeginCompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)BeginCompressBytes: (NSData *)bData;

// method: BeginCompressBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)BeginCompressBytesENC: (NSData *)bData;

// method: BeginCompressString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)BeginCompressString: (NSString *)str;

// method: BeginCompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)BeginCompressStringENC: (NSString *)str;

// method: BeginDecompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)BeginDecompressBytes: (NSData *)bData;

// method: BeginDecompressBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)BeginDecompressBytesENC: (NSString *)str;

// method: BeginDecompressString
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)BeginDecompressString: (NSData *)bData;

// method: BeginDecompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)BeginDecompressStringENC: (NSString *)str;

// method: CompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)CompressBytes: (NSData *)bData;

// method: CompressBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)CompressBytesENC: (NSData *)bData;

// method: CompressFile
// m_cppType = bool
// arg:inFile - const char *
// arg:outFile - const char *
- (BOOL)CompressFile: (NSString *)inFile 
	outFile: (NSString *)outFile;

// method: CompressString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)CompressString: (NSString *)str;

// method: CompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)CompressStringENC: (NSString *)str;

// method: DecompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)DecompressBytes: (NSData *)bData;

// method: DecompressBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)DecompressBytesENC: (NSString *)str;

// method: DecompressFile
// m_cppType = bool
// arg:inFile - const char *
// arg:outFile - const char *
- (BOOL)DecompressFile: (NSString *)inFile 
	outFile: (NSString *)outFile;

// method: DecompressString
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)DecompressString: (NSData *)bData;

// method: DecompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)DecompressStringENC: (NSString *)str;

// method: EndCompressBytes
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)EndCompressBytes;

// method: EndCompressBytesENC
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)EndCompressBytesENC;

// method: EndCompressString
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)EndCompressString;

// method: EndCompressStringENC
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)EndCompressStringENC;

// method: EndDecompressBytes
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)EndDecompressBytes;

// method: EndDecompressBytesENC
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)EndDecompressBytesENC;

// method: EndDecompressString
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)EndDecompressString;

// method: EndDecompressStringENC
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)EndDecompressStringENC;

// method: MoreCompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)MoreCompressBytes: (NSData *)bData;

// method: MoreCompressBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)MoreCompressBytesENC: (NSData *)bData;

// method: MoreCompressString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)MoreCompressString: (NSString *)str;

// method: MoreCompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)MoreCompressStringENC: (NSString *)str;

// method: MoreDecompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)MoreDecompressBytes: (NSData *)bData;

// method: MoreDecompressBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)MoreDecompressBytesENC: (NSString *)str;

// method: MoreDecompressString
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)MoreDecompressString: (NSData *)bData;

// method: MoreDecompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)MoreDecompressStringENC: (NSString *)str;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;


@end
