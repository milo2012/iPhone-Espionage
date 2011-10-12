// Chilkat Objective-C header.
// Generic/internal class name =  DirTree
// Wrapped Chilkat C++ class name =  CkDirTree



@interface CkoDirTree : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: BaseDir
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)BaseDir;

// property setter: BaseDir
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setBaseDir: (NSString *)input;

// property getter: DoneIterating
// m_cppType = bool
- (BOOL)DoneIterating;

// property getter: FileSize32
// m_cppType = int
- (NSNumber *)FileSize32;

// property getter: FileSize64
// m_cppType = __int64
- (NSNumber *)FileSize64;

// property getter: FullPath
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)FullPath;

// property getter: FullUncPath
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)FullUncPath;

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

// property getter: Recurse
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Recurse;

// property setter: Recurse
// m_cppType = bool
// arg:newVal - bool
- (void)setRecurse: (BOOL)boolVal;

// property getter: RelativePath
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)RelativePath;

// method: AdvancePosition
// m_cppType = bool
- (BOOL)AdvancePosition;

// method: BeginIterate
// m_cppType = bool
- (BOOL)BeginIterate;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;


@end
