// Chilkat Objective-C header.
// Generic/internal class name =  MailMan
// Wrapped Chilkat C++ class name =  CkMailMan

@class CkoEmailBundle;
@class CkoEmail;
@class CkoStringArray;
@class CkoCert;
@class CkoPrivateKey;
@class CkoSshKey;


@interface CkoMailMan : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: AllOrNone
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AllOrNone;

// property setter: AllOrNone
// m_cppType = bool
// arg:newVal - bool
- (void)setAllOrNone: (BOOL)boolVal;

// property getter: AutoFix
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoFix;

// property setter: AutoFix
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoFix: (BOOL)boolVal;

// property getter: AutoGenMessageId
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoGenMessageId;

// property setter: AutoGenMessageId
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoGenMessageId: (BOOL)boolVal;

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

// property getter: DsnEnvid
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)DsnEnvid;

// property setter: DsnEnvid
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setDsnEnvid: (NSString *)input;

// property getter: DsnNotify
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)DsnNotify;

// property setter: DsnNotify
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setDsnNotify: (NSString *)input;

// property getter: DsnRet
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)DsnRet;

// property setter: DsnRet
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setDsnRet: (NSString *)input;

// property getter: EmbedCertChain
// m_cppType = bool
// arg:newVal - bool
- (BOOL)EmbedCertChain;

// property setter: EmbedCertChain
// m_cppType = bool
// arg:newVal - bool
- (void)setEmbedCertChain: (BOOL)boolVal;

// property getter: Filter
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Filter;

// property setter: Filter
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setFilter: (NSString *)input;

// property getter: HeartbeatMs
// m_cppType = long
// arg:millisec - long
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = long
// arg:millisec - long
- (void)setHeartbeatMs: (NSNumber *)longVal;

// property getter: HeloHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)HeloHostname;

// property setter: HeloHostname
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setHeloHostname: (NSString *)input;

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

// property getter: ImmediateDelete
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ImmediateDelete;

// property setter: ImmediateDelete
// m_cppType = bool
// arg:newVal - bool
- (void)setImmediateDelete: (BOOL)boolVal;

// property getter: IncludeRootCert
// m_cppType = bool
// arg:newVal - bool
- (BOOL)IncludeRootCert;

// property setter: IncludeRootCert
// m_cppType = bool
// arg:newVal - bool
- (void)setIncludeRootCert: (BOOL)boolVal;

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

// property getter: LastSendQFilename
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastSendQFilename;

// property getter: LastSmtpStatus
// m_cppType = long
- (NSNumber *)LastSmtpStatus;

// property getter: LogMailReceivedFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)LogMailReceivedFilename;

// property setter: LogMailReceivedFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setLogMailReceivedFilename: (NSString *)input;

// property getter: LogMailSentFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)LogMailSentFilename;

// property setter: LogMailSentFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setLogMailSentFilename: (NSString *)input;

// property getter: MailHost
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)MailHost;

// property setter: MailHost
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setMailHost: (NSString *)input;

// property getter: MailPort
// m_cppType = long
// arg:newVal - long
- (NSNumber *)MailPort;

// property setter: MailPort
// m_cppType = long
// arg:newVal - long
- (void)setMailPort: (NSNumber *)longVal;

// property getter: MaxCount
// m_cppType = long
// arg:newVal - long
- (NSNumber *)MaxCount;

// property setter: MaxCount
// m_cppType = long
// arg:newVal - long
- (void)setMaxCount: (NSNumber *)longVal;

// property getter: OpaqueSigning
// m_cppType = bool
// arg:newVal - bool
- (BOOL)OpaqueSigning;

// property setter: OpaqueSigning
// m_cppType = bool
// arg:newVal - bool
- (void)setOpaqueSigning: (BOOL)boolVal;

// property getter: Pop3SPA
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Pop3SPA;

// property setter: Pop3SPA
// m_cppType = bool
// arg:newVal - bool
- (void)setPop3SPA: (BOOL)boolVal;

// property getter: Pop3SessionId
// m_cppType = int
- (NSNumber *)Pop3SessionId;

// property getter: Pop3SessionLog
// m_cppType = CkString &
// arg:log - CkString &
- (NSString *)Pop3SessionLog;

// property getter: Pop3SslServerCertVerified
// m_cppType = bool
- (BOOL)Pop3SslServerCertVerified;

// property getter: Pop3Stls
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Pop3Stls;

// property setter: Pop3Stls
// m_cppType = bool
// arg:newVal - bool
- (void)setPop3Stls: (BOOL)boolVal;

// property getter: PopPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)PopPassword;

// property setter: PopPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setPopPassword: (NSString *)input;

// property getter: PopSsl
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PopSsl;

// property setter: PopSsl
// m_cppType = bool
// arg:newVal - bool
- (void)setPopSsl: (BOOL)boolVal;

// property getter: PopUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)PopUsername;

// property setter: PopUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setPopUsername: (NSString *)input;

// property getter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (NSNumber *)ReadTimeout;

// property setter: ReadTimeout
// m_cppType = long
// arg:numSeconds - long
- (void)setReadTimeout: (NSNumber *)longVal;

// property getter: ResetDateOnLoad
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ResetDateOnLoad;

// property setter: ResetDateOnLoad
// m_cppType = bool
// arg:newVal - bool
- (void)setResetDateOnLoad: (BOOL)boolVal;

// property getter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SendBufferSize;

// property setter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (void)setSendBufferSize: (NSNumber *)intVal;

// property getter: SendIndividual
// m_cppType = bool
// arg:newVal - bool
- (BOOL)SendIndividual;

// property setter: SendIndividual
// m_cppType = bool
// arg:newVal - bool
- (void)setSendIndividual: (BOOL)boolVal;

// property getter: SizeLimit
// m_cppType = long
// arg:newVal - long
- (NSNumber *)SizeLimit;

// property setter: SizeLimit
// m_cppType = long
// arg:newVal - long
- (void)setSizeLimit: (NSNumber *)longVal;

// property getter: SmtpAuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)SmtpAuthMethod;

// property setter: SmtpAuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setSmtpAuthMethod: (NSString *)input;

// property getter: SmtpHost
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)SmtpHost;

// property setter: SmtpHost
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setSmtpHost: (NSString *)input;

// property getter: SmtpLoginDomain
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)SmtpLoginDomain;

// property setter: SmtpLoginDomain
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setSmtpLoginDomain: (NSString *)input;

// property getter: SmtpPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)SmtpPassword;

// property setter: SmtpPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setSmtpPassword: (NSString *)input;

// property getter: SmtpPort
// m_cppType = long
// arg:newVal - long
- (NSNumber *)SmtpPort;

// property setter: SmtpPort
// m_cppType = long
// arg:newVal - long
- (void)setSmtpPort: (NSNumber *)longVal;

// property getter: SmtpSessionLog
// m_cppType = CkString &
// arg:log - CkString &
- (NSString *)SmtpSessionLog;

// property getter: SmtpSsl
// m_cppType = bool
// arg:newVal - bool
- (BOOL)SmtpSsl;

// property setter: SmtpSsl
// m_cppType = bool
// arg:newVal - bool
- (void)setSmtpSsl: (BOOL)boolVal;

// property getter: SmtpSslServerCertVerified
// m_cppType = bool
- (BOOL)SmtpSslServerCertVerified;

// property getter: SmtpUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)SmtpUsername;

// property setter: SmtpUsername
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setSmtpUsername: (NSString *)input;

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

// property getter: StartTLS
// m_cppType = bool
// arg:newVal - bool
- (BOOL)StartTLS;

// property setter: StartTLS
// m_cppType = bool
// arg:newVal - bool
- (void)setStartTLS: (BOOL)boolVal;

// property getter: UseApop
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseApop;

// property setter: UseApop
// m_cppType = bool
// arg:newVal - bool
- (void)setUseApop: (BOOL)boolVal;

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

// method: AddPfxSourceData
// m_cppType = bool
// arg:pfxData - CkByteData &
// arg:password - const char *
- (BOOL)AddPfxSourceData: (NSData *)pfxData 
	password: (NSString *)password;

// method: AddPfxSourceFile
// m_cppType = bool
// arg:pfxFilePath - const char *
// arg:password - const char *
- (BOOL)AddPfxSourceFile: (NSString *)pfxFilePath 
	password: (NSString *)password;

// method: CheckMail
// m_cppType = long
- (NSNumber *)CheckMail;

// method: ClearBadEmailAddresses
// m_cppType = void
- (void)ClearBadEmailAddresses;

// method: ClearPop3SessionLog
// m_cppType = void
- (void)ClearPop3SessionLog;

// method: ClearSmtpSessionLog
// m_cppType = void
- (void)ClearSmtpSessionLog;

// method: CloseSmtpConnection
// m_cppType = bool
- (BOOL)CloseSmtpConnection;

// method: CopyMail
// m_cppType = CkEmailBundle *
- (CkoEmailBundle *)CopyMail;

// method: DeleteBundle
// m_cppType = bool
// arg:bundle - const CkEmailBundle &
- (BOOL)DeleteBundle: (CkoEmailBundle *)bundle;

// method: DeleteByMsgnum
// m_cppType = bool
// arg:msgnum - int
- (BOOL)DeleteByMsgnum: (NSNumber *)msgnum;

// method: DeleteByUidl
// m_cppType = bool
// arg:uidl - const char *
- (BOOL)DeleteByUidl: (NSString *)uidl;

// method: DeleteEmail
// m_cppType = bool
// arg:email - const CkEmail &
- (BOOL)DeleteEmail: (CkoEmail *)email;

// method: DeleteMultiple
// m_cppType = bool
// arg:uidlArray - const CkStringArray &
- (BOOL)DeleteMultiple: (CkoStringArray *)uidlArray;

// method: FetchByMsgnum
// m_cppType = CkEmail *
// arg:msgnum - int
- (CkoEmail *)FetchByMsgnum: (NSNumber *)msgnum;

// method: FetchEmail
// m_cppType = CkEmail *
// arg:uidl - const char *
- (CkoEmail *)FetchEmail: (NSString *)uidl;

// method: FetchMime
// m_cppType = bool
// arg:uidl - const char *
// arg:outData - CkByteData &
- (NSData *)FetchMime: (NSString *)uidl;

// method: FetchMimeByMsgnum
// m_cppType = bool
// arg:msgnum - int
// arg:outBytes - CkByteData &
- (NSData *)FetchMimeByMsgnum: (NSNumber *)msgnum;

// method: FetchMultiple
// m_cppType = CkEmailBundle *
// arg:uidlArray - const CkStringArray &
- (CkoEmailBundle *)FetchMultiple: (CkoStringArray *)uidlArray;

// method: FetchMultipleHeaders
// m_cppType = CkEmailBundle *
// arg:uidlArray - const CkStringArray &
// arg:numBodyLines - long
- (CkoEmailBundle *)FetchMultipleHeaders: (CkoStringArray *)uidlArray 
	numBodyLines: (NSNumber *)numBodyLines;

// method: FetchMultipleMime
// m_cppType = CkStringArray *
// arg:uidlArray - const CkStringArray &
- (CkoStringArray *)FetchMultipleMime: (CkoStringArray *)uidlArray;

// method: FetchSingleHeader
// m_cppType = CkEmail *
// arg:numBodyLines - long
// arg:index - long
- (CkoEmail *)FetchSingleHeader: (NSNumber *)numBodyLines 
	index: (NSNumber *)index;

// method: FetchSingleHeaderByUidl
// m_cppType = CkEmail *
// arg:numBodyLines - long
// arg:uidl - const char *
- (CkoEmail *)FetchSingleHeaderByUidl: (NSNumber *)numBodyLines 
	uidl: (NSString *)uidl;

// method: GetAllHeaders
// m_cppType = CkEmailBundle *
// arg:numBodyLines - long
- (CkoEmailBundle *)GetAllHeaders: (NSNumber *)numBodyLines;

// method: GetBadEmailAddresses
// m_cppType = CkStringArray *
- (CkoStringArray *)GetBadEmailAddresses;

// method: GetFullEmail
// m_cppType = CkEmail *
// arg:email - const CkEmail &
- (CkoEmail *)GetFullEmail: (CkoEmail *)email;

// method: GetHeaders
// m_cppType = CkEmailBundle *
// arg:numBodyLines - long
// arg:fromIndex - long
// arg:toIndex - long
- (CkoEmailBundle *)GetHeaders: (NSNumber *)numBodyLines 
	fromIndex: (NSNumber *)fromIndex 
	toIndex: (NSNumber *)toIndex;

// method: GetMailboxCount
// m_cppType = int
- (NSNumber *)GetMailboxCount;

// method: GetMailboxInfoXml
// m_cppType = bool
// arg:outXml - CkString &
- (NSString *)GetMailboxInfoXml;

// method: GetMailboxSize
// m_cppType = unsigned long
- (NSNumber *)GetMailboxSize;

// method: GetPop3SslServerCert
// m_cppType = CkCert *
- (CkoCert *)GetPop3SslServerCert;

// method: GetSizeByUidl
// m_cppType = int
// arg:uidl - const char *
- (NSNumber *)GetSizeByUidl: (NSString *)uidl;

// method: GetSmtpSslServerCert
// m_cppType = CkCert *
- (CkoCert *)GetSmtpSslServerCert;

// method: GetUidls
// m_cppType = CkStringArray *
- (CkoStringArray *)GetUidls;

// method: IsSmtpDsnCapable
// m_cppType = bool
- (BOOL)IsSmtpDsnCapable;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: LoadEml
// m_cppType = CkEmail *
// arg:emlFilename - const char *
- (CkoEmail *)LoadEml: (NSString *)emlFilename;

// method: LoadMbx
// m_cppType = CkEmailBundle *
// arg:mbxFileName - const char *
- (CkoEmailBundle *)LoadMbx: (NSString *)mbxFileName;

// method: LoadMime
// m_cppType = CkEmail *
// arg:mimeText - const char *
- (CkoEmail *)LoadMime: (NSString *)mimeText;

// method: LoadXmlEmail
// m_cppType = CkEmail *
// arg:folderPath - const char *
- (CkoEmail *)LoadXmlEmail: (NSString *)folderPath;

// method: LoadXmlEmailString
// m_cppType = CkEmail *
// arg:xmlString - const char *
- (CkoEmail *)LoadXmlEmailString: (NSString *)xmlString;

// method: LoadXmlFile
// m_cppType = CkEmailBundle *
// arg:folderPath - const char *
- (CkoEmailBundle *)LoadXmlFile: (NSString *)folderPath;

// method: LoadXmlString
// m_cppType = CkEmailBundle *
// arg:xmlString - const char *
- (CkoEmailBundle *)LoadXmlString: (NSString *)xmlString;

// method: OpenSmtpConnection
// m_cppType = bool
- (BOOL)OpenSmtpConnection;

// method: Pop3BeginSession
// m_cppType = bool
- (BOOL)Pop3BeginSession;

// method: Pop3EndSession
// m_cppType = bool
- (BOOL)Pop3EndSession;

// method: Pop3EndSessionNoQuit
// m_cppType = bool
- (BOOL)Pop3EndSessionNoQuit;

// method: Pop3Noop
// m_cppType = bool
- (BOOL)Pop3Noop;

// method: Pop3Reset
// m_cppType = bool
- (BOOL)Pop3Reset;

// method: Pop3SendRawCommand
// m_cppType = bool
// arg:command - const char *
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)Pop3SendRawCommand: (NSString *)command 
	charset: (NSString *)charset;

// method: QuickSend
// m_cppType = bool
// arg:from - const char *
// arg:to - const char *
// arg:subject - const char *
// arg:body - const char *
// arg:smtpServer - const char *
- (BOOL)QuickSend: (NSString *)from 
	to: (NSString *)to 
	subject: (NSString *)subject 
	body: (NSString *)body 
	smtpServer: (NSString *)smtpServer;

// method: RenderToMime
// m_cppType = bool
// arg:email - const CkEmail &
// arg:outStr - CkString &
- (NSString *)RenderToMime: (CkoEmail *)email;

// method: RenderToMimeBytes
// m_cppType = bool
// arg:email - CkEmail &
// arg:outBytes - CkByteData &
- (NSData *)RenderToMimeBytes: (CkoEmail *)email;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SendBundle
// m_cppType = bool
// arg:bundle - const CkEmailBundle &
- (BOOL)SendBundle: (CkoEmailBundle *)bundle;

// method: SendEmail
// m_cppType = bool
// arg:email - const CkEmail &
- (BOOL)SendEmail: (CkoEmail *)email;

// method: SendMime
// m_cppType = bool
// arg:from - const char *
// arg:recipients - const char *
// arg:mimeMsg - const char *
- (BOOL)SendMime: (NSString *)from 
	recipients: (NSString *)recipients 
	mimeMsg: (NSString *)mimeMsg;

// method: SendMimeBytes
// m_cppType = bool
// arg:from - const char *
// arg:recipients - const char *
// arg:mimeData - CkByteData &
- (BOOL)SendMimeBytes: (NSString *)from 
	recipients: (NSString *)recipients 
	mimeData: (NSData *)mimeData;

// method: SendMimeBytesQ
// m_cppType = bool
// arg:from - const char *
// arg:recipients - const char *
// arg:mimeData - CkByteData &
- (BOOL)SendMimeBytesQ: (NSString *)from 
	recipients: (NSString *)recipients 
	mimeData: (NSData *)mimeData;

// method: SendMimeQ
// m_cppType = bool
// arg:from - const char *
// arg:recipients - const char *
// arg:mimeMsg - const char *
- (BOOL)SendMimeQ: (NSString *)from 
	recipients: (NSString *)recipients 
	mimeMsg: (NSString *)mimeMsg;

// method: SendMimeToList
// m_cppType = bool
// arg:from - const char *
// arg:distListFile - const char *
// arg:mimeText - const char *
- (BOOL)SendMimeToList: (NSString *)from 
	distListFile: (NSString *)distListFile 
	mimeText: (NSString *)mimeText;

// method: SendQ
// m_cppType = bool
// arg:email - const CkEmail &
- (BOOL)SendQ: (CkoEmail *)email;

// method: SendQ2
// m_cppType = bool
// arg:email - const CkEmail &
// arg:queueDir - const char *
- (BOOL)SendQ2: (CkoEmail *)email 
	queueDir: (NSString *)queueDir;

// method: SendToDistributionList
// m_cppType = bool
// arg:email - CkEmail &
// arg:array - CkStringArray &
- (BOOL)SendToDistributionList: (CkoEmail *)email 
	array: (CkoStringArray *)array;

// method: SetDecryptCert2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:key - CkPrivateKey &
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;

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

// method: SmtpNoop
// m_cppType = bool
- (BOOL)SmtpNoop;

// method: SmtpReset
// m_cppType = bool
- (BOOL)SmtpReset;

// method: SmtpSendRawCommand
// m_cppType = bool
// arg:command - const char *
// arg:charset - const char *
// arg:bEncodeBase64 - bool
// arg:outStr - CkString &
- (NSString *)SmtpSendRawCommand: (NSString *)command 
	charset: (NSString *)charset 
	bEncodeBase64: (BOOL)bEncodeBase64;

// method: SshAuthenticatePk
// m_cppType = bool
// arg:bSmtp - bool
// arg:sshLogin - const char *
// arg:privateKey - CkSshKey &
- (BOOL)SshAuthenticatePk: (BOOL)bSmtp 
	sshLogin: (NSString *)sshLogin 
	privateKey: (CkoSshKey *)privateKey;

// method: SshAuthenticatePw
// m_cppType = bool
// arg:bSmtp - bool
// arg:sshLogin - const char *
// arg:sshPassword - const char *
- (BOOL)SshAuthenticatePw: (BOOL)bSmtp 
	sshLogin: (NSString *)sshLogin 
	sshPassword: (NSString *)sshPassword;

// method: SshCloseTunnel
// m_cppType = bool
// arg:bSmtp - bool
- (BOOL)SshCloseTunnel: (BOOL)bSmtp;

// method: SshTunnel
// m_cppType = bool
// arg:bSmtp - bool
// arg:sshServerHostname - const char *
// arg:sshServerPort - int
- (BOOL)SshTunnel: (BOOL)bSmtp 
	sshServerHostname: (NSString *)sshServerHostname 
	sshServerPort: (NSNumber *)sshServerPort;

// method: TransferMail
// m_cppType = CkEmailBundle *
- (CkoEmailBundle *)TransferMail;

// method: TransferMultipleMime
// m_cppType = CkStringArray *
// arg:uidlArray - const CkStringArray &
- (CkoStringArray *)TransferMultipleMime: (CkoStringArray *)uidlArray;

// method: UnlockComponent
// m_cppType = bool
// arg:code - const char *
- (BOOL)UnlockComponent: (NSString *)code;

// method: VerifyPopConnection
// m_cppType = bool
- (BOOL)VerifyPopConnection;

// method: VerifyPopLogin
// m_cppType = bool
- (BOOL)VerifyPopLogin;

// method: VerifyRecipients
// m_cppType = bool
// arg:email - const CkEmail &
// arg:saBadAddrs - CkStringArray &
- (BOOL)VerifyRecipients: (CkoEmail *)email 
	saBadAddrs: (CkoStringArray *)saBadAddrs;

// method: VerifySmtpConnection
// m_cppType = bool
- (BOOL)VerifySmtpConnection;

// method: VerifySmtpLogin
// m_cppType = bool
- (BOOL)VerifySmtpLogin;


@end
