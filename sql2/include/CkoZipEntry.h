// Chilkat Objective-C header.
// Generic/internal class name =  ZipEntry
// Wrapped Chilkat C++ class name =  CkZipEntry

@class CkoString;


@interface CkoZipEntry : NSObject {

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
// arg:pStr - const char *
- (NSString *)Comment;

// property setter: Comment
// m_cppType = CkString &
// arg:str - CkString &
// arg:pStr - const char *
- (void)setComment: (NSString *)input;

// property getter: CompressedLength
// m_cppType = unsigned long
- (NSNumber *)CompressedLength;

// property getter: CompressionLevel
// m_cppType = long
// arg:newVal - long
- (NSNumber *)CompressionLevel;

// property setter: CompressionLevel
// m_cppType = long
// arg:newVal - long
- (void)setCompressionLevel: (NSNumber *)longVal;

// property getter: CompressionMethod
// m_cppType = long
// arg:newVal - long
- (NSNumber *)CompressionMethod;

// property setter: CompressionMethod
// m_cppType = long
// arg:newVal - long
- (void)setCompressionMethod: (NSNumber *)longVal;

// property getter: Crc
// m_cppType = int
- (NSNumber *)Crc;

// property getter: EntryID
// m_cppType = long
- (NSNumber *)EntryID;

// property getter: EntryType
// m_cppType = long
- (NSNumber *)EntryType;

// property getter: FileDateTime
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - const SYSTEMTIME &
- (NSDate *)FileDateTime;

// property setter: FileDateTime
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - const SYSTEMTIME &
- (void)setFileDateTime: (NSDate *)dateVal;

// property getter: FileName
// m_cppType = CkString &
// arg:str - CkString &
// arg:pStr - const char *
- (NSString *)FileName;

// property setter: FileName
// m_cppType = CkString &
// arg:str - CkString &
// arg:pStr - const char *
- (void)setFileName: (NSString *)input;

// property getter: IsDirectory
// m_cppType = bool
- (BOOL)IsDirectory;

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

// property getter: UncompressedLength
// m_cppType = unsigned long
- (NSNumber *)UncompressedLength;

// method: AppendData
// m_cppType = bool
// arg:bdata - const CkByteData &
- (BOOL)AppendData: (NSData *)bdata;

// method: AppendStringAnsi
// m_cppType = bool
// arg:sdata - const CkString &
- (BOOL)AppendStringAnsi: (CkoString *)sdata;

// method: Copy
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)Copy;

// method: CopyToBase64
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)CopyToBase64;

// method: CopyToHex
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)CopyToHex;

// method: Extract
// m_cppType = bool
// arg:dirPath - const char *
- (BOOL)Extract: (NSString *)dirPath;

// method: ExtractInto
// m_cppType = bool
// arg:dirPath - const char *
- (BOOL)ExtractInto: (NSString *)dirPath;

// method: Inflate
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)Inflate;

// method: InflateToString
// m_cppType = bool
// arg:addCR - bool
// arg:outStr - CkString &
- (NSString *)InflateToString: (BOOL)addCR;

// method: InflateToString2
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)InflateToString2;

// method: NextEntry
// m_cppType = CkZipEntry *
- (CkoZipEntry *)NextEntry;

// method: ReplaceData
// m_cppType = bool
// arg:bdata - const CkByteData &
- (BOOL)ReplaceData: (NSData *)bdata;

// method: ReplaceStringAnsi
// m_cppType = bool
// arg:sdata - const CkString &
- (BOOL)ReplaceStringAnsi: (CkoString *)sdata;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;


@end
