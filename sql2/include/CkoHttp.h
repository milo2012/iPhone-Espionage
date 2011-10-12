// Chilkat Objective-C header.
// Generic/internal class name =  Http
// Wrapped Chilkat C++ class name =  CkHttp

@class CkoHttpResponse;
@class CkoCert;
@class CkoHttpRequest;


@interface CkoHttp : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Accept
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)Accept;

// property setter: Accept
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setAccept: (NSString *)input;

// property getter: AcceptCharset
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)AcceptCharset;

// property setter: AcceptCharset
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setAcceptCharset: (NSString *)input;

// property getter: AcceptLanguage
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)AcceptLanguage;

// property setter: AcceptLanguage
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setAcceptLanguage: (NSString *)input;

// property getter: AllowGzip
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AllowGzip;

// property setter: AllowGzip
// m_cppType = bool
// arg:newVal - bool
- (void)setAllowGzip: (BOOL)boolVal;

// property getter: AutoAddHostHeader
// m_cppType = bool
// arg:b - bool
- (BOOL)AutoAddHostHeader;

// property setter: AutoAddHostHeader
// m_cppType = bool
// arg:b - bool
- (void)setAutoAddHostHeader: (BOOL)boolVal;

// property getter: ClientIpAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ClientIpAddress;

// property setter: ClientIpAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setClientIpAddress: (NSString *)input;

// property getter: ConnectTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ConnectTimeout;

// property setter: ConnectTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setConnectTimeout: (NSNumber *)longVal;

// property getter: Connection
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)Connection;

// property setter: Connection
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setConnection: (NSString *)input;

// property getter: CookieDir
// m_cppType = CkString &
// arg:dir - const char *
// arg:str - CkString &
- (NSString *)CookieDir;

// property setter: CookieDir
// m_cppType = CkString &
// arg:dir - const char *
// arg:str - CkString &
- (void)setCookieDir: (NSString *)input;

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

// property getter: DefaultFreshPeriod
// m_cppType = long
// arg:numMinutes - long
- (NSNumber *)DefaultFreshPeriod;

// property setter: DefaultFreshPeriod
// m_cppType = long
// arg:numMinutes - long
- (void)setDefaultFreshPeriod: (NSNumber *)longVal;

// property getter: DigestAuth
// m_cppType = bool
// arg:newVal - bool
- (BOOL)DigestAuth;

// property setter: DigestAuth
// m_cppType = bool
// arg:newVal - bool
- (void)setDigestAuth: (BOOL)boolVal;

// property getter: EventLogCount
// m_cppType = int
- (NSNumber *)EventLogCount;

// property getter: FetchFromCache
// m_cppType = bool
// arg:b - bool
- (BOOL)FetchFromCache;

// property setter: FetchFromCache
// m_cppType = bool
// arg:b - bool
- (void)setFetchFromCache: (BOOL)boolVal;

// property getter: FinalRedirectUrl
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)FinalRedirectUrl;

// property getter: FollowRedirects
// m_cppType = bool
// arg:b - bool
- (BOOL)FollowRedirects;

// property setter: FollowRedirects
// m_cppType = bool
// arg:b - bool
- (void)setFollowRedirects: (BOOL)boolVal;

// property getter: FreshnessAlgorithm
// m_cppType = long
// arg:v - long
- (NSNumber *)FreshnessAlgorithm;

// property setter: FreshnessAlgorithm
// m_cppType = long
// arg:v - long
- (void)setFreshnessAlgorithm: (NSNumber *)longVal;

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

// property getter: KeepEventLog
// m_cppType = bool
// arg:newVal - bool
- (BOOL)KeepEventLog;

// property setter: KeepEventLog
// m_cppType = bool
// arg:newVal - bool
- (void)setKeepEventLog: (BOOL)boolVal;

// property getter: LMFactor
// m_cppType = long
// arg:v - long
- (NSNumber *)LMFactor;

// property setter: LMFactor
// m_cppType = long
// arg:v - long
- (void)setLMFactor: (NSNumber *)longVal;

// property getter: LastContentType
// m_cppType = CkString &
// arg:strContentType - CkString &
- (NSString *)LastContentType;

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

// property getter: LastHeader
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastHeader;

// property getter: LastModDate
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastModDate;

// property getter: LastResponseHeader
// m_cppType = CkString &
// arg:strHeader - CkString &
- (NSString *)LastResponseHeader;

// property getter: LastStatus
// m_cppType = long
- (NSNumber *)LastStatus;

// property getter: Login
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)Login;

// property setter: Login
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setLogin: (NSString *)input;

// property getter: LoginDomain
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)LoginDomain;

// property setter: LoginDomain
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setLoginDomain: (NSString *)input;

// property getter: MaxConnections
// m_cppType = long
// arg:n - long
- (NSNumber *)MaxConnections;

// property setter: MaxConnections
// m_cppType = long
// arg:n - long
- (void)setMaxConnections: (NSNumber *)longVal;

// property getter: MaxFreshPeriod
// m_cppType = long
// arg:numMinutes - long
- (NSNumber *)MaxFreshPeriod;

// property setter: MaxFreshPeriod
// m_cppType = long
// arg:numMinutes - long
- (void)setMaxFreshPeriod: (NSNumber *)longVal;

// property getter: MaxResponseSize
// m_cppType = unsigned long
// arg:n - unsigned long
- (NSNumber *)MaxResponseSize;

// property setter: MaxResponseSize
// m_cppType = unsigned long
// arg:n - unsigned long
- (void)setMaxResponseSize: (NSNumber *)ulongVal;

// property getter: MaxUrlLen
// m_cppType = long
// arg:n - long
- (NSNumber *)MaxUrlLen;

// property setter: MaxUrlLen
// m_cppType = long
// arg:n - long
- (void)setMaxUrlLen: (NSNumber *)longVal;

// property getter: MimicFireFox
// m_cppType = bool
// arg:b - bool
- (BOOL)MimicFireFox;

// property setter: MimicFireFox
// m_cppType = bool
// arg:b - bool
- (void)setMimicFireFox: (BOOL)boolVal;

// property getter: MimicIE
// m_cppType = bool
// arg:b - bool
- (BOOL)MimicIE;

// property setter: MimicIE
// m_cppType = bool
// arg:b - bool
- (void)setMimicIE: (BOOL)boolVal;

// property getter: MinFreshPeriod
// m_cppType = long
// arg:numMinutes - long
- (NSNumber *)MinFreshPeriod;

// property setter: MinFreshPeriod
// m_cppType = long
// arg:numMinutes - long
- (void)setMinFreshPeriod: (NSNumber *)longVal;

// property getter: NegotiateAuth
// m_cppType = bool
// arg:newVal - bool
- (BOOL)NegotiateAuth;

// property setter: NegotiateAuth
// m_cppType = bool
// arg:newVal - bool
- (void)setNegotiateAuth: (BOOL)boolVal;

// property getter: NtlmAuth
// m_cppType = bool
// arg:b - bool
- (BOOL)NtlmAuth;

// property setter: NtlmAuth
// m_cppType = bool
// arg:b - bool
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

// property getter: Password
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)Password;

// property setter: Password
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setPassword: (NSString *)input;

// property getter: ProxyAuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ProxyAuthMethod;

// property setter: ProxyAuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProxyAuthMethod: (NSString *)input;

// property getter: ProxyDomain
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)ProxyDomain;

// property setter: ProxyDomain
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setProxyDomain: (NSString *)input;

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

// property getter: ProxyPartialUrl
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ProxyPartialUrl;

// property setter: ProxyPartialUrl
// m_cppType = bool
// arg:newVal - bool
- (void)setProxyPartialUrl: (BOOL)boolVal;

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

// property getter: ProxyPort
// m_cppType = long
// arg:n - long
- (NSNumber *)ProxyPort;

// property setter: ProxyPort
// m_cppType = long
// arg:n - long
- (void)setProxyPort: (NSNumber *)longVal;

// property getter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ReadTimeout;

// property setter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setReadTimeout: (NSNumber *)longVal;

// property getter: RedirectVerb
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)RedirectVerb;

// property setter: RedirectVerb
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setRedirectVerb: (NSString *)input;

// property getter: Referer
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)Referer;

// property setter: Referer
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setReferer: (NSString *)input;

// property getter: RequiredContentType
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)RequiredContentType;

// property setter: RequiredContentType
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setRequiredContentType: (NSString *)input;

// property getter: SaveCookies
// m_cppType = bool
// arg:b - bool
- (BOOL)SaveCookies;

// property setter: SaveCookies
// m_cppType = bool
// arg:b - bool
- (void)setSaveCookies: (BOOL)boolVal;

// property getter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SendBufferSize;

// property setter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (void)setSendBufferSize: (NSNumber *)intVal;

// property getter: SendCookies
// m_cppType = bool
// arg:b - bool
- (BOOL)SendCookies;

// property setter: SendCookies
// m_cppType = bool
// arg:b - bool
- (void)setSendCookies: (BOOL)boolVal;

// property getter: SessionLogFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SessionLogFilename;

// property setter: SessionLogFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSessionLogFilename: (NSString *)input;

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

// property getter: SslProtocol
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SslProtocol;

// property setter: SslProtocol
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSslProtocol: (NSString *)input;

// property getter: UpdateCache
// m_cppType = bool
// arg:b - bool
- (BOOL)UpdateCache;

// property setter: UpdateCache
// m_cppType = bool
// arg:b - bool
- (void)setUpdateCache: (BOOL)boolVal;

// property getter: UseIEProxy
// m_cppType = bool
// arg:b - bool
- (BOOL)UseIEProxy;

// property setter: UseIEProxy
// m_cppType = bool
// arg:b - bool
- (void)setUseIEProxy: (BOOL)boolVal;

// property getter: UserAgent
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (NSString *)UserAgent;

// property setter: UserAgent
// m_cppType = CkString &
// arg:v - const char *
// arg:str - CkString &
- (void)setUserAgent: (NSString *)input;

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

// property getter: WasRedirected
// m_cppType = bool
- (BOOL)WasRedirected;

// method: AddCacheRoot
// m_cppType = void
// arg:dir - const char *
- (void)AddCacheRoot: (NSString *)dir;

// method: AddQuickHeader
// m_cppType = bool
// arg:name - const char *
// arg:value - const char *
- (BOOL)AddQuickHeader: (NSString *)name 
	value: (NSString *)value;

// method: ClearInMemoryCookies
// m_cppType = void
- (void)ClearInMemoryCookies;

// method: Download
// m_cppType = bool
// arg:url - const char *
// arg:filename - const char *
- (BOOL)Download: (NSString *)url 
	filename: (NSString *)filename;

// method: DownloadAppend
// m_cppType = bool
// arg:url - const char *
// arg:filename - const char *
- (BOOL)DownloadAppend: (NSString *)url 
	filename: (NSString *)filename;

// method: EventLogName
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)EventLogName: (NSNumber *)index;

// method: EventLogValue
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)EventLogValue: (NSNumber *)index;

// method: ExtractMetaRefreshUrl
// m_cppType = bool
// arg:html - const char *
// arg:outStr - CkString &
- (NSString *)ExtractMetaRefreshUrl: (NSString *)html;

// method: GenTimeStamp
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)GenTimeStamp;

// method: GetCacheRoot
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetCacheRoot: (NSNumber *)index;

// method: GetCookieXml
// m_cppType = bool
// arg:domain - const char *
// arg:outStr - CkString &
- (NSString *)GetCookieXml: (NSString *)domain;

// method: GetDomain
// m_cppType = void
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)GetDomain: (NSString *)url;

// method: GetHead
// m_cppType = CkHttpResponse *
// arg:url - const char *
- (CkoHttpResponse *)GetHead: (NSString *)url;

// method: GetRequestHeader
// m_cppType = bool
// arg:name - const char *
// arg:outStr - CkString &
- (NSString *)GetRequestHeader: (NSString *)name;

// method: GetServerSslCert
// m_cppType = CkCert *
// arg:domain - const char *
// arg:port - int
- (CkoCert *)GetServerSslCert: (NSString *)domain 
	port: (NSNumber *)port;

// method: GetUrlPath
// m_cppType = void
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)GetUrlPath: (NSString *)url;

// method: HasRequestHeader
// m_cppType = bool
// arg:name - const char *
- (BOOL)HasRequestHeader: (NSString *)name;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: PostBinary
// m_cppType = bool
// arg:url - const char *
// arg:byteData - CkByteData &
// arg:contentType - const char *
// arg:md5 - bool
// arg:gzip - bool
// arg:outStr - CkString &
- (NSString *)PostBinary: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;

// method: PostMime
// m_cppType = CkHttpResponse *
// arg:url - const char *
// arg:mime - const char *
- (CkoHttpResponse *)PostMime: (NSString *)url 
	mime: (NSString *)mime;

// method: PostUrlEncoded
// m_cppType = CkHttpResponse *
// arg:url - const char *
// arg:req - CkHttpRequest &
- (CkoHttpResponse *)PostUrlEncoded: (NSString *)url 
	req: (CkoHttpRequest *)req;

// method: PostXml
// m_cppType = CkHttpResponse *
// arg:url - const char *
// arg:xmlDoc - const char *
// arg:charset - const char *
- (CkoHttpResponse *)PostXml: (NSString *)url 
	xmlDoc: (NSString *)xmlDoc 
	charset: (NSString *)charset;

// method: PutBinary
// m_cppType = bool
// arg:url - const char *
// arg:byteData - CkByteData &
// arg:contentType - const char *
// arg:md5 - bool
// arg:gzip - bool
// arg:outStr - CkString &
- (NSString *)PutBinary: (NSString *)url 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;

// method: PutText
// m_cppType = bool
// arg:url - const char *
// arg:textData - const char *
// arg:charset - const char *
// arg:contentType - const char *
// arg:md5 - bool
// arg:gzip - bool
// arg:outStr - CkString &
- (NSString *)PutText: (NSString *)url 
	textData: (NSString *)textData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType 
	md5: (BOOL)md5 
	gzip: (BOOL)gzip;

// method: QuickDeleteStr
// m_cppType = bool
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)QuickDeleteStr: (NSString *)url;

// method: QuickGet
// m_cppType = bool
// arg:url - const char *
// arg:outData - CkByteData &
- (NSData *)QuickGet: (NSString *)url;

// method: QuickGetObj
// m_cppType = CkHttpResponse *
// arg:url - const char *
- (CkoHttpResponse *)QuickGetObj: (NSString *)url;

// method: QuickGetStr
// m_cppType = bool
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)QuickGetStr: (NSString *)url;

// method: QuickPutStr
// m_cppType = bool
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)QuickPutStr: (NSString *)url;

// method: RemoveQuickHeader
// m_cppType = bool
// arg:name - const char *
- (BOOL)RemoveQuickHeader: (NSString *)name;

// method: RemoveRequestHeader
// m_cppType = void
// arg:name - const char *
- (void)RemoveRequestHeader: (NSString *)name;

// method: RenderGet
// m_cppType = bool
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)RenderGet: (NSString *)url;

// method: ResumeDownload
// m_cppType = bool
// arg:url - const char *
// arg:filename - const char *
- (BOOL)ResumeDownload: (NSString *)url 
	filename: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetCookieXml
// m_cppType = bool
// arg:domain - const char *
// arg:cookieXml - const char *
- (BOOL)SetCookieXml: (NSString *)domain 
	cookieXml: (NSString *)cookieXml;

// method: SetRequestHeader
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)SetRequestHeader: (NSString *)name 
	value: (NSString *)value;

// method: SetSslClientCert
// m_cppType = bool
// arg:cert - CkCert &
- (BOOL)SetSslClientCert: (CkoCert *)cert;

// method: SetSslClientCertPem
// m_cppType = bool
// arg:pemDataOrFilename - const char *
// arg:pemPassword - const char *
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrFilename 
	pemPassword: (NSString *)pemPassword;

// method: SetSslClientCertPfx
// m_cppType = bool
// arg:pfxFilename - const char *
// arg:pfxPassword - const char *
// arg:certSubjectCN - const char *
- (BOOL)SetSslClientCertPfx: (NSString *)pfxFilename 
	pfxPassword: (NSString *)pfxPassword 
	certSubjectCN: (NSString *)certSubjectCN;

// method: SleepMs
// m_cppType = void
// arg:millisec - int
- (void)SleepMs: (NSNumber *)millisec;

// method: SynchronousRequest
// m_cppType = CkHttpResponse *
// arg:domain - const char *
// arg:port - long
// arg:ssl - bool
// arg:req - const CkHttpRequest &
- (CkoHttpResponse *)SynchronousRequest: (NSString *)domain 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	req: (CkoHttpRequest *)req;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UrlDecode
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)UrlDecode: (NSString *)str;

// method: UrlEncode
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)UrlEncode: (NSString *)str;

// method: XmlRpc
// m_cppType = bool
// arg:urlEndpoint - const char *
// arg:xmlIn - const char *
// arg:outStr - CkString &
- (NSString *)XmlRpc: (NSString *)urlEndpoint 
	xmlIn: (NSString *)xmlIn;

// method: XmlRpcPut
// m_cppType = bool
// arg:urlEndpoint - const char *
// arg:xmlIn - const char *
// arg:outStr - CkString &
- (NSString *)XmlRpcPut: (NSString *)urlEndpoint 
	xmlIn: (NSString *)xmlIn;


@end
