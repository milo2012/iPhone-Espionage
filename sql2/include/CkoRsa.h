// Chilkat Objective-C header.
// Generic/internal class name =  Rsa
// Wrapped Chilkat C++ class name =  CkRsa



@interface CkoRsa : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Charset
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (NSString *)Charset;

// property setter: Charset
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (void)setCharset: (NSString *)input;

// property getter: EncodingMode
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (NSString *)EncodingMode;

// property setter: EncodingMode
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (void)setEncodingMode: (NSString *)input;

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

// property getter: LittleEndian
// m_cppType = bool
// arg:newVal - bool
- (BOOL)LittleEndian;

// property setter: LittleEndian
// m_cppType = bool
// arg:newVal - bool
- (void)setLittleEndian: (BOOL)boolVal;

// property getter: NoUnpad
// m_cppType = bool
// arg:newVal - bool
- (BOOL)NoUnpad;

// property setter: NoUnpad
// m_cppType = bool
// arg:newVal - bool
- (void)setNoUnpad: (BOOL)boolVal;

// property getter: NumBits
// m_cppType = long
- (NSNumber *)NumBits;

// property getter: OaepPadding
// m_cppType = bool
// arg:newVal - bool
- (BOOL)OaepPadding;

// property setter: OaepPadding
// m_cppType = bool
// arg:newVal - bool
- (void)setOaepPadding: (BOOL)boolVal;

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

// method: DecryptBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:bUsePrivateKey - bool
// arg:outData - CkByteData &
- (NSData *)DecryptBytes: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: DecryptBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:bUsePrivateKey - bool
// arg:outData - CkByteData &
- (NSData *)DecryptBytesENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: DecryptString
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:bUsePrivateKey - bool
// arg:outStr - CkString &
- (NSString *)DecryptString: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: DecryptStringENC
// m_cppType = bool
// arg:str - const char *
// arg:bUsePrivateKey - bool
// arg:outStr - CkString &
- (NSString *)DecryptStringENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: EncryptBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:bUsePrivateKey - bool
// arg:outData - CkByteData &
- (NSData *)EncryptBytes: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: EncryptBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:bUsePrivateKey - bool
// arg:outStr - CkString &
- (NSString *)EncryptBytesENC: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: EncryptString
// m_cppType = bool
// arg:str - const char *
// arg:bUsePrivateKey - bool
// arg:outData - CkByteData &
- (NSData *)EncryptString: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: EncryptStringENC
// m_cppType = bool
// arg:str - const char *
// arg:bUsePrivateKey - bool
// arg:outStr - CkString &
- (NSString *)EncryptStringENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;

// method: ExportPrivateKey
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ExportPrivateKey;

// method: ExportPublicKey
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ExportPublicKey;

// method: GenerateKey
// m_cppType = bool
// arg:numBits - int
- (BOOL)GenerateKey: (NSNumber *)numBits;

// method: ImportPrivateKey
// m_cppType = bool
// arg:strXml - const char *
- (BOOL)ImportPrivateKey: (NSString *)strXml;

// method: ImportPublicKey
// m_cppType = bool
// arg:strXml - const char *
- (BOOL)ImportPublicKey: (NSString *)strXml;

// method: OpenSslSignBytes
// m_cppType = bool
// arg:data - CkByteData &
// arg:outBytes - CkByteData &
- (NSData *)OpenSslSignBytes: (NSData *)data;

// method: OpenSslSignBytesENC
// m_cppType = bool
// arg:data - CkByteData &
// arg:outStr - CkString &
- (NSString *)OpenSslSignBytesENC: (NSData *)data;

// method: OpenSslSignString
// m_cppType = bool
// arg:str - const char *
// arg:outBytes - CkByteData &
- (NSData *)OpenSslSignString: (NSString *)str;

// method: OpenSslSignStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)OpenSslSignStringENC: (NSString *)str;

// method: OpenSslVerifyBytes
// m_cppType = bool
// arg:signature - CkByteData &
// arg:outBytes - CkByteData &
- (NSData *)OpenSslVerifyBytes: (NSData *)signature;

// method: OpenSslVerifyBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:outBytes - CkByteData &
- (NSData *)OpenSslVerifyBytesENC: (NSString *)str;

// method: OpenSslVerifyString
// m_cppType = bool
// arg:data - CkByteData &
// arg:outStr - CkString &
- (NSString *)OpenSslVerifyString: (NSData *)data;

// method: OpenSslVerifyStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)OpenSslVerifyStringENC: (NSString *)str;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SignBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:hashAlg - const char *
// arg:outData - CkByteData &
- (NSData *)SignBytes: (NSData *)bData 
	hashAlg: (NSString *)hashAlg;

// method: SignBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:hashAlg - const char *
// arg:outStr - CkString &
- (NSString *)SignBytesENC: (NSData *)bData 
	hashAlg: (NSString *)hashAlg;

// method: SignHash
// m_cppType = bool
// arg:hashBytes - CkByteData &
// arg:hashAlg - const char *
// arg:outBytes - CkByteData &
- (NSData *)SignHash: (NSData *)hashBytes 
	hashAlg: (NSString *)hashAlg;

// method: SignHashENC
// m_cppType = bool
// arg:encodedHash - const char *
// arg:hashAlg - const char *
// arg:outStr - CkString &
- (NSString *)SignHashENC: (NSString *)encodedHash 
	hashAlg: (NSString *)hashAlg;

// method: SignString
// m_cppType = bool
// arg:str - const char *
// arg:hashAlg - const char *
// arg:outData - CkByteData &
- (NSData *)SignString: (NSString *)str 
	hashAlg: (NSString *)hashAlg;

// method: SignStringENC
// m_cppType = bool
// arg:str - const char *
// arg:hashAlg - const char *
// arg:outStr - CkString &
- (NSString *)SignStringENC: (NSString *)str 
	hashAlg: (NSString *)hashAlg;

// method: SnkToXml
// m_cppType = bool
// arg:filename - const char *
// arg:outStr - CkString &
- (NSString *)SnkToXml: (NSString *)filename;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: VerifyBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:hashAlg - const char *
// arg:sigData - const CkByteData &
- (BOOL)VerifyBytes: (NSData *)bData 
	hashAlg: (NSString *)hashAlg 
	sigData: (NSData *)sigData;

// method: VerifyBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:hashAlg - const char *
// arg:encodedSig - const char *
- (BOOL)VerifyBytesENC: (NSData *)bData 
	hashAlg: (NSString *)hashAlg 
	encodedSig: (NSString *)encodedSig;

// method: VerifyHash
// m_cppType = bool
// arg:hashBytes - CkByteData &
// arg:hashAlg - const char *
// arg:sigBytes - CkByteData &
- (BOOL)VerifyHash: (NSData *)hashBytes 
	hashAlg: (NSString *)hashAlg 
	sigBytes: (NSData *)sigBytes;

// method: VerifyHashENC
// m_cppType = bool
// arg:encodedHash - const char *
// arg:hashAlg - const char *
// arg:encodedSig - const char *
- (BOOL)VerifyHashENC: (NSString *)encodedHash 
	hashAlg: (NSString *)hashAlg 
	encodedSig: (NSString *)encodedSig;

// method: VerifyPrivateKey
// m_cppType = bool
// arg:xml - const char *
- (BOOL)VerifyPrivateKey: (NSString *)xml;

// method: VerifyString
// m_cppType = bool
// arg:str - const char *
// arg:hashAlg - const char *
// arg:sigData - const CkByteData &
- (BOOL)VerifyString: (NSString *)str 
	hashAlg: (NSString *)hashAlg 
	sigData: (NSData *)sigData;

// method: VerifyStringENC
// m_cppType = bool
// arg:str - const char *
// arg:hashAlg - const char *
// arg:sig - const char *
- (BOOL)VerifyStringENC: (NSString *)str 
	hashAlg: (NSString *)hashAlg 
	sig: (NSString *)sig;


@end
