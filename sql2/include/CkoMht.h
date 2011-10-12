// Chilkat Objective-C header.
// Generic/internal class name =  Mht
// Wrapped Chilkat C++ class name =  CkMht

@class CkoEmail;
@class CkoMime;


@interface CkoMht : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: BaseUrl
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)BaseUrl;

// property setter: BaseUrl
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setBaseUrl: (NSString *)input;

// property getter: ConnectTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ConnectTimeout;

// property setter: ConnectTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setConnectTimeout: (NSNumber *)longVal;

// property getter: DebugHtmlAfter
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DebugHtmlAfter;

// property setter: DebugHtmlAfter
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDebugHtmlAfter: (NSString *)input;

// property getter: DebugHtmlBefore
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DebugHtmlBefore;

// property setter: DebugHtmlBefore
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDebugHtmlBefore: (NSString *)input;

// property getter: DebugLogFilePath
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DebugLogFilePath;

// property setter: DebugLogFilePath
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDebugLogFilePath: (NSString *)input;

// property getter: DebugTagCleaning
// m_cppType = bool
// arg:newVal - bool
- (BOOL)DebugTagCleaning;

// property setter: DebugTagCleaning
// m_cppType = bool
// arg:newVal - bool
- (void)setDebugTagCleaning: (BOOL)boolVal;

// property getter: EmbedImages
// m_cppType = bool
// arg:newVal - bool
- (BOOL)EmbedImages;

// property setter: EmbedImages
// m_cppType = bool
// arg:newVal - bool
- (void)setEmbedImages: (BOOL)boolVal;

// property getter: EmbedLocalOnly
// m_cppType = bool
// arg:newVal - bool
- (BOOL)EmbedLocalOnly;

// property setter: EmbedLocalOnly
// m_cppType = bool
// arg:newVal - bool
- (void)setEmbedLocalOnly: (BOOL)boolVal;

// property getter: FetchFromCache
// m_cppType = bool
// arg:b - bool
- (BOOL)FetchFromCache;

// property setter: FetchFromCache
// m_cppType = bool
// arg:b - bool
- (void)setFetchFromCache: (BOOL)boolVal;

// property getter: HeartbeatMs
// m_cppType = long
// arg:newVal - long
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = long
// arg:newVal - long
- (void)setHeartbeatMs: (NSNumber *)longVal;

// property getter: IgnoreMustRevalidate
// m_cppType = bool
// arg:b - bool
- (BOOL)IgnoreMustRevalidate;

// property setter: IgnoreMustRevalidate
// m_cppType = bool
// arg:b - bool
- (void)setIgnoreMustRevalidate: (BOOL)boolVal;

// property getter: IgnoreNoCache
// m_cppType = bool
// arg:b - bool
- (BOOL)IgnoreNoCache;

// property setter: IgnoreNoCache
// m_cppType = bool
// arg:b - bool
- (void)setIgnoreNoCache: (BOOL)boolVal;

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

// property getter: NoScripts
// m_cppType = bool
// arg:newVal - bool
- (BOOL)NoScripts;

// property setter: NoScripts
// m_cppType = bool
// arg:newVal - bool
- (void)setNoScripts: (BOOL)boolVal;

// property getter: NtlmAuth
// m_cppType = bool
// arg:newVal - bool
- (BOOL)NtlmAuth;

// property setter: NtlmAuth
// m_cppType = bool
// arg:newVal - bool
- (void)setNtlmAuth: (BOOL)boolVal;

// property getter: NumCacheLevels
// m_cppType = long
// arg:v - long
- (NSNumber *)NumCacheLevels;

// property setter: NumCacheLevels
// m_cppType = long
// arg:v - long
- (void)setNumCacheLevels: (NSNumber *)longVal;

// property getter: NumCacheRoots
// m_cppType = long
- (NSNumber *)NumCacheRoots;

// property getter: PreferMHTScripts
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PreferMHTScripts;

// property setter: PreferMHTScripts
// m_cppType = bool
// arg:newVal - bool
- (void)setPreferMHTScripts: (BOOL)boolVal;

// property getter: Proxy
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Proxy;

// property setter: Proxy
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProxy: (NSString *)input;

// property getter: ProxyLogin
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ProxyLogin;

// property setter: ProxyLogin
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProxyLogin: (NSString *)input;

// property getter: ProxyPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ProxyPassword;

// property setter: ProxyPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProxyPassword: (NSString *)input;

// property getter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ReadTimeout;

// property setter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setReadTimeout: (NSNumber *)longVal;

// property getter: SocksHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SocksHostname;

// property setter: SocksHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSocksHostname: (NSString *)input;

// property getter: SocksPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SocksPassword;

// property setter: SocksPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSocksPassword: (NSString *)input;

// property getter: SocksPort
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SocksPort;

// property setter: SocksPort
// m_cppType = int
// arg:newVal - int
- (void)setSocksPort: (NSNumber *)intVal;

// property getter: SocksUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SocksUsername;

// property setter: SocksUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSocksUsername: (NSString *)input;

// property getter: SocksVersion
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SocksVersion;

// property setter: SocksVersion
// m_cppType = int
// arg:newVal - int
- (void)setSocksVersion: (NSNumber *)intVal;

// property getter: UnpackUseRelPaths
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UnpackUseRelPaths;

// property setter: UnpackUseRelPaths
// m_cppType = bool
// arg:newVal - bool
- (void)setUnpackUseRelPaths: (BOOL)boolVal;

// property getter: UpdateCache
// m_cppType = bool
// arg:b - bool
- (BOOL)UpdateCache;

// property setter: UpdateCache
// m_cppType = bool
// arg:b - bool
- (void)setUpdateCache: (BOOL)boolVal;

// property getter: UseCids
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseCids;

// property setter: UseCids
// m_cppType = bool
// arg:newVal - bool
- (void)setUseCids: (BOOL)boolVal;

// property getter: UseFilename
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseFilename;

// property setter: UseFilename
// m_cppType = bool
// arg:newVal - bool
- (void)setUseFilename: (BOOL)boolVal;

// property getter: UseIEProxy
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseIEProxy;

// property setter: UseIEProxy
// m_cppType = bool
// arg:newVal - bool
- (void)setUseIEProxy: (BOOL)boolVal;

// property getter: UseInline
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseInline;

// property setter: UseInline
// m_cppType = bool
// arg:newVal - bool
- (void)setUseInline: (BOOL)boolVal;

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

// property getter: WebSiteLogin
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)WebSiteLogin;

// property setter: WebSiteLogin
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setWebSiteLogin: (NSString *)input;

// property getter: WebSitePassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)WebSitePassword;

// property setter: WebSitePassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setWebSitePassword: (NSString *)input;

// method: AddCacheRoot
// m_cppType = void
// arg:dir - const char *
- (void)AddCacheRoot: (NSString *)dir;

// method: AddCustomHeader
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)AddCustomHeader: (NSString *)name 
	value: (NSString *)value;

// method: AddExternalStyleSheet
// m_cppType = void
// arg:url - const char *
- (void)AddExternalStyleSheet: (NSString *)url;

// method: ClearCustomHeaders
// m_cppType = void
- (void)ClearCustomHeaders;

// method: ExcludeImagesMatching
// m_cppType = void
// arg:pattern - const char *
- (void)ExcludeImagesMatching: (NSString *)pattern;

// method: GetAndSaveEML
// m_cppType = bool
// arg:url - const char *
// arg:emlFilename - const char *
- (BOOL)GetAndSaveEML: (NSString *)url 
	emlFilename: (NSString *)emlFilename;

// method: GetAndSaveMHT
// m_cppType = bool
// arg:url - const char *
// arg:mhtFilename - const char *
- (BOOL)GetAndSaveMHT: (NSString *)url 
	mhtFilename: (NSString *)mhtFilename;

// method: GetAndZipEML
// m_cppType = bool
// arg:url - const char *
// arg:zipEntryFilename - const char *
// arg:zipFilename - const char *
- (BOOL)GetAndZipEML: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipFilename: (NSString *)zipFilename;

// method: GetAndZipMHT
// m_cppType = bool
// arg:url - const char *
// arg:zipEntryFilename - const char *
// arg:zipFilename - const char *
- (BOOL)GetAndZipMHT: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipFilename: (NSString *)zipFilename;

// method: GetCacheRoot
// m_cppType = bool
// arg:index - int
// arg:str - CkString &
- (BOOL)GetCacheRoot: (NSNumber *)index 
	str: (NSString *)str;

// method: GetEML
// m_cppType = bool
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)GetEML: (NSString *)url;

// method: GetEmail
// m_cppType = CkEmail *
// arg:url - const char *
- (CkoEmail *)GetEmail: (NSString *)url;

// method: GetMHT
// m_cppType = bool
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)GetMHT: (NSString *)url;

// method: GetMime
// m_cppType = CkMime *
// arg:url - const char *
- (CkoMime *)GetMime: (NSString *)url;

// method: HtmlToEML
// m_cppType = bool
// arg:htmlText - const char *
// arg:outStr - CkString &
- (NSString *)HtmlToEML: (NSString *)htmlText;

// method: HtmlToEMLFile
// m_cppType = bool
// arg:html - const char *
// arg:emlFilename - const char *
- (BOOL)HtmlToEMLFile: (NSString *)html 
	emlFilename: (NSString *)emlFilename;

// method: HtmlToEmail
// m_cppType = CkEmail *
// arg:htmlText - const char *
- (CkoEmail *)HtmlToEmail: (NSString *)htmlText;

// method: HtmlToMHT
// m_cppType = bool
// arg:htmlText - const char *
// arg:outStr - CkString &
- (NSString *)HtmlToMHT: (NSString *)htmlText;

// method: HtmlToMHTFile
// m_cppType = bool
// arg:html - const char *
// arg:mhtFilename - const char *
- (BOOL)HtmlToMHTFile: (NSString *)html 
	mhtFilename: (NSString *)mhtFilename;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: RemoveCustomHeader
// m_cppType = void
// arg:name - const char *
- (void)RemoveCustomHeader: (NSString *)name;

// method: RestoreDefaults
// m_cppType = void
- (void)RestoreDefaults;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UnpackMHT
// m_cppType = bool
// arg:mhtFilename - const char *
// arg:unpackDir - const char *
// arg:htmlFilename - const char *
// arg:partsSubDir - const char *
- (BOOL)UnpackMHT: (NSString *)mhtFilename 
	unpackDir: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubDir: (NSString *)partsSubDir;

// method: UnpackMHTString
// m_cppType = bool
// arg:mhtContents - const char *
// arg:unpackDir - const char *
// arg:htmlFilename - const char *
// arg:partsSubDir - const char *
- (BOOL)UnpackMHTString: (NSString *)mhtContents 
	unpackDir: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubDir: (NSString *)partsSubDir;


@end
