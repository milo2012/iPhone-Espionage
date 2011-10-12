// Chilkat Objective-C header.
// Generic/internal class name =  Ntlm
// Wrapped Chilkat C++ class name =  CkNtlm



@interface CkoNtlm : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: ClientChallenge
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ClientChallenge;

// property setter: ClientChallenge
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setClientChallenge: (NSString *)input;

// property getter: DnsComputerName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DnsComputerName;

// property setter: DnsComputerName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDnsComputerName: (NSString *)input;

// property getter: DnsDomainName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DnsDomainName;

// property setter: DnsDomainName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDnsDomainName: (NSString *)input;

// property getter: Domain
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Domain;

// property setter: Domain
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDomain: (NSString *)input;

// property getter: EncodingMode
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)EncodingMode;

// property setter: EncodingMode
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setEncodingMode: (NSString *)input;

// property getter: Flags
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Flags;

// property setter: Flags
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setFlags: (NSString *)input;

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

// property getter: NetBiosComputerName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)NetBiosComputerName;

// property setter: NetBiosComputerName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setNetBiosComputerName: (NSString *)input;

// property getter: NetBiosDomainName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)NetBiosDomainName;

// property setter: NetBiosDomainName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setNetBiosDomainName: (NSString *)input;

// property getter: NtlmVersion
// m_cppType = int
// arg:newVal - int
- (NSNumber *)NtlmVersion;

// property setter: NtlmVersion
// m_cppType = int
// arg:newVal - int
- (void)setNtlmVersion: (NSNumber *)intVal;

// property getter: OemCodePage
// m_cppType = int
// arg:newVal - int
- (NSNumber *)OemCodePage;

// property setter: OemCodePage
// m_cppType = int
// arg:newVal - int
- (void)setOemCodePage: (NSNumber *)intVal;

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

// property getter: ServerChallenge
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ServerChallenge;

// property setter: ServerChallenge
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setServerChallenge: (NSString *)input;

// property getter: TargetName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)TargetName;

// property setter: TargetName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setTargetName: (NSString *)input;

// property getter: UserName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UserName;

// property setter: UserName
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUserName: (NSString *)input;

// property getter: Workstation
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Workstation;

// property setter: Workstation
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setWorkstation: (NSString *)input;

// method: GenType1
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GenType1;

// method: GenType2
// m_cppType = bool
// arg:type1Msg - const char *
// arg:outStr - CkString &
- (NSString *)GenType2: (NSString *)type1Msg;

// method: GenType3
// m_cppType = bool
// arg:type2Msg - const char *
// arg:outStr - CkString &
- (NSString *)GenType3: (NSString *)type2Msg;

// method: LoadType3
// m_cppType = bool
// arg:type3Msg - const char *
- (BOOL)LoadType3: (NSString *)type3Msg;

// method: ParseType1
// m_cppType = bool
// arg:type1Msg - const char *
// arg:outStr - CkString &
- (NSString *)ParseType1: (NSString *)type1Msg;

// method: ParseType2
// m_cppType = bool
// arg:type2Msg - const char *
// arg:outStr - CkString &
- (NSString *)ParseType2: (NSString *)type2Msg;

// method: ParseType3
// m_cppType = bool
// arg:type3Msg - const char *
// arg:outStr - CkString &
- (NSString *)ParseType3: (NSString *)type3Msg;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetFlag
// m_cppType = bool
// arg:flagLetter - const char *
// arg:on - bool
- (BOOL)SetFlag: (NSString *)flagLetter 
	on: (BOOL)on;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;


@end
