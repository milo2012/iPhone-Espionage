// Chilkat Objective-C header.
// Generic/internal class name =  SshKey
// Wrapped Chilkat C++ class name =  CkSshKey



@interface CkoSshKey : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Comment
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Comment;

// property setter: Comment
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setComment: (NSString *)input;

// property getter: IsDsaKey
// m_cppType = bool
- (BOOL)IsDsaKey;

// property getter: IsPrivateKey
// m_cppType = bool
- (BOOL)IsPrivateKey;

// property getter: IsRsaKey
// m_cppType = bool
- (BOOL)IsRsaKey;

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

// method: FromOpenSshPrivateKey
// m_cppType = bool
// arg:keyStr - const char *
- (BOOL)FromOpenSshPrivateKey: (NSString *)keyStr;

// method: FromOpenSshPublicKey
// m_cppType = bool
// arg:keyStr - const char *
- (BOOL)FromOpenSshPublicKey: (NSString *)keyStr;

// method: FromPuttyPrivateKey
// m_cppType = bool
// arg:keyStr - const char *
- (BOOL)FromPuttyPrivateKey: (NSString *)keyStr;

// method: FromRfc4716PublicKey
// m_cppType = bool
// arg:keyStr - const char *
- (BOOL)FromRfc4716PublicKey: (NSString *)keyStr;

// method: FromXml
// m_cppType = bool
// arg:xmlKey - const char *
- (BOOL)FromXml: (NSString *)xmlKey;

// method: GenFingerprint
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GenFingerprint;

// method: GenerateDsaKey
// m_cppType = bool
// arg:numBits - int
- (BOOL)GenerateDsaKey: (NSNumber *)numBits;

// method: GenerateRsaKey
// m_cppType = bool
// arg:numBits - int
// arg:exponent - int
- (BOOL)GenerateRsaKey: (NSNumber *)numBits 
	exponent: (NSNumber *)exponent;

// method: LoadText
// m_cppType = bool
// arg:filename - const char *
// arg:outStr - CkString &
- (NSString *)LoadText: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveText
// m_cppType = bool
// arg:strToSave - const char *
// arg:filename - const char *
- (BOOL)SaveText: (NSString *)strToSave 
	filename: (NSString *)filename;

// method: ToOpenSshPrivateKey
// m_cppType = bool
// arg:bEncrypt - bool
// arg:outStr - CkString &
- (NSString *)ToOpenSshPrivateKey: (BOOL)bEncrypt;

// method: ToOpenSshPublicKey
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToOpenSshPublicKey;

// method: ToPuttyPrivateKey
// m_cppType = bool
// arg:bEncrypt - bool
// arg:outStr - CkString &
- (NSString *)ToPuttyPrivateKey: (BOOL)bEncrypt;

// method: ToRfc4716PublicKey
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToRfc4716PublicKey;

// method: ToXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToXml;


@end
