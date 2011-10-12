// Chilkat Objective-C header.
// Generic/internal class name =  FileAccess
// Wrapped Chilkat C++ class name =  CkFileAccess



@interface CkoFileAccess : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: CurrentDir
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)CurrentDir;

// property getter: EndOfFile
// m_cppType = bool
- (BOOL)EndOfFile;

// property getter: FileOpenError
// m_cppType = int
- (NSNumber *)FileOpenError;

// property getter: FileOpenErrorMsg
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)FileOpenErrorMsg;

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

// method: AppendAnsi
// m_cppType = bool
// arg:text - const char *
- (BOOL)AppendAnsi: (NSString *)text;

// method: AppendText
// m_cppType = bool
// arg:text - const char *
// arg:charset - const char *
- (BOOL)AppendText: (NSString *)text 
	charset: (NSString *)charset;

// method: AppendUnicodeBOM
// m_cppType = bool
- (BOOL)AppendUnicodeBOM;

// method: AppendUtf8BOM
// m_cppType = bool
- (BOOL)AppendUtf8BOM;

// method: DirAutoCreate
// m_cppType = bool
// arg:path - const char *
- (BOOL)DirAutoCreate: (NSString *)path;

// method: DirCreate
// m_cppType = bool
// arg:path - const char *
- (BOOL)DirCreate: (NSString *)path;

// method: DirDelete
// m_cppType = bool
// arg:path - const char *
- (BOOL)DirDelete: (NSString *)path;

// method: DirEnsureExists
// m_cppType = bool
// arg:filePath - const char *
- (BOOL)DirEnsureExists: (NSString *)filePath;

// method: FileClose
// m_cppType = void
- (void)FileClose;

// method: FileCopy
// m_cppType = bool
// arg:existing - const char *
// arg:newFilename - const char *
// arg:failIfExists - bool
- (BOOL)FileCopy: (NSString *)existing 
	newFilename: (NSString *)newFilename 
	failIfExists: (BOOL)failIfExists;

// method: FileDelete
// m_cppType = bool
// arg:filename - const char *
- (BOOL)FileDelete: (NSString *)filename;

// method: FileExists
// m_cppType = bool
// arg:filename - const char *
- (BOOL)FileExists: (NSString *)filename;

// method: FileRead
// m_cppType = bool
// arg:numBytes - int
// arg:outBytes - CkByteData &
- (NSData *)FileRead: (NSNumber *)numBytes;

// method: FileRename
// m_cppType = bool
// arg:existing - const char *
// arg:newFilename - const char *
- (BOOL)FileRename: (NSString *)existing 
	newFilename: (NSString *)newFilename;

// method: FileSeek
// m_cppType = bool
// arg:offset - int
// arg:origin - int
- (BOOL)FileSeek: (NSNumber *)offset 
	origin: (NSNumber *)origin;

// method: FileSize
// m_cppType = int
// arg:filename - const char *
- (NSNumber *)FileSize: (NSString *)filename;

// method: FileWrite
// m_cppType = bool
// arg:data - CkByteData &
- (BOOL)FileWrite: (NSData *)data;

// method: GetTempFilename
// m_cppType = bool
// arg:dirName - const char *
// arg:prefix - const char *
// arg:outStr - CkString &
- (NSString *)GetTempFilename: (NSString *)dirName 
	prefix: (NSString *)prefix;

// method: OpenForAppend
// m_cppType = bool
// arg:filePath - const char *
- (BOOL)OpenForAppend: (NSString *)filePath;

// method: OpenForRead
// m_cppType = bool
// arg:filePath - const char *
- (BOOL)OpenForRead: (NSString *)filePath;

// method: OpenForReadWrite
// m_cppType = bool
// arg:filePath - const char *
- (BOOL)OpenForReadWrite: (NSString *)filePath;

// method: OpenForWrite
// m_cppType = bool
// arg:filePath - const char *
- (BOOL)OpenForWrite: (NSString *)filePath;

// method: ReadBinaryToEncoded
// m_cppType = bool
// arg:filename - const char *
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)ReadBinaryToEncoded: (NSString *)filename 
	encoding: (NSString *)encoding;

// method: ReadEntireFile
// m_cppType = bool
// arg:filename - const char *
// arg:outBytes - CkByteData &
- (NSData *)ReadEntireFile: (NSString *)filename;

// method: ReadEntireTextFile
// m_cppType = bool
// arg:filename - const char *
// arg:charset - const char *
// arg:outStrFileContents - CkString &
- (NSString *)ReadEntireTextFile: (NSString *)filename 
	charset: (NSString *)charset;

// method: ReassembleFile
// m_cppType = bool
// arg:partsDirPath - const char *
// arg:partPrefix - const char *
// arg:partExtension - const char *
// arg:reassembledFilename - const char *
- (BOOL)ReassembleFile: (NSString *)partsDirPath 
	partPrefix: (NSString *)partPrefix 
	partExtension: (NSString *)partExtension 
	reassembledFilename: (NSString *)reassembledFilename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetCurrentDir
// m_cppType = bool
// arg:path - const char *
- (BOOL)SetCurrentDir: (NSString *)path;

// method: SplitFile
// m_cppType = bool
// arg:fileToSplit - const char *
// arg:partPrefix - const char *
// arg:partExtension - const char *
// arg:partSize - int
// arg:outputDirPath - const char *
- (BOOL)SplitFile: (NSString *)fileToSplit 
	partPrefix: (NSString *)partPrefix 
	partExtension: (NSString *)partExtension 
	partSize: (NSNumber *)partSize 
	outputDirPath: (NSString *)outputDirPath;

// method: TreeDelete
// m_cppType = bool
// arg:path - const char *
- (BOOL)TreeDelete: (NSString *)path;

// method: WriteEntireFile
// m_cppType = bool
// arg:filename - const char *
// arg:fileData - CkByteData &
- (BOOL)WriteEntireFile: (NSString *)filename 
	fileData: (NSData *)fileData;

// method: WriteEntireTextFile
// m_cppType = bool
// arg:filename - const char *
// arg:fileData - const char *
// arg:charset - const char *
// arg:includePreamble - bool
- (BOOL)WriteEntireTextFile: (NSString *)filename 
	fileData: (NSString *)fileData 
	charset: (NSString *)charset 
	includePreamble: (BOOL)includePreamble;


@end
