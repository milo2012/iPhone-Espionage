// Chilkat Objective-C header.
// Generic/internal class name =  Zip
// Wrapped Chilkat C++ class name =  CkZip

@class CkoZipEntry;
@class CkoStringArray;


@interface CkoZip : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: AppendFromDir
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)AppendFromDir;

// property setter: AppendFromDir
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setAppendFromDir: (NSString *)input;

// property getter: CaseSensitive
// m_cppType = bool
// arg:newVal - bool
- (BOOL)CaseSensitive;

// property setter: CaseSensitive
// m_cppType = bool
// arg:newVal - bool
- (void)setCaseSensitive: (BOOL)boolVal;

// property getter: ClearArchiveAttribute
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ClearArchiveAttribute;

// property setter: ClearArchiveAttribute
// m_cppType = bool
// arg:newVal - bool
- (void)setClearArchiveAttribute: (BOOL)boolVal;

// property getter: ClearReadOnlyAttr
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ClearReadOnlyAttr;

// property setter: ClearReadOnlyAttr
// m_cppType = bool
// arg:newVal - bool
- (void)setClearReadOnlyAttr: (BOOL)boolVal;

// property getter: Comment
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)Comment;

// property setter: Comment
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setComment: (NSString *)input;

// property getter: DecryptPassword
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)DecryptPassword;

// property setter: DecryptPassword
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setDecryptPassword: (NSString *)input;

// property getter: DiscardPaths
// m_cppType = bool
// arg:newVal - bool
- (BOOL)DiscardPaths;

// property setter: DiscardPaths
// m_cppType = bool
// arg:newVal - bool
- (void)setDiscardPaths: (BOOL)boolVal;

// property getter: EncryptKeyLength
// m_cppType = long
// arg:newVal - long
- (NSNumber *)EncryptKeyLength;

// property setter: EncryptKeyLength
// m_cppType = long
// arg:newVal - long
- (void)setEncryptKeyLength: (NSNumber *)longVal;

// property getter: EncryptPassword
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)EncryptPassword;

// property setter: EncryptPassword
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setEncryptPassword: (NSString *)input;

// property getter: Encryption
// m_cppType = long
// arg:newVal - long
- (NSNumber *)Encryption;

// property setter: Encryption
// m_cppType = long
// arg:newVal - long
- (void)setEncryption: (NSNumber *)longVal;

// property getter: FileCount
// m_cppType = int
- (NSNumber *)FileCount;

// property getter: FileName
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)FileName;

// property setter: FileName
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setFileName: (NSString *)input;

// property getter: HasZipFormatErrors
// m_cppType = bool
- (BOOL)HasZipFormatErrors;

// property getter: IgnoreAccessDenied
// m_cppType = bool
// arg:newVal - bool
- (BOOL)IgnoreAccessDenied;

// property setter: IgnoreAccessDenied
// m_cppType = bool
// arg:newVal - bool
- (void)setIgnoreAccessDenied: (BOOL)boolVal;

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

// property getter: NumEntries
// m_cppType = long
- (NSNumber *)NumEntries;

// property getter: OemCodePage
// m_cppType = long
// arg:newVal - long
- (NSNumber *)OemCodePage;

// property setter: OemCodePage
// m_cppType = long
// arg:newVal - long
- (void)setOemCodePage: (NSNumber *)longVal;

// property getter: OverwriteExisting
// m_cppType = bool
// arg:newVal - bool
- (BOOL)OverwriteExisting;

// property setter: OverwriteExisting
// m_cppType = bool
// arg:newVal - bool
- (void)setOverwriteExisting: (BOOL)boolVal;

// property getter: PasswordProtect
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PasswordProtect;

// property setter: PasswordProtect
// m_cppType = bool
// arg:newVal - bool
- (void)setPasswordProtect: (BOOL)boolVal;

// property getter: PathPrefix
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)PathPrefix;

// property setter: PathPrefix
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setPathPrefix: (NSString *)input;

// property getter: Proxy
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)Proxy;

// property setter: Proxy
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setProxy: (NSString *)input;

// property getter: TempDir
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (NSString *)TempDir;

// property setter: TempDir
// m_cppType = CkString &
// arg:pVal - CkString &
// arg:newVal - const char *
- (void)setTempDir: (NSString *)input;

// property getter: TextFlag
// m_cppType = bool
// arg:newVal - bool
- (BOOL)TextFlag;

// property setter: TextFlag
// m_cppType = bool
// arg:newVal - bool
- (void)setTextFlag: (BOOL)boolVal;

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
// arg:pVal - CkString &
- (NSString *)Version;

// method: AddNoCompressExtension
// m_cppType = void
// arg:fileExtension - const char *
- (void)AddNoCompressExtension: (NSString *)fileExtension;

// method: AppendBase64
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:data - const char *
- (CkoZipEntry *)AppendBase64: (NSString *)fileName 
	data: (NSString *)data;

// method: AppendCompressed
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:data - const CkByteData &
- (CkoZipEntry *)AppendCompressed: (NSString *)fileName 
	data: (NSData *)data;

// method: AppendData
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:data - const CkByteData &
- (CkoZipEntry *)AppendData: (NSString *)fileName 
	data: (NSData *)data;

// method: AppendData2
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:data - const char *
// arg:dataLen - unsigned long
- (CkoZipEntry *)AppendData2: (NSString *)fileName 
	data: (NSString *)data 
	dataLen: (NSNumber *)dataLen;

// method: AppendFiles
// m_cppType = bool
// arg:filePattern - const char *
// arg:recurse - bool
// arg:progress - CkZipProgress *
- (BOOL)AppendFiles: (NSString *)filePattern 
	recurse: (BOOL)recurse;

// method: AppendFilesEx
// m_cppType = bool
// arg:filePattern - const char *
// arg:recurse - bool
// arg:saveExtraPath - bool
// arg:archiveOnly - bool
// arg:includeHidden - bool
// arg:includeSystem - bool
// arg:progress - CkZipProgress *
- (BOOL)AppendFilesEx: (NSString *)filePattern 
	recurse: (BOOL)recurse 
	saveExtraPath: (BOOL)saveExtraPath 
	archiveOnly: (BOOL)archiveOnly 
	includeHidden: (BOOL)includeHidden 
	includeSystem: (BOOL)includeSystem;

// method: AppendHex
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:data - const char *
- (CkoZipEntry *)AppendHex: (NSString *)fileName 
	data: (NSString *)data;

// method: AppendMultiple
// m_cppType = bool
// arg:fileSpecs - const CkStringArray &
// arg:recurse - bool
// arg:progress - CkZipProgress *
- (BOOL)AppendMultiple: (CkoStringArray *)fileSpecs 
	recurse: (BOOL)recurse;

// method: AppendNew
// m_cppType = CkZipEntry *
// arg:fileName - const char *
- (CkoZipEntry *)AppendNew: (NSString *)fileName;

// method: AppendNewDir
// m_cppType = CkZipEntry *
// arg:dirName - const char *
- (CkoZipEntry *)AppendNewDir: (NSString *)dirName;

// method: AppendOneFileOrDir
// m_cppType = bool
// arg:fileOrDirName - const char *
// arg:saveExtraPath - bool
- (BOOL)AppendOneFileOrDir: (NSString *)fileOrDirName 
	saveExtraPath: (BOOL)saveExtraPath;

// method: AppendString
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:str - const char *
- (CkoZipEntry *)AppendString: (NSString *)fileName 
	str: (NSString *)str;

// method: AppendString2
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:str - const char *
// arg:charset - const char *
- (CkoZipEntry *)AppendString2: (NSString *)fileName 
	str: (NSString *)str 
	charset: (NSString *)charset;

// method: AppendZip
// m_cppType = bool
// arg:zipFileName - const char *
- (BOOL)AppendZip: (NSString *)zipFileName;

// method: CloseZip
// m_cppType = void
- (void)CloseZip;

// method: DeleteEntry
// m_cppType = bool
// arg:entry - const CkZipEntry &
- (BOOL)DeleteEntry: (CkoZipEntry *)entry;

// method: ExcludeDir
// m_cppType = void
// arg:dirName - const char *
- (void)ExcludeDir: (NSString *)dirName;

// method: Extract
// m_cppType = bool
// arg:dirPath - const char *
// arg:progress - CkZipProgress *
- (BOOL)Extract: (NSString *)dirPath;

// method: ExtractInto
// m_cppType = bool
// arg:dirPath - const char *
- (BOOL)ExtractInto: (NSString *)dirPath;

// method: ExtractMatching
// m_cppType = bool
// arg:dirPath - const char *
// arg:pattern - const char *
// arg:progress - CkZipProgress *
- (BOOL)ExtractMatching: (NSString *)dirPath 
	pattern: (NSString *)pattern;

// method: ExtractNewer
// m_cppType = bool
// arg:dirPath - const char *
// arg:progress - CkZipProgress *
- (BOOL)ExtractNewer: (NSString *)dirPath;

// method: FirstEntry
// m_cppType = CkZipEntry *
- (CkoZipEntry *)FirstEntry;

// method: FirstMatchingEntry
// m_cppType = CkZipEntry *
// arg:pattern - const char *
- (CkoZipEntry *)FirstMatchingEntry: (NSString *)pattern;

// method: GetDirectoryAsXML
// m_cppType = void
// arg:xml - CkString &
- (void)GetDirectoryAsXML: (NSString *)xml;

// method: GetEntryByID
// m_cppType = CkZipEntry *
// arg:entryID - long
- (CkoZipEntry *)GetEntryByID: (NSNumber *)entryID;

// method: GetEntryByIndex
// m_cppType = CkZipEntry *
// arg:index - long
- (CkoZipEntry *)GetEntryByIndex: (NSNumber *)index;

// method: GetEntryByName
// m_cppType = CkZipEntry *
// arg:entryName - const char *
- (CkoZipEntry *)GetEntryByName: (NSString *)entryName;

// method: GetExclusions
// m_cppType = CkStringArray *
- (CkoStringArray *)GetExclusions;

// method: InsertNew
// m_cppType = CkZipEntry *
// arg:fileName - const char *
// arg:beforeIndex - long
- (CkoZipEntry *)InsertNew: (NSString *)fileName 
	beforeIndex: (NSNumber *)beforeIndex;

// method: IsNoCompressExtension
// m_cppType = bool
// arg:fileExtension - const char *
- (BOOL)IsNoCompressExtension: (NSString *)fileExtension;

// method: IsPasswordProtected
// m_cppType = bool
// arg:zipFilename - const char *
- (BOOL)IsPasswordProtected: (NSString *)zipFilename;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: NewZip
// m_cppType = bool
// arg:zipFileName - const char *
- (BOOL)NewZip: (NSString *)zipFileName;

// method: OpenFromByteData
// m_cppType = bool
// arg:byteData - CkByteData &
- (BOOL)OpenFromByteData: (NSData *)byteData;

// method: OpenFromMemory
// m_cppType = bool
// arg:zipFileInMemory - const unsigned char *
// arg:dataLen - unsigned long
- (BOOL)OpenFromMemory: (NSData *)zipFileInMemory 
	dataLen: (NSNumber *)dataLen;

// method: OpenFromWeb
// m_cppType = bool
// arg:url - const char *
// arg:progress - CkZipProgress *
- (BOOL)OpenFromWeb: (NSString *)url;

// method: OpenZip
// m_cppType = bool
// arg:zipFileName - const char *
// arg:progress - CkZipProgress *
- (BOOL)OpenZip: (NSString *)zipFileName;

// method: QuickAppend
// m_cppType = bool
// arg:zipFilename - const char *
- (BOOL)QuickAppend: (NSString *)zipFilename;

// method: RemoveNoCompressExtension
// m_cppType = void
// arg:fileExtension - const char *
- (void)RemoveNoCompressExtension: (NSString *)fileExtension;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetCompressionLevel
// m_cppType = void
// arg:level - int
- (void)SetCompressionLevel: (NSNumber *)level;

// method: SetExclusions
// m_cppType = void
// arg:excludePatterns - const CkStringArray &
- (void)SetExclusions: (CkoStringArray *)excludePatterns;

// method: SetPassword
// m_cppType = void
// arg:password - const char *
- (void)SetPassword: (NSString *)password;

// method: UnlockComponent
// m_cppType = bool
// arg:regCode - const char *
- (BOOL)UnlockComponent: (NSString *)regCode;

// method: Unzip
// m_cppType = int
// arg:dirPath - const char *
// arg:progress - CkZipProgress *
- (NSNumber *)Unzip: (NSString *)dirPath;

// method: UnzipInto
// m_cppType = int
// arg:dirPath - const char *
// arg:progress - CkZipProgress *
- (NSNumber *)UnzipInto: (NSString *)dirPath;

// method: UnzipMatching
// m_cppType = int
// arg:dirPath - const char *
// arg:pattern - const char *
// arg:verbose - bool
// arg:progress - CkZipProgress *
- (NSNumber *)UnzipMatching: (NSString *)dirPath 
	pattern: (NSString *)pattern 
	verbose: (BOOL)verbose;

// method: UnzipMatchingInto
// m_cppType = int
// arg:dirPath - const char *
// arg:pattern - const char *
// arg:verbose - bool
// arg:progress - CkZipProgress *
- (NSNumber *)UnzipMatchingInto: (NSString *)dirPath 
	pattern: (NSString *)pattern 
	verbose: (BOOL)verbose;

// method: UnzipNewer
// m_cppType = int
// arg:dirPath - const char *
// arg:progress - CkZipProgress *
- (NSNumber *)UnzipNewer: (NSString *)dirPath;

// method: VerifyPassword
// m_cppType = bool
- (BOOL)VerifyPassword;

// method: WriteToMemory
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)WriteToMemory;

// method: WriteZip
// m_cppType = bool
// arg:progress - CkZipProgress *
- (BOOL)WriteZip;

// method: WriteZipAndClose
// m_cppType = bool
// arg:progress - CkZipProgress *
- (BOOL)WriteZipAndClose;


@end
