// Chilkat Objective-C header.
// Generic/internal class name =  Spider
// Wrapped Chilkat C++ class name =  CkSpider



@interface CkoSpider : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: AvoidHttps
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AvoidHttps;

// property setter: AvoidHttps
// m_cppType = bool
// arg:newVal - bool
- (void)setAvoidHttps: (BOOL)boolVal;

// property getter: CacheDir
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:dir - const char *
- (NSString *)CacheDir;

// property setter: CacheDir
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:dir - const char *
- (void)setCacheDir: (NSString *)input;

// property getter: ChopAtQuery
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ChopAtQuery;

// property setter: ChopAtQuery
// m_cppType = bool
// arg:newVal - bool
- (void)setChopAtQuery: (BOOL)boolVal;

// property getter: ConnectTimeout
// m_cppType = int
// arg:numSeconds - long
- (NSNumber *)ConnectTimeout;

// property setter: ConnectTimeout
// m_cppType = int
// arg:numSeconds - long
- (void)setConnectTimeout: (NSNumber *)intVal;

// property getter: Domain
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)Domain;

// property getter: FetchFromCache
// m_cppType = bool
// arg:newVal - bool
- (BOOL)FetchFromCache;

// property setter: FetchFromCache
// m_cppType = bool
// arg:newVal - bool
- (void)setFetchFromCache: (BOOL)boolVal;

// property getter: HeartbeatMs
// m_cppType = long
// arg:newVal - long
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = long
// arg:newVal - long
- (void)setHeartbeatMs: (NSNumber *)longVal;

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

// property getter: LastFromCache
// m_cppType = bool
- (BOOL)LastFromCache;

// property getter: LastHtml
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)LastHtml;

// property getter: LastHtmlDescription
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)LastHtmlDescription;

// property getter: LastHtmlKeywords
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)LastHtmlKeywords;

// property getter: LastHtmlTitle
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)LastHtmlTitle;

// property getter: LastModDate
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)LastModDate;

// property getter: LastModDateStr
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)LastModDateStr;

// property getter: LastUrl
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)LastUrl;

// property getter: MaxResponseSize
// m_cppType = int
// arg:newVal - long
- (NSNumber *)MaxResponseSize;

// property setter: MaxResponseSize
// m_cppType = int
// arg:newVal - long
- (void)setMaxResponseSize: (NSNumber *)intVal;

// property getter: MaxUrlLen
// m_cppType = int
// arg:newVal - long
- (NSNumber *)MaxUrlLen;

// property setter: MaxUrlLen
// m_cppType = int
// arg:newVal - long
- (void)setMaxUrlLen: (NSNumber *)intVal;

// property getter: NumAvoidPatterns
// m_cppType = int
- (NSNumber *)NumAvoidPatterns;

// property getter: NumFailed
// m_cppType = int
- (NSNumber *)NumFailed;

// property getter: NumOutboundLinks
// m_cppType = int
- (NSNumber *)NumOutboundLinks;

// property getter: NumSpidered
// m_cppType = int
- (NSNumber *)NumSpidered;

// property getter: NumUnspidered
// m_cppType = int
- (NSNumber *)NumUnspidered;

// property getter: ProxyDomain
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ProxyDomain;

// property setter: ProxyDomain
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
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
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ProxyPort;

// property setter: ProxyPort
// m_cppType = int
// arg:newVal - int
- (void)setProxyPort: (NSNumber *)intVal;

// property getter: ReadTimeout
// m_cppType = int
// arg:numSeconds - long
- (NSNumber *)ReadTimeout;

// property setter: ReadTimeout
// m_cppType = int
// arg:numSeconds - long
- (void)setReadTimeout: (NSNumber *)intVal;

// property getter: UpdateCache
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UpdateCache;

// property setter: UpdateCache
// m_cppType = bool
// arg:newVal - bool
- (void)setUpdateCache: (BOOL)boolVal;

// property getter: UserAgent
// m_cppType = CkString &
// arg:ua - const char *
// arg:outStr - CkString &
- (NSString *)UserAgent;

// property setter: UserAgent
// m_cppType = CkString &
// arg:ua - const char *
// arg:outStr - CkString &
- (void)setUserAgent: (NSString *)input;

// property getter: VerboseLogging
// m_cppType = bool
// arg:newVal - bool
- (BOOL)VerboseLogging;

// property setter: VerboseLogging
// m_cppType = bool
// arg:newVal - bool
- (void)setVerboseLogging: (BOOL)boolVal;

// property getter: WindDownCount
// m_cppType = int
// arg:newVal - long
- (NSNumber *)WindDownCount;

// property setter: WindDownCount
// m_cppType = int
// arg:newVal - long
- (void)setWindDownCount: (NSNumber *)intVal;

// method: AddAvoidOutboundLinkPattern
// m_cppType = void
// arg:pattern - const char *
- (void)AddAvoidOutboundLinkPattern: (NSString *)pattern;

// method: AddAvoidPattern
// m_cppType = void
// arg:pattern - const char *
- (void)AddAvoidPattern: (NSString *)pattern;

// method: AddMustMatchPattern
// m_cppType = void
// arg:pattern - const char *
- (void)AddMustMatchPattern: (NSString *)pattern;

// method: AddUnspidered
// m_cppType = void
// arg:url - const char *
- (void)AddUnspidered: (NSString *)url;

// method: CanonicalizeUrl
// m_cppType = void
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)CanonicalizeUrl: (NSString *)url;

// method: ClearFailedUrls
// m_cppType = void
- (void)ClearFailedUrls;

// method: ClearOutboundLinks
// m_cppType = void
- (void)ClearOutboundLinks;

// method: ClearSpideredUrls
// m_cppType = void
- (void)ClearSpideredUrls;

// method: CrawlNext
// m_cppType = bool
- (BOOL)CrawlNext;

// method: FetchRobotsText
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)FetchRobotsText;

// method: GetAvoidPattern
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetAvoidPattern: (NSNumber *)index;

// method: GetBaseDomain
// m_cppType = void
// arg:domain - const char *
// arg:outStr - CkString &
- (NSString *)GetBaseDomain: (NSString *)domain;

// method: GetFailedUrl
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetFailedUrl: (NSNumber *)index;

// method: GetOutboundLink
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetOutboundLink: (NSNumber *)index;

// method: GetSpideredUrl
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetSpideredUrl: (NSNumber *)index;

// method: GetUnspideredUrl
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetUnspideredUrl: (NSNumber *)index;

// method: GetUrlDomain
// m_cppType = void
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)GetUrlDomain: (NSString *)url;

// method: Initialize
// m_cppType = void
// arg:domain - const char *
- (void)Initialize: (NSString *)domain;

// method: RecrawlLast
// m_cppType = bool
- (BOOL)RecrawlLast;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SkipUnspidered
// m_cppType = void
// arg:index - long
- (void)SkipUnspidered: (NSNumber *)index;

// method: SleepMs
// m_cppType = void
// arg:millisec - long
- (void)SleepMs: (NSNumber *)millisec;


@end
