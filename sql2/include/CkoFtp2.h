// Chilkat Objective-C header.
// Generic/internal class name =  Ftp2
// Wrapped Chilkat C++ class name =  CkFtp2

@class CkoCert;


@interface CkoFtp2 : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Account
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Account;

// property setter: Account
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setAccount: (NSString *)input;

// property getter: ActivePortRangeEnd
// m_cppType = long
// arg:newVal - long
- (NSNumber *)ActivePortRangeEnd;

// property setter: ActivePortRangeEnd
// m_cppType = long
// arg:newVal - long
- (void)setActivePortRangeEnd: (NSNumber *)longVal;

// property getter: ActivePortRangeStart
// m_cppType = long
// arg:newVal - long
- (NSNumber *)ActivePortRangeStart;

// property setter: ActivePortRangeStart
// m_cppType = long
// arg:newVal - long
- (void)setActivePortRangeStart: (NSNumber *)longVal;

// property getter: AllocateSize
// m_cppType = unsigned long
// arg:newVal - unsigned long
- (NSNumber *)AllocateSize;

// property setter: AllocateSize
// m_cppType = unsigned long
// arg:newVal - unsigned long
- (void)setAllocateSize: (NSNumber *)ulongVal;

// property getter: AsyncBytesReceived
// m_cppType = unsigned long
- (NSNumber *)AsyncBytesReceived;

// property getter: AsyncBytesReceived64
// m_cppType = __int64
- (NSNumber *)AsyncBytesReceived64;

// property getter: AsyncBytesSent
// m_cppType = unsigned long
- (NSNumber *)AsyncBytesSent;

// property getter: AsyncBytesSent64
// m_cppType = __int64
- (NSNumber *)AsyncBytesSent64;

// property getter: AsyncFinished
// m_cppType = bool
- (BOOL)AsyncFinished;

// property getter: AsyncLog
// m_cppType = CkString &
// arg:strLog - CkString &
- (NSString *)AsyncLog;

// property getter: AsyncSuccess
// m_cppType = bool
- (BOOL)AsyncSuccess;

// property getter: AuthSsl
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AuthSsl;

// property setter: AuthSsl
// m_cppType = bool
// arg:newVal - bool
- (void)setAuthSsl: (BOOL)boolVal;

// property getter: AuthTls
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AuthTls;

// property setter: AuthTls
// m_cppType = bool
// arg:newVal - bool
- (void)setAuthTls: (BOOL)boolVal;

// property getter: AutoFeat
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoFeat;

// property setter: AutoFeat
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoFeat: (BOOL)boolVal;

// property getter: AutoFix
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoFix;

// property setter: AutoFix
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoFix: (BOOL)boolVal;

// property getter: AutoGetSizeForProgress
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoGetSizeForProgress;

// property setter: AutoGetSizeForProgress
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoGetSizeForProgress: (BOOL)boolVal;

// property getter: AutoSyst
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoSyst;

// property setter: AutoSyst
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoSyst: (BOOL)boolVal;

// property getter: AutoXcrc
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoXcrc;

// property setter: AutoXcrc
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoXcrc: (BOOL)boolVal;

// property getter: BandwidthThrottleDown
// m_cppType = long
// arg:bytesPerSec - long
- (NSNumber *)BandwidthThrottleDown;

// property setter: BandwidthThrottleDown
// m_cppType = long
// arg:bytesPerSec - long
- (void)setBandwidthThrottleDown: (NSNumber *)longVal;

// property getter: BandwidthThrottleUp
// m_cppType = long
// arg:bytesPerSec - long
- (NSNumber *)BandwidthThrottleUp;

// property setter: BandwidthThrottleUp
// m_cppType = long
// arg:bytesPerSec - long
- (void)setBandwidthThrottleUp: (NSNumber *)longVal;

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

// property getter: ConnectFailReason
// m_cppType = long
- (NSNumber *)ConnectFailReason;

// property getter: ConnectTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ConnectTimeout;

// property setter: ConnectTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setConnectTimeout: (NSNumber *)longVal;

// property getter: ConnectVerified
// m_cppType = bool
- (BOOL)ConnectVerified;

// property getter: CrlfMode
// m_cppType = long
// arg:newVal - long
- (NSNumber *)CrlfMode;

// property setter: CrlfMode
// m_cppType = long
// arg:newVal - long
- (void)setCrlfMode: (NSNumber *)longVal;

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

// property getter: DirListingCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DirListingCharset;

// property setter: DirListingCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDirListingCharset: (NSString *)input;

// property getter: DownloadRate
// m_cppType = long
- (NSNumber *)DownloadRate;

// property getter: ForcePortIpAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ForcePortIpAddress;

// property setter: ForcePortIpAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setForcePortIpAddress: (NSString *)input;

// property getter: Greeting
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Greeting;

// property getter: HasModeZ
// m_cppType = bool
- (BOOL)HasModeZ;

// property getter: HeartbeatMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = long
// arg:millisec - long
- (void)setHeartbeatMs: (NSNumber *)longVal;

// property getter: Hostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Hostname;

// property setter: Hostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setHostname: (NSString *)input;

// property getter: IdleTimeoutMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)IdleTimeoutMs;

// property setter: IdleTimeoutMs
// m_cppType = long
// arg:millisec - long
- (void)setIdleTimeoutMs: (NSNumber *)longVal;

// property getter: IsConnected
// m_cppType = bool
- (BOOL)IsConnected;

// property getter: KeepSessionLog
// m_cppType = bool
// arg:newVal - bool
- (BOOL)KeepSessionLog;

// property setter: KeepSessionLog
// m_cppType = bool
// arg:newVal - bool
- (void)setKeepSessionLog: (BOOL)boolVal;

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

// property getter: ListPattern
// m_cppType = CkString &
// arg:strPattern - CkString &
// arg:pattern - const char *
- (NSString *)ListPattern;

// property setter: ListPattern
// m_cppType = CkString &
// arg:strPattern - CkString &
// arg:pattern - const char *
- (void)setListPattern: (NSString *)input;

// property getter: LoginVerified
// m_cppType = bool
- (BOOL)LoginVerified;

// property getter: NumFilesAndDirs
// m_cppType = long
- (NSNumber *)NumFilesAndDirs;

// property getter: PartialTransfer
// m_cppType = bool
- (BOOL)PartialTransfer;

// property getter: Passive
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Passive;

// property setter: Passive
// m_cppType = bool
// arg:newVal - bool
- (void)setPassive: (BOOL)boolVal;

// property getter: PassiveUseHostAddr
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PassiveUseHostAddr;

// property setter: PassiveUseHostAddr
// m_cppType = bool
// arg:newVal - bool
- (void)setPassiveUseHostAddr: (BOOL)boolVal;

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

// property getter: Port
// m_cppType = long
// arg:newVal - long
- (NSNumber *)Port;

// property setter: Port
// m_cppType = long
// arg:newVal - long
- (void)setPort: (NSNumber *)longVal;

// property getter: PreferNlst
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PreferNlst;

// property setter: PreferNlst
// m_cppType = bool
// arg:newVal - bool
- (void)setPreferNlst: (BOOL)boolVal;

// property getter: ProgressMonSize
// m_cppType = long
// arg:newVal - long
- (NSNumber *)ProgressMonSize;

// property setter: ProgressMonSize
// m_cppType = long
// arg:newVal - long
- (void)setProgressMonSize: (NSNumber *)longVal;

// property getter: ProgressMonSize64
// m_cppType = __int64
// arg:newVal - __int64
- (NSNumber *)ProgressMonSize64;

// property setter: ProgressMonSize64
// m_cppType = __int64
// arg:newVal - __int64
- (void)setProgressMonSize64: (NSNumber *)longlongVal;

// property getter: ProxyHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ProxyHostname;

// property setter: ProxyHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProxyHostname: (NSString *)input;

// property getter: ProxyMethod
// m_cppType = long
// arg:newVal - long
- (NSNumber *)ProxyMethod;

// property setter: ProxyMethod
// m_cppType = long
// arg:newVal - long
- (void)setProxyMethod: (NSNumber *)longVal;

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
// arg:newVal - long
- (NSNumber *)ProxyPort;

// property setter: ProxyPort
// m_cppType = long
// arg:newVal - long
- (void)setProxyPort: (NSNumber *)longVal;

// property getter: ProxyUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ProxyUsername;

// property setter: ProxyUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProxyUsername: (NSString *)input;

// property getter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ReadTimeout;

// property setter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setReadTimeout: (NSNumber *)longVal;

// property getter: RequireSslCertVerify
// m_cppType = bool
// arg:newVal - bool
- (BOOL)RequireSslCertVerify;

// property setter: RequireSslCertVerify
// m_cppType = bool
// arg:newVal - bool
- (void)setRequireSslCertVerify: (BOOL)boolVal;

// property getter: RestartNext
// m_cppType = bool
// arg:newVal - bool
- (BOOL)RestartNext;

// property setter: RestartNext
// m_cppType = bool
// arg:newVal - bool
- (void)setRestartNext: (BOOL)boolVal;

// property getter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SendBufferSize;

// property setter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (void)setSendBufferSize: (NSNumber *)intVal;

// property getter: SessionLog
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SessionLog;

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

// property getter: Ssl
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Ssl;

// property setter: Ssl
// m_cppType = bool
// arg:newVal - bool
- (void)setSsl: (BOOL)boolVal;

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

// property getter: SslServerCertVerified
// m_cppType = bool
- (BOOL)SslServerCertVerified;

// property getter: SyncPreview
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SyncPreview;

// property getter: UploadRate
// m_cppType = long
- (NSNumber *)UploadRate;

// property getter: UseEpsv
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseEpsv;

// property setter: UseEpsv
// m_cppType = bool
// arg:newVal - bool
- (void)setUseEpsv: (BOOL)boolVal;

// property getter: Username
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Username;

// property setter: Username
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUsername: (NSString *)input;

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

// method: AppendFile
// m_cppType = bool
// arg:localFilename - const char *
// arg:remoteFilename - const char *
- (BOOL)AppendFile: (NSString *)localFilename 
	remoteFilename: (NSString *)remoteFilename;

// method: AppendFileFromBinaryData
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:binaryData - const CkByteData &
- (BOOL)AppendFileFromBinaryData: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;

// method: AppendFileFromTextData
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:textData - const char *
- (BOOL)AppendFileFromTextData: (NSString *)remoteFilename 
	textData: (NSString *)textData;

// method: AsyncAbort
// m_cppType = void
- (void)AsyncAbort;

// method: AsyncAppendFileStart
// m_cppType = bool
// arg:localFilename - const char *
// arg:remoteFilename - const char *
- (BOOL)AsyncAppendFileStart: (NSString *)localFilename 
	remoteFilename: (NSString *)remoteFilename;

// method: AsyncGetFileStart
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:localFilename - const char *
- (BOOL)AsyncGetFileStart: (NSString *)remoteFilename 
	localFilename: (NSString *)localFilename;

// method: AsyncPutFileStart
// m_cppType = bool
// arg:localFilename - const char *
// arg:remoteFilename - const char *
- (BOOL)AsyncPutFileStart: (NSString *)localFilename 
	remoteFilename: (NSString *)remoteFilename;

// method: ChangeRemoteDir
// m_cppType = bool
// arg:relativeDirPath - const char *
- (BOOL)ChangeRemoteDir: (NSString *)relativeDirPath;

// method: ClearControlChannel
// m_cppType = bool
- (BOOL)ClearControlChannel;

// method: ClearDirCache
// m_cppType = void
- (void)ClearDirCache;

// method: ClearSessionLog
// m_cppType = void
- (void)ClearSessionLog;

// method: Connect
// m_cppType = bool
- (BOOL)Connect;

// method: ConvertToTls
// m_cppType = bool
- (BOOL)ConvertToTls;

// method: CreatePlan
// m_cppType = bool
// arg:localDir - const char *
// arg:outStr - CkString &
- (NSString *)CreatePlan: (NSString *)localDir;

// method: CreateRemoteDir
// m_cppType = bool
// arg:dir - const char *
- (BOOL)CreateRemoteDir: (NSString *)dir;

// method: DeleteMatching
// m_cppType = long
// arg:remotePattern - const char *
- (NSNumber *)DeleteMatching: (NSString *)remotePattern;

// method: DeleteRemoteFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)DeleteRemoteFile: (NSString *)filename;

// method: DeleteTree
// m_cppType = bool
- (BOOL)DeleteTree;

// method: DetermineProxyMethod
// m_cppType = int
- (NSNumber *)DetermineProxyMethod;

// method: DetermineSettings
// m_cppType = bool
// arg:outXmlReport - CkString &
- (NSString *)DetermineSettings;

// method: DirTreeXml
// m_cppType = bool
// arg:outStrXml - CkString &
- (NSString *)DirTreeXml;

// method: Disconnect
// m_cppType = bool
- (BOOL)Disconnect;

// method: DownloadTree
// m_cppType = bool
// arg:localRoot - const char *
- (BOOL)DownloadTree: (NSString *)localRoot;

// method: Feat
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)Feat;

// method: GetCreateTime
// m_cppType = bool
// arg:index - long
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetCreateTime: (NSNumber *)index;

// method: GetCreateTimeByName
// m_cppType = bool
// arg:filename - const char *
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetCreateTimeByName: (NSString *)filename;

// method: GetCurrentRemoteDir
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetCurrentRemoteDir;

// method: GetFile
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:localFilename - const char *
- (BOOL)GetFile: (NSString *)remoteFilename 
	localFilename: (NSString *)localFilename;

// method: GetFilename
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetFilename: (NSNumber *)index;

// method: GetIsDirectory
// m_cppType = bool
// arg:index - long
- (BOOL)GetIsDirectory: (NSNumber *)index;

// method: GetIsSymbolicLink
// m_cppType = bool
// arg:index - long
- (BOOL)GetIsSymbolicLink: (NSNumber *)index;

// method: GetLastAccessTime
// m_cppType = bool
// arg:index - long
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetLastAccessTime: (NSNumber *)index;

// method: GetLastAccessTimeByName
// m_cppType = bool
// arg:filename - const char *
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetLastAccessTimeByName: (NSString *)filename;

// method: GetLastModifiedTime
// m_cppType = bool
// arg:index - long
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetLastModifiedTime: (NSNumber *)index;

// method: GetLastModifiedTimeByName
// m_cppType = bool
// arg:filename - const char *
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetLastModifiedTimeByName: (NSString *)filename;

// method: GetRemoteFileBinaryData
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:outData - CkByteData &
- (NSData *)GetRemoteFileBinaryData: (NSString *)remoteFilename;

// method: GetRemoteFileTextC
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)GetRemoteFileTextC: (NSString *)remoteFilename 
	charset: (NSString *)charset;

// method: GetRemoteFileTextData
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:outStr - CkString &
- (NSString *)GetRemoteFileTextData: (NSString *)remoteFilename;

// method: GetSize
// m_cppType = long
// arg:index - long
- (NSNumber *)GetSize: (NSNumber *)index;

// method: GetSizeByName
// m_cppType = long
// arg:filname - const char *
- (NSNumber *)GetSizeByName: (NSString *)filname;

// method: GetSizeStr
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetSizeStr: (NSNumber *)index;

// method: GetSizeStrByName
// m_cppType = bool
// arg:filename - const char *
// arg:outStr - CkString &
- (NSString *)GetSizeStrByName: (NSString *)filename;

// method: GetSslServerCert
// m_cppType = CkCert *
- (CkoCert *)GetSslServerCert;

// method: GetTextDirListing
// m_cppType = bool
// arg:pattern - const char *
// arg:outStrRawListing - CkString &
- (NSString *)GetTextDirListing: (NSString *)pattern;

// method: GetXmlDirListing
// m_cppType = bool
// arg:pattern - const char *
// arg:outStrXmlListing - CkString &
- (NSString *)GetXmlDirListing: (NSString *)pattern;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: MGetFiles
// m_cppType = long
// arg:remotePattern - const char *
// arg:localDir - const char *
- (NSNumber *)MGetFiles: (NSString *)remotePattern 
	localDir: (NSString *)localDir;

// method: MPutFiles
// m_cppType = long
// arg:pattern - const char *
- (NSNumber *)MPutFiles: (NSString *)pattern;

// method: NlstXml
// m_cppType = bool
// arg:pattern - const char *
// arg:outStr - CkString &
- (NSString *)NlstXml: (NSString *)pattern;

// method: Noop
// m_cppType = bool
- (BOOL)Noop;

// method: PutFile
// m_cppType = bool
// arg:localFilename - const char *
// arg:remoteFilename - const char *
- (BOOL)PutFile: (NSString *)localFilename 
	remoteFilename: (NSString *)remoteFilename;

// method: PutFileFromBinaryData
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:binaryData - const CkByteData &
- (BOOL)PutFileFromBinaryData: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;

// method: PutFileFromTextData
// m_cppType = bool
// arg:remoteFilename - const char *
// arg:textData - const char *
- (BOOL)PutFileFromTextData: (NSString *)remoteFilename 
	textData: (NSString *)textData;

// method: PutPlan
// m_cppType = bool
// arg:planUtf8 - const char *
// arg:planLogFilename - const char *
- (BOOL)PutPlan: (NSString *)planUtf8 
	planLogFilename: (NSString *)planLogFilename;

// method: PutTree
// m_cppType = bool
// arg:localDir - const char *
- (BOOL)PutTree: (NSString *)localDir;

// method: Quote
// m_cppType = bool
// arg:cmd - const char *
- (BOOL)Quote: (NSString *)cmd;

// method: RemoveRemoteDir
// m_cppType = bool
// arg:dir - const char *
- (BOOL)RemoveRemoteDir: (NSString *)dir;

// method: RenameRemoteFile
// m_cppType = bool
// arg:existingFilename - const char *
// arg:newFilename - const char *
- (BOOL)RenameRemoteFile: (NSString *)existingFilename 
	newFilename: (NSString *)newFilename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SendCommand
// m_cppType = bool
// arg:cmd - const char *
// arg:outReply - CkString &
- (NSString *)SendCommand: (NSString *)cmd;

// method: SetModeZ
// m_cppType = bool
- (BOOL)SetModeZ;

// method: SetOldestDate
// m_cppType = void
// arg:oldestDateTime - SYSTEMTIME &
- (void)SetOldestDate: (NSDate *)oldestDateTime;

// method: SetRemoteFileDateTime
// m_cppType = bool
// arg:dateTime - SYSTEMTIME &
// arg:remoteFilename - const char *
- (BOOL)SetRemoteFileDateTime: (NSDate *)dateTime 
	remoteFilename: (NSString *)remoteFilename;

// method: SetSslCertRequirement
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)SetSslCertRequirement: (NSString *)name 
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

// method: SetTypeAscii
// m_cppType = bool
- (BOOL)SetTypeAscii;

// method: SetTypeBinary
// m_cppType = bool
- (BOOL)SetTypeBinary;

// method: Site
// m_cppType = bool
// arg:params - const char *
- (BOOL)Site: (NSString *)params;

// method: SleepMs
// m_cppType = void
// arg:millisec - int
- (void)SleepMs: (NSNumber *)millisec;

// method: Stat
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)Stat;

// method: SyncLocalTree
// m_cppType = bool
// arg:localRoot - const char *
// arg:mode - int
- (BOOL)SyncLocalTree: (NSString *)localRoot 
	mode: (NSNumber *)mode;

// method: SyncRemoteTree
// m_cppType = bool
// arg:localRoot - const char *
// arg:mode - int
- (BOOL)SyncRemoteTree: (NSString *)localRoot 
	mode: (NSNumber *)mode;

// method: SyncRemoteTree2
// m_cppType = bool
// arg:localRoot - const char *
// arg:mode - int
// arg:bDescend - bool
// arg:bPreviewOnly - bool
- (BOOL)SyncRemoteTree2: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	bDescend: (BOOL)bDescend 
	bPreviewOnly: (BOOL)bPreviewOnly;

// method: Syst
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)Syst;

// method: UnlockComponent
// m_cppType = bool
// arg:code - const char *
- (BOOL)UnlockComponent: (NSString *)code;


@end
