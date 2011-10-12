// Chilkat Objective-C header.
// Generic/internal class name =  Dsa
// Wrapped Chilkat C++ class name =  CkDsa



@interface CkoDsa : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: GroupSize
// m_cppType = int
// arg:newVal - int
- (NSNumber *)GroupSize;

// property setter: GroupSize
// m_cppType = int
// arg:newVal - int
- (void)setGroupSize: (NSNumber *)intVal;

// property getter: Hash
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (NSData *)Hash;

// property setter: Hash
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (void)setHash: (NSData *)data;

// property getter: Hash
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)HashMutable;

// property setter: Hash
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (void)setHashMutable: (NSMutableData *)data;

// property getter: HexG
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)HexG;

// property getter: HexP
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)HexP;

// property getter: HexQ
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)HexQ;

// property getter: HexX
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)HexX;

// property getter: HexY
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)HexY;

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

// property getter: Signature
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (NSData *)Signature;

// property setter: Signature
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (void)setSignature: (NSData *)data;

// property getter: Signature
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)SignatureMutable;

// property setter: Signature
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (void)setSignatureMutable: (NSMutableData *)data;

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: FromDer
// m_cppType = bool
// arg:derData - CkByteData &
- (BOOL)FromDer: (NSData *)derData;

// method: FromDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)FromDerFile: (NSString *)filename;

// method: FromEncryptedPem
// m_cppType = bool
// arg:password - const char *
// arg:pemData - const char *
- (BOOL)FromEncryptedPem: (NSString *)password 
	pemData: (NSString *)pemData;

// method: FromPem
// m_cppType = bool
// arg:pemData - const char *
- (BOOL)FromPem: (NSString *)pemData;

// method: FromPublicDer
// m_cppType = bool
// arg:derData - CkByteData &
- (BOOL)FromPublicDer: (NSData *)derData;

// method: FromPublicDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)FromPublicDerFile: (NSString *)filename;

// method: FromPublicPem
// m_cppType = bool
// arg:pemData - const char *
- (BOOL)FromPublicPem: (NSString *)pemData;

// method: FromXml
// m_cppType = bool
// arg:xmlKey - const char *
- (BOOL)FromXml: (NSString *)xmlKey;

// method: GenKey
// m_cppType = bool
// arg:numBits - int
- (BOOL)GenKey: (NSNumber *)numBits;

// method: GenKeyFromParamsDer
// m_cppType = bool
// arg:derBytes - CkByteData &
- (BOOL)GenKeyFromParamsDer: (NSData *)derBytes;

// method: GenKeyFromParamsDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)GenKeyFromParamsDerFile: (NSString *)filename;

// method: GenKeyFromParamsPem
// m_cppType = bool
// arg:pem - const char *
- (BOOL)GenKeyFromParamsPem: (NSString *)pem;

// method: GenKeyFromParamsPemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)GenKeyFromParamsPemFile: (NSString *)filename;

// method: GetEncodedHash
// m_cppType = bool
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)GetEncodedHash: (NSString *)encoding;

// method: GetEncodedSignature
// m_cppType = bool
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)GetEncodedSignature: (NSString *)encoding;

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

// method: SetEncodedHash
// m_cppType = bool
// arg:encoding - const char *
// arg:encodedHash - const char *
- (BOOL)SetEncodedHash: (NSString *)encoding 
	encodedHash: (NSString *)encodedHash;

// method: SetEncodedSignature
// m_cppType = bool
// arg:encoding - const char *
// arg:encodedSig - const char *
- (BOOL)SetEncodedSignature: (NSString *)encoding 
	encodedSig: (NSString *)encodedSig;

// method: SetKeyExplicit
// m_cppType = bool
// arg:groupSizeInBytes - int
// arg:pHex - const char *
// arg:qHex - const char *
// arg:gHex - const char *
// arg:xHex - const char *
- (BOOL)SetKeyExplicit: (NSNumber *)groupSizeInBytes 
	pHex: (NSString *)pHex 
	qHex: (NSString *)qHex 
	gHex: (NSString *)gHex 
	xHex: (NSString *)xHex;

// method: SetPubKeyExplicit
// m_cppType = bool
// arg:groupSizeInBytes - int
// arg:pHex - const char *
// arg:qHex - const char *
// arg:gHex - const char *
// arg:yHex - const char *
- (BOOL)SetPubKeyExplicit: (NSNumber *)groupSizeInBytes 
	pHex: (NSString *)pHex 
	qHex: (NSString *)qHex 
	gHex: (NSString *)gHex 
	yHex: (NSString *)yHex;

// method: SignHash
// m_cppType = bool
- (BOOL)SignHash;

// method: ToDer
// m_cppType = bool
// arg:outBytes - CkByteData &
- (NSData *)ToDer;

// method: ToDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)ToDerFile: (NSString *)filename;

// method: ToEncryptedPem
// m_cppType = bool
// arg:password - const char *
// arg:outStr - CkString &
- (NSString *)ToEncryptedPem: (NSString *)password;

// method: ToPem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToPem;

// method: ToPublicDer
// m_cppType = bool
// arg:outBytes - CkByteData &
- (NSData *)ToPublicDer;

// method: ToPublicDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)ToPublicDerFile: (NSString *)filename;

// method: ToPublicPem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToPublicPem;

// method: ToXml
// m_cppType = bool
// arg:bPublicOnly - bool
// arg:outStr - CkString &
- (NSString *)ToXml: (BOOL)bPublicOnly;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: Verify
// m_cppType = bool
- (BOOL)Verify;

// method: VerifyKey
// m_cppType = bool
- (BOOL)VerifyKey;


@end
