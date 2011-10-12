// Chilkat Objective-C header.
// Generic/internal class name =  Upload
// Wrapped Chilkat C++ class name =  CkUpload



@interface CkoUpload : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: ChunkSize
// m_cppType = int
// arg:numBytes - int
- (NSNumber *)ChunkSize;

// property setter: ChunkSize
// m_cppType = int
// arg:numBytes - int
- (void)setChunkSize: (NSNumber *)intVal;

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

// property getter: Hostname
// m_cppType = CkString &
// arg:hostname - CkString &
// arg:hostname - const char *
- (NSString *)Hostname;

// property setter: Hostname
// m_cppType = CkString &
// arg:hostname - CkString &
// arg:hostname - const char *
- (void)setHostname: (NSString *)input;

// property getter: IdleTimeoutMs
// m_cppType = int
// arg:millisec - int
- (NSNumber *)IdleTimeoutMs;

// property setter: IdleTimeoutMs
// m_cppType = int
// arg:millisec - int
- (void)setIdleTimeoutMs: (NSNumber *)intVal;

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

// property getter: Login
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Login;

// property setter: Login
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setLogin: (NSString *)input;

// property getter: NumBytesSent
// m_cppType = unsigned long
- (NSNumber *)NumBytesSent;

// property getter: Password
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Password;

// property setter: Password
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setPassword: (NSString *)input;

// property getter: Path
// m_cppType = CkString &
// arg:path - CkString &
// arg:path - const char *
- (NSString *)Path;

// property setter: Path
// m_cppType = CkString &
// arg:path - CkString &
// arg:path - const char *
- (void)setPath: (NSString *)input;

// property getter: PercentUploaded
// m_cppType = unsigned long
- (NSNumber *)PercentUploaded;

// property getter: Port
// m_cppType = int
// arg:port - int
- (NSNumber *)Port;

// property setter: Port
// m_cppType = int
// arg:port - int
- (void)setPort: (NSNumber *)intVal;

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

// property getter: ResponseBody
// m_cppType = CkByteData &
// arg:body - CkByteData &
- (NSData *)ResponseBody;

// property getter: ResponseBody
// m_cppType = CkByteData &
// arg:body - CkByteData &
- (NSMutableData *)ResponseBodyMutable;

// property getter: ResponseHeader
// m_cppType = CkString &
// arg:header - CkString &
- (NSString *)ResponseHeader;

// property getter: ResponseStatus
// m_cppType = int
- (NSNumber *)ResponseStatus;

// property getter: Ssl
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Ssl;

// property setter: Ssl
// m_cppType = bool
// arg:newVal - bool
- (void)setSsl: (BOOL)boolVal;

// property getter: TotalUploadSize
// m_cppType = unsigned long
- (NSNumber *)TotalUploadSize;

// property getter: UploadInProgress
// m_cppType = bool
- (BOOL)UploadInProgress;

// property getter: UploadSuccess
// m_cppType = bool
- (BOOL)UploadSuccess;

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: AbortUpload
// m_cppType = void
- (void)AbortUpload;

// method: AddCustomHeader
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)AddCustomHeader: (NSString *)name 
	value: (NSString *)value;

// method: AddFileReference
// m_cppType = void
// arg:name - const char *
// arg:filename - const char *
- (void)AddFileReference: (NSString *)name 
	filename: (NSString *)filename;

// method: AddParam
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)AddParam: (NSString *)name 
	value: (NSString *)value;

// method: BeginUpload
// m_cppType = bool
- (BOOL)BeginUpload;

// method: BlockingUpload
// m_cppType = bool
- (BOOL)BlockingUpload;

// method: ClearFileReferences
// m_cppType = void
- (void)ClearFileReferences;

// method: ClearParams
// m_cppType = void
- (void)ClearParams;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SleepMs
// m_cppType = void
// arg:millisec - int
- (void)SleepMs: (NSNumber *)millisec;

// method: UploadToMemory
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)UploadToMemory;


@end
