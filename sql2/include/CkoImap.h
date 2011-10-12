// Chilkat Objective-C header.
// Generic/internal class name =  Imap
// Wrapped Chilkat C++ class name =  CkImap

@class CkoEmail;
@class CkoMessageSet;
@class CkoEmailBundle;
@class CkoStringArray;
@class CkoCert;
@class CkoMailboxes;
@class CkoPrivateKey;
@class CkoSshKey;


@interface CkoImap : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: AppendSeen
// m_cppType = bool
// arg:alreadySeen - bool
- (BOOL)AppendSeen;

// property setter: AppendSeen
// m_cppType = bool
// arg:alreadySeen - bool
- (void)setAppendSeen: (BOOL)boolVal;

// property getter: AppendUid
// m_cppType = int
- (NSNumber *)AppendUid;

// property getter: AuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)AuthMethod;

// property setter: AuthMethod
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setAuthMethod: (NSString *)input;

// property getter: AuthzId
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)AuthzId;

// property setter: AuthzId
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setAuthzId: (NSString *)input;

// property getter: AutoFix
// m_cppType = bool
// arg:newVal - bool
- (BOOL)AutoFix;

// property setter: AutoFix
// m_cppType = bool
// arg:newVal - bool
- (void)setAutoFix: (BOOL)boolVal;

// property getter: ConnectTimeout
// m_cppType = int
// arg:numSeconds - int
- (NSNumber *)ConnectTimeout;

// property setter: ConnectTimeout
// m_cppType = int
// arg:numSeconds - int
- (void)setConnectTimeout: (NSNumber *)intVal;

// property getter: ConnectedToHost
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)ConnectedToHost;

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

// property getter: Domain
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Domain;

// property setter: Domain
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setDomain: (NSString *)input;

// property getter: HeartbeatMs
// m_cppType = long
// arg:newVal - long
- (NSNumber *)HeartbeatMs;

// property setter: HeartbeatMs
// m_cppType = long
// arg:newVal - long
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

// property getter: KeepSessionLog
// m_cppType = bool
// arg:newVal - bool
- (BOOL)KeepSessionLog;

// property setter: KeepSessionLog
// m_cppType = bool
// arg:newVal - bool
- (void)setKeepSessionLog: (BOOL)boolVal;

// property getter: LastAppendedMime
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastAppendedMime;

// property getter: LastCommand
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastCommand;

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

// property getter: LastIntermediateResponse
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastIntermediateResponse;

// property getter: LastResponse
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LastResponse;

// property getter: LoggedInUser
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)LoggedInUser;

// property getter: NumMessages
// m_cppType = long
- (NSNumber *)NumMessages;

// property getter: PeekMode
// m_cppType = bool
// arg:bPeek - bool
- (BOOL)PeekMode;

// property setter: PeekMode
// m_cppType = bool
// arg:bPeek - bool
- (void)setPeekMode: (BOOL)boolVal;

// property getter: Port
// m_cppType = int
// arg:port - int
- (NSNumber *)Port;

// property setter: Port
// m_cppType = int
// arg:port - int
- (void)setPort: (NSNumber *)intVal;

// property getter: ReadTimeout
// m_cppType = int
// arg:numSeconds - int
- (NSNumber *)ReadTimeout;

// property setter: ReadTimeout
// m_cppType = int
// arg:numSeconds - int
- (void)setReadTimeout: (NSNumber *)intVal;

// property getter: SelectedMailbox
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SelectedMailbox;

// property getter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (NSNumber *)SendBufferSize;

// property setter: SendBufferSize
// m_cppType = int
// arg:newVal - int
- (void)setSendBufferSize: (NSNumber *)intVal;

// property getter: SeparatorChar
// m_cppType = char
// arg:c - char
- (char)SeparatorChar;

// property setter: SeparatorChar
// m_cppType = char
// arg:c - char
- (void)setSeparatorChar: (char)ch;

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
// arg:s - bool
- (BOOL)Ssl;

// property setter: Ssl
// m_cppType = bool
// arg:s - bool
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

// property getter: StartTls
// m_cppType = bool
// arg:newVal - bool
- (BOOL)StartTls;

// property setter: StartTls
// m_cppType = bool
// arg:newVal - bool
- (void)setStartTls: (BOOL)boolVal;

// property getter: UidNext
// m_cppType = int
- (NSNumber *)UidNext;

// property getter: UidValidity
// m_cppType = int
- (NSNumber *)UidValidity;

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

// method: AppendMail
// m_cppType = bool
// arg:mailbox - const char *
// arg:email - const CkEmail &
- (BOOL)AppendMail: (NSString *)mailbox 
	email: (CkoEmail *)email;

// method: AppendMime
// m_cppType = bool
// arg:mailbox - const char *
// arg:mimeText - const char *
- (BOOL)AppendMime: (NSString *)mailbox 
	mimeText: (NSString *)mimeText;

// method: AppendMimeWithDate
// m_cppType = bool
// arg:mailbox - const char *
// arg:mimeText - const char *
// arg:internalDate - SYSTEMTIME &
- (BOOL)AppendMimeWithDate: (NSString *)mailbox 
	mimeText: (NSString *)mimeText 
	internalDate: (NSDate *)internalDate;

// method: AppendMimeWithFlags
// m_cppType = bool
// arg:mailbox - const char *
// arg:mimeText - const char *
// arg:seen - bool
// arg:flagged - bool
// arg:answered - bool
// arg:draft - bool
- (BOOL)AppendMimeWithFlags: (NSString *)mailbox 
	mimeText: (NSString *)mimeText 
	seen: (BOOL)seen 
	flagged: (BOOL)flagged 
	answered: (BOOL)answered 
	draft: (BOOL)draft;

// method: ClearSessionLog
// m_cppType = void
- (void)ClearSessionLog;

// method: Connect
// m_cppType = bool
// arg:hostname - const char *
- (BOOL)Connect: (NSString *)hostname;

// method: Copy
// m_cppType = bool
// arg:msgId - long
// arg:bUid - bool
// arg:copyToMailbox - const char *
- (BOOL)Copy: (NSNumber *)msgId 
	bUid: (BOOL)bUid 
	copyToMailbox: (NSString *)copyToMailbox;

// method: CopyMultiple
// m_cppType = bool
// arg:messageSet - CkMessageSet &
// arg:copyToMailbox - const char *
- (BOOL)CopyMultiple: (CkoMessageSet *)messageSet 
	copyToMailbox: (NSString *)copyToMailbox;

// method: CopySequence
// m_cppType = bool
// arg:startSeqNum - int
// arg:count - int
// arg:copyToMailbox - const char *
- (BOOL)CopySequence: (NSNumber *)startSeqNum 
	count: (NSNumber *)count 
	copyToMailbox: (NSString *)copyToMailbox;

// method: CreateMailbox
// m_cppType = bool
// arg:mailbox - const char *
- (BOOL)CreateMailbox: (NSString *)mailbox;

// method: DeleteMailbox
// m_cppType = bool
// arg:mailbox - const char *
- (BOOL)DeleteMailbox: (NSString *)mailbox;

// method: Disconnect
// m_cppType = bool
- (BOOL)Disconnect;

// method: ExamineMailbox
// m_cppType = bool
// arg:mailbox - const char *
- (BOOL)ExamineMailbox: (NSString *)mailbox;

// method: Expunge
// m_cppType = bool
- (BOOL)Expunge;

// method: ExpungeAndClose
// m_cppType = bool
- (BOOL)ExpungeAndClose;

// method: FetchBundle
// m_cppType = CkEmailBundle *
// arg:messageSet - const CkMessageSet &
- (CkoEmailBundle *)FetchBundle: (CkoMessageSet *)messageSet;

// method: FetchBundleAsMime
// m_cppType = CkStringArray *
// arg:messageSet - const CkMessageSet &
- (CkoStringArray *)FetchBundleAsMime: (CkoMessageSet *)messageSet;

// method: FetchChunk
// m_cppType = CkEmailBundle *
// arg:startSeqNum - int
// arg:count - int
// arg:failedSet - CkMessageSet &
// arg:fetchedSet - CkMessageSet &
- (CkoEmailBundle *)FetchChunk: (NSNumber *)startSeqNum 
	count: (NSNumber *)count 
	failedSet: (CkoMessageSet *)failedSet 
	fetchedSet: (CkoMessageSet *)fetchedSet;

// method: FetchFlags
// m_cppType = bool
// arg:msgId - long
// arg:bUid - bool
// arg:outStrFlags - CkString &
- (NSString *)FetchFlags: (NSNumber *)msgId 
	bUid: (BOOL)bUid;

// method: FetchHeaders
// m_cppType = CkEmailBundle *
// arg:messageSet - const CkMessageSet &
- (CkoEmailBundle *)FetchHeaders: (CkoMessageSet *)messageSet;

// method: FetchSequence
// m_cppType = CkEmailBundle *
// arg:startSeqNum - int
// arg:numMessages - int
- (CkoEmailBundle *)FetchSequence: (NSNumber *)startSeqNum 
	numMessages: (NSNumber *)numMessages;

// method: FetchSequenceAsMime
// m_cppType = CkStringArray *
// arg:startSeqNum - int
// arg:count - int
- (CkoStringArray *)FetchSequenceAsMime: (NSNumber *)startSeqNum 
	count: (NSNumber *)count;

// method: FetchSequenceHeaders
// m_cppType = CkEmailBundle *
// arg:startSeqNum - int
// arg:numMessages - int
- (CkoEmailBundle *)FetchSequenceHeaders: (NSNumber *)startSeqNum 
	numMessages: (NSNumber *)numMessages;

// method: FetchSingle
// m_cppType = CkEmail *
// arg:msgId - long
// arg:bUid - bool
- (CkoEmail *)FetchSingle: (NSNumber *)msgId 
	bUid: (BOOL)bUid;

// method: FetchSingleAsMime
// m_cppType = bool
// arg:msgId - long
// arg:bUid - bool
// arg:outStrMime - CkString &
- (NSString *)FetchSingleAsMime: (NSNumber *)msgId 
	bUid: (BOOL)bUid;

// method: FetchSingleHeader
// m_cppType = CkEmail *
// arg:msgId - long
// arg:bUid - bool
- (CkoEmail *)FetchSingleHeader: (NSNumber *)msgId 
	bUid: (BOOL)bUid;

// method: FetchSingleHeaderAsMime
// m_cppType = bool
// arg:msgId - int
// arg:bUID - bool
// arg:outStr - CkString &
- (NSString *)FetchSingleHeaderAsMime: (NSNumber *)msgId 
	bUID: (BOOL)bUID;

// method: GetAllUids
// m_cppType = CkMessageSet *
- (CkoMessageSet *)GetAllUids;

// method: GetMailAttachFilename
// m_cppType = bool
// arg:email - const CkEmail &
// arg:attachIndex - long
// arg:outStrFilename - CkString &
- (NSString *)GetMailAttachFilename: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex;

// method: GetMailAttachSize
// m_cppType = long
// arg:email - const CkEmail &
// arg:attachIndex - long
- (NSNumber *)GetMailAttachSize: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex;

// method: GetMailFlag
// m_cppType = long
// arg:email - const CkEmail &
// arg:flagName - const char *
- (NSNumber *)GetMailFlag: (CkoEmail *)email 
	flagName: (NSString *)flagName;

// method: GetMailNumAttach
// m_cppType = long
// arg:email - const CkEmail &
- (NSNumber *)GetMailNumAttach: (CkoEmail *)email;

// method: GetMailSize
// m_cppType = long
// arg:email - const CkEmail &
- (NSNumber *)GetMailSize: (CkoEmail *)email;

// method: GetSslServerCert
// m_cppType = CkCert *
- (CkoCert *)GetSslServerCert;

// method: IsConnected
// m_cppType = bool
- (BOOL)IsConnected;

// method: IsLoggedIn
// m_cppType = bool
- (BOOL)IsLoggedIn;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: ListMailboxes
// m_cppType = CkMailboxes *
// arg:reference - const char *
// arg:wildcardedMailbox - const char *
- (CkoMailboxes *)ListMailboxes: (NSString *)reference 
	wildcardedMailbox: (NSString *)wildcardedMailbox;

// method: Login
// m_cppType = bool
// arg:login - const char *
// arg:password - const char *
- (BOOL)Login: (NSString *)login 
	password: (NSString *)password;

// method: Logout
// m_cppType = bool
- (BOOL)Logout;

// method: Noop
// m_cppType = bool
- (BOOL)Noop;

// method: RefetchMailFlags
// m_cppType = bool
// arg:emailInOut - CkEmail &
- (BOOL)RefetchMailFlags: (CkoEmail *)emailInOut;

// method: RenameMailbox
// m_cppType = bool
// arg:fromMailbox - const char *
// arg:toMailbox - const char *
- (BOOL)RenameMailbox: (NSString *)fromMailbox 
	toMailbox: (NSString *)toMailbox;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: Search
// m_cppType = CkMessageSet *
// arg:criteria - const char *
// arg:bUid - bool
- (CkoMessageSet *)Search: (NSString *)criteria 
	bUid: (BOOL)bUid;

// method: SelectMailbox
// m_cppType = bool
// arg:mailbox - const char *
- (BOOL)SelectMailbox: (NSString *)mailbox;

// method: SendRawCommand
// m_cppType = bool
// arg:rawCommand - const char *
// arg:outRawResponse - CkString &
- (NSString *)SendRawCommand: (NSString *)rawCommand;

// method: SetDecryptCert2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:key - CkPrivateKey &
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;

// method: SetFlag
// m_cppType = bool
// arg:msgId - long
// arg:bUid - bool
// arg:flagName - const char *
// arg:value - long
- (BOOL)SetFlag: (NSNumber *)msgId 
	bUid: (BOOL)bUid 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;

// method: SetFlags
// m_cppType = bool
// arg:messageSet - const CkMessageSet &
// arg:flagName - const char *
// arg:value - long
- (BOOL)SetFlags: (CkoMessageSet *)messageSet 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;

// method: SetMailFlag
// m_cppType = bool
// arg:email - const CkEmail &
// arg:flagName - const char *
// arg:value - long
- (BOOL)SetMailFlag: (CkoEmail *)email 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;

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

// method: SshAuthenticatePk
// m_cppType = bool
// arg:sshLogin - const char *
// arg:privateKey - CkSshKey &
- (BOOL)SshAuthenticatePk: (NSString *)sshLogin 
	privateKey: (CkoSshKey *)privateKey;

// method: SshAuthenticatePw
// m_cppType = bool
// arg:sshLogin - const char *
// arg:sshPassword - const char *
- (BOOL)SshAuthenticatePw: (NSString *)sshLogin 
	sshPassword: (NSString *)sshPassword;

// method: SshTunnel
// m_cppType = bool
// arg:sshServerHostname - const char *
// arg:sshServerPort - int
- (BOOL)SshTunnel: (NSString *)sshServerHostname 
	sshServerPort: (NSNumber *)sshServerPort;

// method: StoreFlags
// m_cppType = bool
// arg:msgId - long
// arg:bUid - bool
// arg:flagName - const char *
// arg:value - long
- (BOOL)StoreFlags: (NSNumber *)msgId 
	bUid: (BOOL)bUid 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;

// method: Subscribe
// m_cppType = bool
// arg:mailbox - const char *
- (BOOL)Subscribe: (NSString *)mailbox;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: Unsubscribe
// m_cppType = bool
// arg:mailbox - const char *
- (BOOL)Unsubscribe: (NSString *)mailbox;


@end
