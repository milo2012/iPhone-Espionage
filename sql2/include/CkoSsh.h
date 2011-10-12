// Chilkat Objective-C header.
// Generic/internal class name =  Ssh
// Wrapped Chilkat C++ class name =  CkSsh

@class CkoSshKey;
@class CkoStringArray;


@interface CkoSsh : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: ChannelOpenFailCode
// m_cppType = int
- (NSNumber *)ChannelOpenFailCode;

// property getter: ChannelOpenFailReason
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)ChannelOpenFailReason;

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

// property getter: NumOpenChannels
// m_cppType = int
- (NSNumber *)NumOpenChannels;

// property getter: PasswordChangeRequested
// m_cppType = bool
- (BOOL)PasswordChangeRequested;

// property getter: ReadTimeoutMs
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ReadTimeoutMs;

// property setter: ReadTimeoutMs
// m_cppType = int
// arg:newVal - int
- (void)setReadTimeoutMs: (NSNumber *)intVal;

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

// method: ChannelIsOpen
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelIsOpen: (NSNumber *)channelNum;

// method: ChannelPoll
// m_cppType = int
// arg:channelNum - int
// arg:pollTimeoutMs - int
- (NSNumber *)ChannelPoll: (NSNumber *)channelNum 
	pollTimeoutMs: (NSNumber *)pollTimeoutMs;

// method: ChannelRead
// m_cppType = int
// arg:channelNum - int
- (NSNumber *)ChannelRead: (NSNumber *)channelNum;

// method: ChannelReadAndPoll
// m_cppType = int
// arg:channelNum - int
// arg:pollTimeoutMs - int
- (NSNumber *)ChannelReadAndPoll: (NSNumber *)channelNum 
	pollTimeoutMs: (NSNumber *)pollTimeoutMs;

// method: ChannelReadAndPoll2
// m_cppType = int
// arg:channelNum - int
// arg:pollTimeoutMs - int
// arg:maxNumBytes - int
- (NSNumber *)ChannelReadAndPoll2: (NSNumber *)channelNum 
	pollTimeoutMs: (NSNumber *)pollTimeoutMs 
	maxNumBytes: (NSNumber *)maxNumBytes;

// method: ChannelReceiveToClose
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelReceiveToClose: (NSNumber *)channelNum;

// method: ChannelReceiveUntilMatch
// m_cppType = bool
// arg:channelNum - int
// arg:matchPattern - const char *
// arg:charset - const char *
// arg:caseSensitive - bool
- (BOOL)ChannelReceiveUntilMatch: (NSNumber *)channelNum 
	matchPattern: (NSString *)matchPattern 
	charset: (NSString *)charset 
	caseSensitive: (BOOL)caseSensitive;

// method: ChannelReceiveUntilMatchN
// m_cppType = bool
// arg:channelNum - int
// arg:matchPatterns - CkStringArray &
// arg:charset - const char *
// arg:caseSensitive - bool
- (BOOL)ChannelReceiveUntilMatchN: (NSNumber *)channelNum 
	matchPatterns: (CkoStringArray *)matchPatterns 
	charset: (NSString *)charset 
	caseSensitive: (BOOL)caseSensitive;

// method: ChannelReceivedClose
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelReceivedClose: (NSNumber *)channelNum;

// method: ChannelReceivedEof
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelReceivedEof: (NSNumber *)channelNum;

// method: ChannelReceivedExitStatus
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelReceivedExitStatus: (NSNumber *)channelNum;

// method: ChannelSendClose
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelSendClose: (NSNumber *)channelNum;

// method: ChannelSendData
// m_cppType = bool
// arg:channelNum - int
// arg:data - CkByteData &
- (BOOL)ChannelSendData: (NSNumber *)channelNum 
	data: (NSData *)data;

// method: ChannelSendEof
// m_cppType = bool
// arg:channelNum - int
- (BOOL)ChannelSendEof: (NSNumber *)channelNum;

// method: ChannelSendString
// m_cppType = bool
// arg:channelNum - int
// arg:strData - const char *
// arg:charset - const char *
- (BOOL)ChannelSendString: (NSNumber *)channelNum 
	strData: (NSString *)strData 
	charset: (NSString *)charset;

// method: ClearTtyModes
// m_cppType = void
- (void)ClearTtyModes;

// method: Connect
// m_cppType = bool
// arg:hostname - const char *
// arg:port - int
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port;

// method: Disconnect
// m_cppType = void
- (void)Disconnect;

// method: GetChannelExitStatus
// m_cppType = int
// arg:channelNum - int
- (NSNumber *)GetChannelExitStatus: (NSNumber *)channelNum;

// method: GetChannelNumber
// m_cppType = int
// arg:index - int
- (NSNumber *)GetChannelNumber: (NSNumber *)index;

// method: GetChannelType
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetChannelType: (NSNumber *)index;

// method: GetReceivedData
// m_cppType = void
// arg:channelNum - int
// arg:outBytes - CkByteData &
- (NSData *)GetReceivedData: (NSNumber *)channelNum;

// method: GetReceivedDataN
// m_cppType = bool
// arg:channelNum - int
// arg:numBytes - int
// arg:outBytes - CkByteData &
- (NSData *)GetReceivedDataN: (NSNumber *)channelNum 
	numBytes: (NSNumber *)numBytes;

// method: GetReceivedNumBytes
// m_cppType = int
// arg:channelNum - int
- (NSNumber *)GetReceivedNumBytes: (NSNumber *)channelNum;

// method: GetReceivedStderr
// m_cppType = void
// arg:channelNum - int
// arg:outBytes - CkByteData &
- (NSData *)GetReceivedStderr: (NSNumber *)channelNum;

// method: GetReceivedText
// m_cppType = bool
// arg:channelNum - int
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)GetReceivedText: (NSNumber *)channelNum 
	charset: (NSString *)charset;

// method: GetReceivedTextS
// m_cppType = bool
// arg:channelNum - int
// arg:substr - const char *
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)GetReceivedTextS: (NSNumber *)channelNum 
	substr: (NSString *)substr 
	charset: (NSString *)charset;

// method: OpenCustomChannel
// m_cppType = int
// arg:channelType - const char *
- (NSNumber *)OpenCustomChannel: (NSString *)channelType;

// method: OpenDirectTcpIpChannel
// m_cppType = int
// arg:hostname - const char *
// arg:port - int
- (NSNumber *)OpenDirectTcpIpChannel: (NSString *)hostname 
	port: (NSNumber *)port;

// method: OpenSessionChannel
// m_cppType = int
- (NSNumber *)OpenSessionChannel;

// method: PeekReceivedText
// m_cppType = bool
// arg:channelNum - int
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)PeekReceivedText: (NSNumber *)channelNum 
	charset: (NSString *)charset;

// method: ReKey
// m_cppType = bool
- (BOOL)ReKey;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SendIgnore
// m_cppType = bool
- (BOOL)SendIgnore;

// method: SendReqExec
// m_cppType = bool
// arg:channelNum - int
// arg:command - const char *
- (BOOL)SendReqExec: (NSNumber *)channelNum 
	command: (NSString *)command;

// method: SendReqPty
// m_cppType = bool
// arg:channelNum - int
// arg:xTermEnvVar - const char *
// arg:widthInChars - int
// arg:heightInRows - int
// arg:pixWidth - int
// arg:pixHeight - int
- (BOOL)SendReqPty: (NSNumber *)channelNum 
	xTermEnvVar: (NSString *)xTermEnvVar 
	widthInChars: (NSNumber *)widthInChars 
	heightInRows: (NSNumber *)heightInRows 
	pixWidth: (NSNumber *)pixWidth 
	pixHeight: (NSNumber *)pixHeight;

// method: SendReqSetEnv
// m_cppType = bool
// arg:channelNum - int
// arg:name - const char *
// arg:value - const char *
- (BOOL)SendReqSetEnv: (NSNumber *)channelNum 
	name: (NSString *)name 
	value: (NSString *)value;

// method: SendReqShell
// m_cppType = bool
// arg:channelNum - int
- (BOOL)SendReqShell: (NSNumber *)channelNum;

// method: SendReqSignal
// m_cppType = bool
// arg:channelNum - int
// arg:signalName - const char *
- (BOOL)SendReqSignal: (NSNumber *)channelNum 
	signalName: (NSString *)signalName;

// method: SendReqSubsystem
// m_cppType = bool
// arg:channelNum - int
// arg:subsystemName - const char *
- (BOOL)SendReqSubsystem: (NSNumber *)channelNum 
	subsystemName: (NSString *)subsystemName;

// method: SendReqWindowChange
// m_cppType = bool
// arg:channelNum - int
// arg:widthInChars - int
// arg:heightInRows - int
// arg:pixWidth - int
// arg:pixHeight - int
- (BOOL)SendReqWindowChange: (NSNumber *)channelNum 
	widthInChars: (NSNumber *)widthInChars 
	heightInRows: (NSNumber *)heightInRows 
	pixWidth: (NSNumber *)pixWidth 
	pixHeight: (NSNumber *)pixHeight;

// method: SendReqX11Forwarding
// m_cppType = bool
// arg:channelNum - int
// arg:singleConnection - bool
// arg:authProt - const char *
// arg:authCookie - const char *
// arg:screenNum - int
- (BOOL)SendReqX11Forwarding: (NSNumber *)channelNum 
	singleConnection: (BOOL)singleConnection 
	authProt: (NSString *)authProt 
	authCookie: (NSString *)authCookie 
	screenNum: (NSNumber *)screenNum;

// method: SendReqXonXoff
// m_cppType = bool
// arg:channelNum - int
// arg:clientCanDo - bool
- (BOOL)SendReqXonXoff: (NSNumber *)channelNum 
	clientCanDo: (BOOL)clientCanDo;

// method: SetTtyMode
// m_cppType = bool
// arg:name - const char *
// arg:value - int
- (BOOL)SetTtyMode: (NSString *)name 
	value: (NSNumber *)value;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;


@end
