// Chilkat Objective-C header.
// Generic/internal class name =  Socket
// Wrapped Chilkat C++ class name =  CkSocket

@class CkoCert;


@interface CkoSocket : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: BigEndian
// m_cppType = bool
// arg:newVal - bool
- (BOOL)BigEndian;

// property setter: BigEndian
// m_cppType = bool
// arg:newVal - bool
- (void)setBigEndian: (BOOL)boolVal;

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

// property getter: ClientPort
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ClientPort;

// property setter: ClientPort
// m_cppType = int
// arg:newVal - int
- (void)setClientPort: (NSNumber *)intVal;

// property getter: ConnectFailReason
// m_cppType = long
- (NSNumber *)ConnectFailReason;

// property getter: DebugConnectDelayMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)DebugConnectDelayMs;

// property setter: DebugConnectDelayMs
// m_cppType = long
// arg:millisec - long
- (void)setDebugConnectDelayMs: (NSNumber *)longVal;

// property getter: DebugDnsDelayMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)DebugDnsDelayMs;

// property setter: DebugDnsDelayMs
// m_cppType = long
// arg:millisec - long
- (void)setDebugDnsDelayMs: (NSNumber *)longVal;

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

// property getter: ElapsedSeconds
// m_cppType = int
- (NSNumber *)ElapsedSeconds;

// property getter: HeartbeatMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = long
// arg:millisec - long
- (void)setHeartbeatMs: (NSNumber *)longVal;

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

// property getter: LastMethodFailed
// m_cppType = bool
- (BOOL)LastMethodFailed;

// property getter: LocalIpAddress
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LocalIpAddress;

// property getter: LocalPort
// m_cppType = int
- (NSNumber *)LocalPort;

// property getter: MaxReadIdleMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)MaxReadIdleMs;

// property setter: MaxReadIdleMs
// m_cppType = long
// arg:millisec - long
- (void)setMaxReadIdleMs: (NSNumber *)longVal;

// property getter: MaxSendIdleMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)MaxSendIdleMs;

// property setter: MaxSendIdleMs
// m_cppType = long
// arg:millisec - long
- (void)setMaxSendIdleMs: (NSNumber *)longVal;

// property getter: MyIpAddress
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)MyIpAddress;

// property getter: NumSocketsInSet
// m_cppType = int
- (NSNumber *)NumSocketsInSet;

// property getter: NumSslAcceptableClientCAs
// m_cppType = int
- (NSNumber *)NumSslAcceptableClientCAs;

// property getter: ObjectId
// m_cppType = long
- (NSNumber *)ObjectId;

// property getter: ReceivePacketSize
// m_cppType = long
// arg:sizeInBytes - long
- (NSNumber *)ReceivePacketSize;

// property setter: ReceivePacketSize
// m_cppType = long
// arg:sizeInBytes - long
- (void)setReceivePacketSize: (NSNumber *)longVal;

// property getter: ReceivedCount
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ReceivedCount;

// property setter: ReceivedCount
// m_cppType = int
// arg:newVal - int
- (void)setReceivedCount: (NSNumber *)intVal;

// property getter: RemoteIpAddress
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)RemoteIpAddress;

// property getter: RemotePort
// m_cppType = long
- (NSNumber *)RemotePort;

// property getter: SelectorIndex
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SelectorIndex;

// property setter: SelectorIndex
// m_cppType = int
// arg:newVal - int
- (void)setSelectorIndex: (NSNumber *)intVal;

// property getter: SelectorReadIndex
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SelectorReadIndex;

// property setter: SelectorReadIndex
// m_cppType = int
// arg:newVal - int
- (void)setSelectorReadIndex: (NSNumber *)intVal;

// property getter: SelectorWriteIndex
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SelectorWriteIndex;

// property setter: SelectorWriteIndex
// m_cppType = int
// arg:newVal - int
- (void)setSelectorWriteIndex: (NSNumber *)intVal;

// property getter: SendPacketSize
// m_cppType = long
// arg:sizeInBytes - long
- (NSNumber *)SendPacketSize;

// property setter: SendPacketSize
// m_cppType = long
// arg:sizeInBytes - long
- (void)setSendPacketSize: (NSNumber *)longVal;

// property getter: SessionLog
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SessionLog;

// property getter: SessionLogEncoding
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SessionLogEncoding;

// property setter: SessionLogEncoding
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSessionLogEncoding: (NSString *)input;

// property getter: SoRcvBuf
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SoRcvBuf;

// property setter: SoRcvBuf
// m_cppType = int
// arg:newVal - int
- (void)setSoRcvBuf: (NSNumber *)intVal;

// property getter: SoSndBuf
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SoSndBuf;

// property setter: SoSndBuf
// m_cppType = int
// arg:newVal - int
- (void)setSoSndBuf: (NSNumber *)intVal;

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

// property getter: StringCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)StringCharset;

// property setter: StringCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setStringCharset: (NSString *)input;

// property getter: TcpNoDelay
// m_cppType = bool
// arg:newVal - bool
- (BOOL)TcpNoDelay;

// property setter: TcpNoDelay
// m_cppType = bool
// arg:newVal - bool
- (void)setTcpNoDelay: (BOOL)boolVal;

// property getter: UserData
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UserData;

// property setter: UserData
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUserData: (NSString *)input;

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

// method: AcceptNextConnection
// m_cppType = CkSocket *
// arg:maxWaitMs - int
- (CkoSocket *)AcceptNextConnection: (NSNumber *)maxWaitMs;

// method: AddSslAcceptableClientCaDn
// m_cppType = bool
// arg:certAuthDN - const char *
- (BOOL)AddSslAcceptableClientCaDn: (NSString *)certAuthDN;

// method: BindAndListen
// m_cppType = bool
// arg:port - int
// arg:backlog - int
- (BOOL)BindAndListen: (NSNumber *)port 
	backlog: (NSNumber *)backlog;

// method: BuildHttpGetRequest
// m_cppType = void
// arg:url - const char *
// arg:outStr - CkString &
- (NSString *)BuildHttpGetRequest: (NSString *)url;

// method: CheckWriteable
// m_cppType = int
// arg:maxWaitMs - int
- (NSNumber *)CheckWriteable: (NSNumber *)maxWaitMs;

// method: ClearSessionLog
// m_cppType = void
- (void)ClearSessionLog;

// method: Close
// m_cppType = void
// arg:maxWaitMs - int
- (void)Close: (NSNumber *)maxWaitMs;

// method: Connect
// m_cppType = bool
// arg:hostname - const char *
// arg:port - int
// arg:ssl - bool
// arg:maxWaitMs - int
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;

// method: ConvertFromSsl
// m_cppType = bool
- (BOOL)ConvertFromSsl;

// method: ConvertToSsl
// m_cppType = bool
- (BOOL)ConvertToSsl;

// method: DnsLookup
// m_cppType = bool
// arg:hostname - const char *
// arg:maxWaitMs - int
// arg:outStr - CkString &
- (NSString *)DnsLookup: (NSString *)hostname 
	maxWaitMs: (NSNumber *)maxWaitMs;

// method: GetMyCert
// m_cppType = CkCert *
- (CkoCert *)GetMyCert;

// method: GetSslAcceptableClientCaDn
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetSslAcceptableClientCaDn: (NSNumber *)index;

// method: GetSslServerCert
// m_cppType = CkCert *
- (CkoCert *)GetSslServerCert;

// method: InitSslServer
// m_cppType = bool
// arg:cert - CkCert &
- (BOOL)InitSslServer: (CkoCert *)cert;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: PollDataAvailable
// m_cppType = bool
- (BOOL)PollDataAvailable;

// method: ReceiveBytes
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)ReceiveBytes;

// method: ReceiveBytesN
// m_cppType = bool
// arg:numBytes - unsigned long
// arg:outData - CkByteData &
- (NSData *)ReceiveBytesN: (NSNumber *)numBytes;

// method: ReceiveBytesToFile
// m_cppType = bool
// arg:appendFilename - const char *
- (BOOL)ReceiveBytesToFile: (NSString *)appendFilename;

// method: ReceiveCount
// m_cppType = int
- (NSNumber *)ReceiveCount;

// method: ReceiveString
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ReceiveString;

// method: ReceiveStringMaxN
// m_cppType = bool
// arg:maxBytes - int
// arg:outStr - CkString &
- (NSString *)ReceiveStringMaxN: (NSNumber *)maxBytes;

// method: ReceiveStringUntilByte
// m_cppType = bool
// arg:byteValue - int
// arg:outStr - CkString &
- (NSString *)ReceiveStringUntilByte: (NSNumber *)byteValue;

// method: ReceiveToCRLF
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ReceiveToCRLF;

// method: ReceiveUntilByte
// m_cppType = bool
// arg:byteValue - int
// arg:outBytes - CkByteData &
- (NSData *)ReceiveUntilByte: (NSNumber *)byteValue;

// method: ReceiveUntilMatch
// m_cppType = bool
// arg:matchStr - const char *
// arg:outStr - CkString &
- (NSString *)ReceiveUntilMatch: (NSString *)matchStr;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SelectForReading
// m_cppType = int
// arg:timeoutMs - int
- (NSNumber *)SelectForReading: (NSNumber *)timeoutMs;

// method: SelectForWriting
// m_cppType = int
// arg:timeoutMs - int
- (NSNumber *)SelectForWriting: (NSNumber *)timeoutMs;

// method: SendBytes
// m_cppType = bool
// arg:byteData - const unsigned char *
// arg:numBytes - unsigned long
- (BOOL)SendBytes: (NSData *)byteData 
	numBytes: (NSNumber *)numBytes;

// method: SendCount
// m_cppType = bool
// arg:byteCount - int
- (BOOL)SendCount: (NSNumber *)byteCount;

// method: SendString
// m_cppType = bool
// arg:str - const char *
- (BOOL)SendString: (NSString *)str;

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

// method: StartTiming
// m_cppType = void
- (void)StartTiming;

// method: TakeSocket
// m_cppType = bool
// arg:sock - CkSocket &
- (BOOL)TakeSocket: (CkoSocket *)sock;

// method: UnlockComponent
// m_cppType = bool
// arg:code - const char *
- (BOOL)UnlockComponent: (NSString *)code;


@end
