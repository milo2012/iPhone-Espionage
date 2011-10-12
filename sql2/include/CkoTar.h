// Chilkat Objective-C header.
// Generic/internal class name =  Tar
// Wrapped Chilkat C++ class name =  CkTar



@interface CkoTar : NSObject {

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
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Charset;

// property setter: Charset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setCharset: (NSString *)input;

// property getter: DirMode
// m_cppType = int
// arg:newVal - int
- (NSNumber *)DirMode;

// property setter: DirMode
// m_cppType = int
// arg:newVal - int
- (void)setDirMode: (NSNumber *)intVal;

// property getter: DirPrefix
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DirPrefix;

// property setter: DirPrefix
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDirPrefix: (NSString *)input;

// property getter: FileMode
// m_cppType = int
// arg:newVal - int
- (NSNumber *)FileMode;

// property setter: FileMode
// m_cppType = int
// arg:newVal - int
- (void)setFileMode: (NSNumber *)intVal;

// property getter: GroupId
// m_cppType = int
// arg:newVal - int
- (NSNumber *)GroupId;

// property setter: GroupId
// m_cppType = int
// arg:newVal - int
- (void)setGroupId: (NSNumber *)intVal;

// property getter: GroupName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)GroupName;

// property setter: GroupName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setGroupName: (NSString *)input;

// property getter: HeartbeatMs
// m_cppType = int
// arg:newVal - int
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = int
// arg:newVal - int
- (void)setHeartbeatMs: (NSNumber *)intVal;

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

// property getter: NoAbsolutePaths
// m_cppType = bool
// arg:newVal - bool
- (BOOL)NoAbsolutePaths;

// property setter: NoAbsolutePaths
// m_cppType = bool
// arg:newVal - bool
- (void)setNoAbsolutePaths: (BOOL)boolVal;

// property getter: NumDirRoots
// m_cppType = int
- (NSNumber *)NumDirRoots;

// property getter: ScriptFileMode
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ScriptFileMode;

// property setter: ScriptFileMode
// m_cppType = int
// arg:newVal - int
- (void)setScriptFileMode: (NSNumber *)intVal;

// property getter: UntarCaseSensitive
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UntarCaseSensitive;

// property setter: UntarCaseSensitive
// m_cppType = bool
// arg:newVal - bool
- (void)setUntarCaseSensitive: (BOOL)boolVal;

// property getter: UntarDebugLog
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UntarDebugLog;

// property setter: UntarDebugLog
// m_cppType = bool
// arg:newVal - bool
- (void)setUntarDebugLog: (BOOL)boolVal;

// property getter: UntarDiscardPaths
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UntarDiscardPaths;

// property setter: UntarDiscardPaths
// m_cppType = bool
// arg:newVal - bool
- (void)setUntarDiscardPaths: (BOOL)boolVal;

// property getter: UntarFromDir
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UntarFromDir;

// property setter: UntarFromDir
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUntarFromDir: (NSString *)input;

// property getter: UntarMatchPattern
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UntarMatchPattern;

// property setter: UntarMatchPattern
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUntarMatchPattern: (NSString *)input;

// property getter: UntarMaxCount
// m_cppType = int
// arg:newVal - int
- (NSNumber *)UntarMaxCount;

// property setter: UntarMaxCount
// m_cppType = int
// arg:newVal - int
- (void)setUntarMaxCount: (NSNumber *)intVal;

// property getter: UserId
// m_cppType = int
// arg:newVal - int
- (NSNumber *)UserId;

// property setter: UserId
// m_cppType = int
// arg:newVal - int
- (void)setUserId: (NSNumber *)intVal;

// property getter: UserName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UserName;

// property setter: UserName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUserName: (NSString *)input;

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

// property getter: WriteFormat
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)WriteFormat;

// property setter: WriteFormat
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setWriteFormat: (NSString *)input;

// method: AddDirRoot
// m_cppType = bool
// arg:dirPath - const char *
- (BOOL)AddDirRoot: (NSString *)dirPath;

// method: GetDirRoot
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetDirRoot: (NSNumber *)index;

// method: ListXml
// m_cppType = bool
// arg:tarFilename - const char *
// arg:outStr - CkString &
- (NSString *)ListXml: (NSString *)tarFilename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: Untar
// m_cppType = int
// arg:tarFilename - const char *
- (NSNumber *)Untar: (NSString *)tarFilename;

// method: UntarBz2
// m_cppType = bool
// arg:tarFilename - const char *
- (BOOL)UntarBz2: (NSString *)tarFilename;

// method: UntarFirstMatchingToMemory
// m_cppType = bool
// arg:tarFileBytes - CkByteData &
// arg:matchPattern - const char *
// arg:outBytes - CkByteData &
- (NSData *)UntarFirstMatchingToMemory: (NSData *)tarFileBytes 
	matchPattern: (NSString *)matchPattern;

// method: UntarFromMemory
// m_cppType = int
// arg:tarFileBytes - CkByteData &
- (NSNumber *)UntarFromMemory: (NSData *)tarFileBytes;

// method: UntarGz
// m_cppType = bool
// arg:tarFilename - const char *
- (BOOL)UntarGz: (NSString *)tarFilename;

// method: UntarZ
// m_cppType = bool
// arg:tarFilename - const char *
- (BOOL)UntarZ: (NSString *)tarFilename;

// method: VerifyTar
// m_cppType = bool
// arg:tarFilename - const char *
- (BOOL)VerifyTar: (NSString *)tarFilename;

// method: WriteTar
// m_cppType = bool
// arg:tarFilename - const char *
- (BOOL)WriteTar: (NSString *)tarFilename;

// method: WriteTarBz2
// m_cppType = bool
// arg:outFilename - const char *
- (BOOL)WriteTarBz2: (NSString *)outFilename;

// method: WriteTarGz
// m_cppType = bool
// arg:outFilename - const char *
- (BOOL)WriteTarGz: (NSString *)outFilename;


@end
