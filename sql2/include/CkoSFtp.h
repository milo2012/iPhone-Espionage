// Chilkat Objective-C header.
// Generic/internal class name =  SFtp
// Wrapped Chilkat C++ class name =  CkSFtp

@class CkoSshKey;
@class CkoSFtpDir;


@interface CkoSFtp : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: AccumulateBuffer
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSData *)AccumulateBuffer;

// property getter: AccumulateBuffer
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)AccumulateBufferMutable;

// property getter: ClientIdentifier
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ClientIdentifier;

// property setter: ClientIdentifier
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setClientIdentifier: (NSString *)input;

// property getter: ConnectTimeoutMs
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ConnectTimeoutMs;

// property setter: ConnectTimeoutMs
// m_cppType = int
// arg:newVal - int
- (void)setConnectTimeoutMs: (NSNumber *)intVal;

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

// property getter: DisconnectCode
// m_cppType = int
- (NSNumber *)DisconnectCode;

// property getter: DisconnectReason
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)DisconnectReason;

// property getter: EnableCache
// m_cppType = bool
// arg:newVal - bool
- (BOOL)EnableCache;

// property setter: EnableCache
// m_cppType = bool
// arg:newVal - bool
- (void)setEnableCache: (BOOL)boolVal;

// property getter: FilenameCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)FilenameCharset;

// property setter: FilenameCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setFilenameCharset: (NSString *)input;

// property getter: ForceV3
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ForceV3;

// property setter: ForceV3
// m_cppType = bool
// arg:newVal - bool
- (void)setForceV3: (BOOL)boolVal;

// property getter: HeartbeatMs
// m_cppType = int
// arg:newVal - int
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = int
// arg:newVal - int
- (void)setHeartbeatMs: (NSNumber *)intVal;

// property getter: HostKeyFingerprint
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)HostKeyFingerprint;

// property getter: HttpProxyAuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)HttpProxyAuthMethod;

// property setter: HttpProxyAuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setHttpProxyAuthMethod: (NSString *)input;

// property getter: HttpProxyHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)HttpProxyHostname;

// property setter: HttpProxyHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setHttpProxyHostname: (NSString *)input;

// property getter: HttpProxyPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)HttpProxyPassword;

// property setter: HttpProxyPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setHttpProxyPassword: (NSString *)input;

// property getter: HttpProxyPort
// m_cppType = int
// arg:newVal - int
- (NSNumber *)HttpProxyPort;

// property setter: HttpProxyPort
// m_cppType = int
// arg:newVal - int
- (void)setHttpProxyPort: (NSNumber *)intVal;

// property getter: HttpProxyUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)HttpProxyUsername;

// property setter: HttpProxyUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setHttpProxyUsername: (NSString *)input;

// property getter: IdleTimeoutMs
// m_cppType = int
// arg:newVal - int
- (NSNumber *)IdleTimeoutMs;

// property setter: IdleTimeoutMs
// m_cppType = int
// arg:newVal - int
- (void)setIdleTimeoutMs: (NSNumber *)intVal;

// property getter: InitializeFailCode
// m_cppType = int
- (NSNumber *)InitializeFailCode;

// property getter: InitializeFailReason
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)InitializeFailReason;

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

// property getter: MaxPacketSize
// m_cppType = int
// arg:newVal - int
- (NSNumber *)MaxPacketSize;

// property setter: MaxPacketSize
// m_cppType = int
// arg:newVal - int
- (void)setMaxPacketSize: (NSNumber *)intVal;

// property getter: PasswordChangeRequested
// m_cppType = bool
- (BOOL)PasswordChangeRequested;

// property getter: PreserveDate
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PreserveDate;

// property setter: PreserveDate
// m_cppType = bool
// arg:newVal - bool
- (void)setPreserveDate: (BOOL)boolVal;

// property getter: ProtocolVersion
// m_cppType = int
- (NSNumber *)ProtocolVersion;

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

// property getter: TcpNoDelay
// m_cppType = bool
// arg:newVal - bool
- (BOOL)TcpNoDelay;

// property setter: TcpNoDelay
// m_cppType = bool
// arg:newVal - bool
- (void)setTcpNoDelay: (BOOL)boolVal;

// property getter: UtcMode
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UtcMode;

// property setter: UtcMode
// m_cppType = bool
// arg:newVal - bool
- (void)setUtcMode: (BOOL)boolVal;

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

// method: AccumulateBytes
// m_cppType = int
// arg:handle - const char *
// arg:maxBytes - int
- (NSNumber *)AccumulateBytes: (NSString *)handle 
	maxBytes: (NSNumber *)maxBytes;

// method: Add64
// m_cppType = void
// arg:n1 - const char *
// arg:n2 - const char *
// arg:outStr - CkString &
- (NSString *)Add64: (NSString *)n1 
	n2: (NSString *)n2;

// method: AuthenticatePk
// m_cppType = bool
// arg:username - const char *
// arg:privateKey - CkSshKey &
- (BOOL)AuthenticatePk: (NSString *)username 
	privateKey: (CkoSshKey *)privateKey;

// method: AuthenticatePw
// m_cppType = bool
// arg:login - const char *
// arg:password - const char *
- (BOOL)AuthenticatePw: (NSString *)login 
	password: (NSString *)password;

// method: AuthenticatePwPk
// m_cppType = bool
// arg:username - const char *
// arg:password - const char *
// arg:privateKey - CkSshKey &
- (BOOL)AuthenticatePwPk: (NSString *)username 
	password: (NSString *)password 
	privateKey: (CkoSshKey *)privateKey;

// method: ClearAccumulateBuffer
// m_cppType = void
- (void)ClearAccumulateBuffer;

// method: ClearCache
// m_cppType = void
- (void)ClearCache;

// method: ClearSessionLog
// m_cppType = void
- (void)ClearSessionLog;

// method: CloseHandle
// m_cppType = bool
// arg:handle - const char *
- (BOOL)CloseHandle: (NSString *)handle;

// method: Connect
// m_cppType = bool
// arg:hostname - const char *
// arg:port - int
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port;

// method: CopyFileAttr
// m_cppType = bool
// arg:localFilename - const char *
// arg:remoteFilenameOrHandle - const char *
// arg:bIsHandle - bool
- (BOOL)CopyFileAttr: (NSString *)localFilename 
	remoteFilenameOrHandle: (NSString *)remoteFilenameOrHandle 
	bIsHandle: (BOOL)bIsHandle;

// method: CreateDir
// m_cppType = bool
// arg:path - const char *
- (BOOL)CreateDir: (NSString *)path;

// method: Disconnect
// m_cppType = void
- (void)Disconnect;

// method: DownloadFile
// m_cppType = bool
// arg:handle - const char *
// arg:toFilename - const char *
- (BOOL)DownloadFile: (NSString *)handle 
	toFilename: (NSString *)toFilename;

// method: DownloadFileByName
// m_cppType = bool
// arg:remoteFilePath - const char *
// arg:localFilePath - const char *
- (BOOL)DownloadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;

// method: Eof
// m_cppType = bool
// arg:handle - const char *
- (BOOL)Eof: (NSString *)handle;

// method: GetFileCreateTime
// m_cppType = bool
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetFileCreateTime: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: GetFileGroup
// m_cppType = bool
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
// arg:outStr - CkString &
- (NSString *)GetFileGroup: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: GetFileLastAccess
// m_cppType = bool
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetFileLastAccess: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: GetFileLastModified
// m_cppType = bool
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetFileLastModified: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: GetFileOwner
// m_cppType = bool
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
// arg:outStr - CkString &
- (NSString *)GetFileOwner: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: GetFilePermissions
// m_cppType = int
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
- (NSNumber *)GetFilePermissions: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: GetFileSize64
// m_cppType = __int64
// arg:filenameOrHandle - const char *
// arg:bFollowLinks - bool
// arg:bIsHandle - bool
- (NSNumber *)GetFileSize64: (NSString *)filenameOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;

// method: InitializeSftp
// m_cppType = bool
- (BOOL)InitializeSftp;

// method: LastReadFailed
// m_cppType = bool
// arg:handle - const char *
- (BOOL)LastReadFailed: (NSString *)handle;

// method: LastReadNumBytes
// m_cppType = int
// arg:handle - const char *
- (NSNumber *)LastReadNumBytes: (NSString *)handle;

// method: OpenDir
// m_cppType = bool
// arg:path - const char *
// arg:outStr - CkString &
- (NSString *)OpenDir: (NSString *)path;

// method: OpenFile
// m_cppType = bool
// arg:filename - const char *
// arg:access - const char *
// arg:createDisp - const char *
// arg:outStr - CkString &
- (NSString *)OpenFile: (NSString *)filename 
	access: (NSString *)access 
	createDisp: (NSString *)createDisp;

// method: ReadDir
// m_cppType = CkSFtpDir *
// arg:handle - const char *
- (CkoSFtpDir *)ReadDir: (NSString *)handle;

// method: ReadFileBytes
// m_cppType = bool
// arg:handle - const char *
// arg:numBytes - int
// arg:outBytes - CkByteData &
- (NSData *)ReadFileBytes: (NSString *)handle 
	numBytes: (NSNumber *)numBytes;

// method: ReadFileBytes64
// m_cppType = bool
// arg:handle - const char *
// arg:offset64 - __int64
// arg:numBytes - int
// arg:outBytes - CkByteData &
- (NSData *)ReadFileBytes64: (NSString *)handle 
	offset64: (NSNumber *)offset64 
	numBytes: (NSNumber *)numBytes;

// method: ReadFileText
// m_cppType = bool
// arg:handle - const char *
// arg:numBytes - int
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)ReadFileText: (NSString *)handle 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;

// method: ReadFileText64
// m_cppType = bool
// arg:handle - const char *
// arg:offset64 - __int64
// arg:numBytes - int
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)ReadFileText64: (NSString *)handle 
	offset64: (NSNumber *)offset64 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;

// method: RealPath
// m_cppType = bool
// arg:originalPath - const char *
// arg:composePath - const char *
// arg:outStr - CkString &
- (NSString *)RealPath: (NSString *)originalPath 
	composePath: (NSString *)composePath;

// method: RemoveDir
// m_cppType = bool
// arg:path - const char *
- (BOOL)RemoveDir: (NSString *)path;

// method: RemoveFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)RemoveFile: (NSString *)filename;

// method: RenameFileOrDir
// m_cppType = bool
// arg:oldPath - const char *
// arg:newPath - const char *
- (BOOL)RenameFileOrDir: (NSString *)oldPath 
	newPath: (NSString *)newPath;

// method: ResumeDownloadFileByName
// m_cppType = bool
// arg:remoteFilePath - const char *
// arg:localFilePath - const char *
- (BOOL)ResumeDownloadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;

// method: ResumeUploadFileByName
// m_cppType = bool
// arg:remoteFilePath - const char *
// arg:localFilePath - const char *
- (BOOL)ResumeUploadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetCreateTime
// m_cppType = bool
// arg:pathOrHandle - const char *
// arg:bIsHandle - bool
// arg:createTime - SYSTEMTIME &
- (BOOL)SetCreateTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (NSDate *)createTime;

// method: SetLastAccessTime
// m_cppType = bool
// arg:pathOrHandle - const char *
// arg:bIsHandle - bool
// arg:lastAccessTime - SYSTEMTIME &
- (BOOL)SetLastAccessTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	lastAccessTime: (NSDate *)lastAccessTime;

// method: SetLastModifiedTime
// m_cppType = bool
// arg:pathOrHandle - const char *
// arg:bIsHandle - bool
// arg:lastModTime - SYSTEMTIME &
- (BOOL)SetLastModifiedTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	lastModTime: (NSDate *)lastModTime;

// method: SetOwnerAndGroup
// m_cppType = bool
// arg:pathOrHandle - const char *
// arg:bIsHandle - bool
// arg:owner - const char *
// arg:group - const char *
- (BOOL)SetOwnerAndGroup: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	owner: (NSString *)owner 
	group: (NSString *)group;

// method: SetPermissions
// m_cppType = bool
// arg:pathOrHandle - const char *
// arg:bIsHandle - bool
// arg:perm - int
- (BOOL)SetPermissions: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	perm: (NSNumber *)perm;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UploadFile
// m_cppType = bool
// arg:handle - const char *
// arg:fromFilename - const char *
- (BOOL)UploadFile: (NSString *)handle 
	fromFilename: (NSString *)fromFilename;

// method: UploadFileByName
// m_cppType = bool
// arg:remoteFilePath - const char *
// arg:localFilePath - const char *
- (BOOL)UploadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;

// method: WriteFileBytes
// m_cppType = bool
// arg:handle - const char *
// arg:data - CkByteData &
- (BOOL)WriteFileBytes: (NSString *)handle 
	data: (NSData *)data;

// method: WriteFileBytes64
// m_cppType = bool
// arg:handle - const char *
// arg:offset64 - __int64
// arg:data - CkByteData &
- (BOOL)WriteFileBytes64: (NSString *)handle 
	offset64: (NSNumber *)offset64 
	data: (NSData *)data;

// method: WriteFileText
// m_cppType = bool
// arg:handle - const char *
// arg:charset - const char *
// arg:textData - const char *
- (BOOL)WriteFileText: (NSString *)handle 
	charset: (NSString *)charset 
	textData: (NSString *)textData;

// method: WriteFileText64
// m_cppType = bool
// arg:handle - const char *
// arg:offset64 - __int64
// arg:charset - const char *
// arg:textData - const char *
- (BOOL)WriteFileText64: (NSString *)handle 
	offset64: (NSNumber *)offset64 
	charset: (NSString *)charset 
	textData: (NSString *)textData;


@end
