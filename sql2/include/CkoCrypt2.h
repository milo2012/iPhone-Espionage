// Chilkat Objective-C header.
// Generic/internal class name =  Crypt2
// Wrapped Chilkat C++ class name =  CkCrypt2

@class CkoCert;
@class CkoPrivateKey;


@interface CkoCrypt2 : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: BlockSize
// m_cppType = int
- (NSNumber *)BlockSize;

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

// property getter: CipherMode
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:newVal - const char *
- (NSString *)CipherMode;

// property setter: CipherMode
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:newVal - const char *
- (void)setCipherMode: (NSString *)input;

// property getter: CompressionAlgorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:alg - const char *
- (NSString *)CompressionAlgorithm;

// property setter: CompressionAlgorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:alg - const char *
- (void)setCompressionAlgorithm: (NSString *)input;

// property getter: CryptAlgorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (NSString *)CryptAlgorithm;

// property setter: CryptAlgorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (void)setCryptAlgorithm: (NSString *)input;

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

// property getter: FirstChunk
// m_cppType = bool
// arg:b - bool
- (BOOL)FirstChunk;

// property setter: FirstChunk
// m_cppType = bool
// arg:b - bool
- (void)setFirstChunk: (BOOL)boolVal;

// property getter: HashAlgorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (NSString *)HashAlgorithm;

// property setter: HashAlgorithm
// m_cppType = CkString &
// arg:outStr - CkString &
// arg:str - const char *
- (void)setHashAlgorithm: (NSString *)input;

// property getter: HavalRounds
// m_cppType = long
// arg:newVal - long
- (NSNumber *)HavalRounds;

// property setter: HavalRounds
// m_cppType = long
// arg:newVal - long
- (void)setHavalRounds: (NSNumber *)longVal;

// property getter: IV
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (NSData *)IV;

// property setter: IV
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (void)setIV: (NSData *)data;

// property getter: IV
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (NSMutableData *)IVMutable;

// property setter: IV
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (void)setIVMutable: (NSMutableData *)data;

// property getter: IncludeCertChain
// m_cppType = bool
// arg:newVal - bool
- (BOOL)IncludeCertChain;

// property setter: IncludeCertChain
// m_cppType = bool
// arg:newVal - bool
- (void)setIncludeCertChain: (BOOL)boolVal;

// property getter: IterationCount
// m_cppType = int
// arg:newVal - int
- (NSNumber *)IterationCount;

// property setter: IterationCount
// m_cppType = int
// arg:newVal - int
- (void)setIterationCount: (NSNumber *)intVal;

// property getter: KeyLength
// m_cppType = long
// arg:newVal - long
- (NSNumber *)KeyLength;

// property setter: KeyLength
// m_cppType = long
// arg:newVal - long
- (void)setKeyLength: (NSNumber *)longVal;

// property getter: LastChunk
// m_cppType = bool
// arg:b - bool
- (BOOL)LastChunk;

// property setter: LastChunk
// m_cppType = bool
// arg:b - bool
- (void)setLastChunk: (BOOL)boolVal;

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

// property getter: NumSignerCerts
// m_cppType = int
- (NSNumber *)NumSignerCerts;

// property getter: PaddingScheme
// m_cppType = long
// arg:newVal - long
- (NSNumber *)PaddingScheme;

// property setter: PaddingScheme
// m_cppType = long
// arg:newVal - long
- (void)setPaddingScheme: (NSNumber *)longVal;

// property getter: PbesAlgorithm
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)PbesAlgorithm;

// property setter: PbesAlgorithm
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setPbesAlgorithm: (NSString *)input;

// property getter: PbesPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)PbesPassword;

// property setter: PbesPassword
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setPbesPassword: (NSString *)input;

// property getter: Pkcs7CryptAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Pkcs7CryptAlg;

// property setter: Pkcs7CryptAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setPkcs7CryptAlg: (NSString *)input;

// property getter: Rc2EffectiveKeyLength
// m_cppType = long
// arg:newVal - long
- (NSNumber *)Rc2EffectiveKeyLength;

// property setter: Rc2EffectiveKeyLength
// m_cppType = long
// arg:newVal - long
- (void)setRc2EffectiveKeyLength: (NSNumber *)longVal;

// property getter: Salt
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (NSData *)Salt;

// property setter: Salt
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (void)setSalt: (NSData *)data;

// property getter: Salt
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)SaltMutable;

// property setter: Salt
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - CkByteData &
- (void)setSaltMutable: (NSMutableData *)data;

// property getter: SecretKey
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (NSData *)SecretKey;

// property setter: SecretKey
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (void)setSecretKey: (NSData *)data;

// property getter: SecretKey
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (NSMutableData *)SecretKeyMutable;

// property setter: SecretKey
// m_cppType = CkByteData &
// arg:bData - CkByteData &
// arg:bData - const CkByteData &
- (void)setSecretKeyMutable: (NSMutableData *)data;

// property getter: UuFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UuFilename;

// property setter: UuFilename
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUuFilename: (NSString *)input;

// property getter: UuMode
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)UuMode;

// property setter: UuMode
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setUuMode: (NSString *)input;

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
// arg:outStr - CkString &
- (NSString *)Version;

// method: AddEncryptCert
// m_cppType = void
// arg:cert - CkCert &
- (void)AddEncryptCert: (CkoCert *)cert;

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

// method: ByteSwap4321
// m_cppType = void
// arg:inOut - CkByteData &
- (void)ByteSwap4321: (NSData *)inOut;

// method: BytesToString
// m_cppType = bool
// arg:inData - CkByteData &
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)BytesToString: (NSData *)inData 
	charset: (NSString *)charset;

// method: CkDecryptFile
// m_cppType = bool
// arg:inFile - const char *
// arg:outFile - const char *
- (BOOL)CkDecryptFile: (NSString *)inFile 
	outFile: (NSString *)outFile;

// method: CkEncryptFile
// m_cppType = bool
// arg:inFile - const char *
// arg:outFile - const char *
- (BOOL)CkEncryptFile: (NSString *)inFile 
	outFile: (NSString *)outFile;

// method: ClearEncryptCerts
// m_cppType = void
- (void)ClearEncryptCerts;

// method: CompressBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)CompressBytes: (NSData *)bData;

// method: CompressBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)CompressBytesENC: (NSData *)bData;

// method: CompressString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)CompressString: (NSString *)str;

// method: CompressStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)CompressStringENC: (NSString *)str;

// method: CreateDetachedSignature
// m_cppType = bool
// arg:inFile - const char *
// arg:sigFile - const char *
- (BOOL)CreateDetachedSignature: (NSString *)inFile 
	sigFile: (NSString *)sigFile;

// method: CreateP7M
// m_cppType = bool
// arg:inFilename - const char *
// arg:p7mFilename - const char *
- (BOOL)CreateP7M: (NSString *)inFilename 
	p7mFilename: (NSString *)p7mFilename;

// method: CreateP7S
// m_cppType = bool
// arg:inFilename - const char *
// arg:p7sFilename - const char *
- (BOOL)CreateP7S: (NSString *)inFilename 
	p7sFilename: (NSString *)p7sFilename;

// method: Decode
// m_cppType = void
// arg:str - const char *
// arg:encoding - const char *
// arg:outData - CkByteData &
- (NSData *)Decode: (NSString *)str 
	encoding: (NSString *)encoding;

// method: DecodeString
// m_cppType = bool
// arg:inStr - const char *
// arg:charset - const char *
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)DecodeString: (NSString *)inStr 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;

// method: DecryptBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)DecryptBytes: (NSData *)bData;

// method: DecryptBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)DecryptBytesENC: (NSString *)str;

// method: DecryptEncoded
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)DecryptEncoded: (NSString *)str;

// method: DecryptString
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)DecryptString: (NSData *)bData;

// method: DecryptStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)DecryptStringENC: (NSString *)str;

// method: Encode
// m_cppType = void
// arg:bData - const CkByteData &
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)Encode: (NSData *)bData 
	encoding: (NSString *)encoding;

// method: EncodeString
// m_cppType = bool
// arg:inStr - const char *
// arg:charset - const char *
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)EncodeString: (NSString *)inStr 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;

// method: EncryptBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)EncryptBytes: (NSData *)bData;

// method: EncryptBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)EncryptBytesENC: (NSData *)bData;

// method: EncryptEncoded
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)EncryptEncoded: (NSString *)str;

// method: EncryptString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)EncryptString: (NSString *)str;

// method: EncryptStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)EncryptStringENC: (NSString *)str;

// method: GenEncodedSecretKey
// m_cppType = void
// arg:password - const char *
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)GenEncodedSecretKey: (NSString *)password 
	encoding: (NSString *)encoding;

// method: GenRandomBytesENC
// m_cppType = bool
// arg:numBytes - int
// arg:outStr - CkString &
- (NSString *)GenRandomBytesENC: (NSNumber *)numBytes;

// method: GenerateSecretKey
// m_cppType = void
// arg:password - const char *
// arg:outData - CkByteData &
- (NSData *)GenerateSecretKey: (NSString *)password;

// method: GetEncodedIV
// m_cppType = void
// arg:encoding - const char *
// arg:outIV - CkString &
- (NSString *)GetEncodedIV: (NSString *)encoding;

// method: GetEncodedKey
// m_cppType = void
// arg:encoding - const char *
// arg:outKey - CkString &
- (NSString *)GetEncodedKey: (NSString *)encoding;

// method: GetEncodedSalt
// m_cppType = void
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)GetEncodedSalt: (NSString *)encoding;

// method: GetLastCert
// m_cppType = CkCert *
- (CkoCert *)GetLastCert;

// method: GetSignerCert
// m_cppType = CkCert *
// arg:index - int
- (CkoCert *)GetSignerCert: (NSNumber *)index;

// method: HashBeginBytes
// m_cppType = bool
// arg:data - CkByteData &
- (BOOL)HashBeginBytes: (NSData *)data;

// method: HashBeginString
// m_cppType = bool
// arg:strData - const char *
- (BOOL)HashBeginString: (NSString *)strData;

// method: HashBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)HashBytes: (NSData *)bData;

// method: HashBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)HashBytesENC: (NSData *)bData;

// method: HashFile
// m_cppType = bool
// arg:filename - const char *
// arg:outData - CkByteData &
- (NSData *)HashFile: (NSString *)filename;

// method: HashFileENC
// m_cppType = bool
// arg:filename - const char *
// arg:outStr - CkString &
- (NSString *)HashFileENC: (NSString *)filename;

// method: HashFinal
// m_cppType = bool
// arg:outBytes - CkByteData &
- (NSData *)HashFinal;

// method: HashFinalENC
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)HashFinalENC;

// method: HashMoreBytes
// m_cppType = bool
// arg:data - CkByteData &
- (BOOL)HashMoreBytes: (NSData *)data;

// method: HashMoreString
// m_cppType = bool
// arg:strData - const char *
- (BOOL)HashMoreString: (NSString *)strData;

// method: HashString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)HashString: (NSString *)str;

// method: HashStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)HashStringENC: (NSString *)str;

// method: HmacBytes
// m_cppType = void
// arg:inBytes - const CkByteData &
// arg:outHmac - CkByteData &
- (NSData *)HmacBytes: (NSData *)inBytes;

// method: HmacBytesENC
// m_cppType = void
// arg:inBytes - const CkByteData &
// arg:outEncodedHmac - CkString &
- (NSString *)HmacBytesENC: (NSData *)inBytes;

// method: HmacString
// m_cppType = void
// arg:inText - const char *
// arg:outHmac - CkByteData &
- (NSData *)HmacString: (NSString *)inText;

// method: HmacStringENC
// m_cppType = void
// arg:inText - const char *
// arg:outEncodedHmac - CkString &
- (NSString *)HmacStringENC: (NSString *)inText;

// method: InflateBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)InflateBytes: (NSData *)bData;

// method: InflateBytesENC
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)InflateBytesENC: (NSString *)str;

// method: InflateString
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)InflateString: (NSData *)bData;

// method: InflateStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)InflateStringENC: (NSString *)str;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: MySqlAesDecrypt
// m_cppType = bool
// arg:strEncrypted - const char *
// arg:strKey - const char *
// arg:outStr - CkString &
- (NSString *)MySqlAesDecrypt: (NSString *)strEncrypted 
	strKey: (NSString *)strKey;

// method: MySqlAesEncrypt
// m_cppType = bool
// arg:strData - const char *
// arg:strKey - const char *
// arg:outStr - CkString &
- (NSString *)MySqlAesEncrypt: (NSString *)strData 
	strKey: (NSString *)strKey;

// method: OpaqueSignBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)OpaqueSignBytes: (NSData *)bData;

// method: OpaqueSignBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)OpaqueSignBytesENC: (NSData *)bData;

// method: OpaqueSignString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)OpaqueSignString: (NSString *)str;

// method: OpaqueSignStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)OpaqueSignStringENC: (NSString *)str;

// method: OpaqueVerifyBytes
// m_cppType = bool
// arg:p7s - const CkByteData &
// arg:outOriginal - CkByteData &
- (NSData *)OpaqueVerifyBytes: (NSData *)p7s;

// method: OpaqueVerifyBytesENC
// m_cppType = bool
// arg:p7s - const char *
// arg:outOriginal - CkByteData &
- (NSData *)OpaqueVerifyBytesENC: (NSString *)p7s;

// method: OpaqueVerifyString
// m_cppType = bool
// arg:p7s - const CkByteData &
// arg:outOriginal - CkString &
- (NSString *)OpaqueVerifyString: (NSData *)p7s;

// method: OpaqueVerifyStringENC
// m_cppType = bool
// arg:p7s - const char *
// arg:outOriginal - CkString &
- (NSString *)OpaqueVerifyStringENC: (NSString *)p7s;

// method: Pbkdf1
// m_cppType = bool
// arg:password - const char *
// arg:charset - const char *
// arg:hashAlg - const char *
// arg:salt - const char *
// arg:iterationCount - int
// arg:outputKeyBitLen - int
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)Pbkdf1: (NSString *)password 
	charset: (NSString *)charset 
	hashAlg: (NSString *)hashAlg 
	salt: (NSString *)salt 
	iterationCount: (NSNumber *)iterationCount 
	outputKeyBitLen: (NSNumber *)outputKeyBitLen 
	encoding: (NSString *)encoding;

// method: Pbkdf2
// m_cppType = bool
// arg:password - const char *
// arg:charset - const char *
// arg:hashAlg - const char *
// arg:salt - const char *
// arg:iterationCount - int
// arg:outputKeyBitLen - int
// arg:encoding - const char *
// arg:outStr - CkString &
- (NSString *)Pbkdf2: (NSString *)password 
	charset: (NSString *)charset 
	hashAlg: (NSString *)hashAlg 
	salt: (NSString *)salt 
	iterationCount: (NSNumber *)iterationCount 
	outputKeyBitLen: (NSNumber *)outputKeyBitLen 
	encoding: (NSString *)encoding;

// method: RandomizeIV
// m_cppType = void
- (void)RandomizeIV;

// method: RandomizeKey
// m_cppType = void
- (void)RandomizeKey;

// method: ReEncode
// m_cppType = bool
// arg:data - const char *
// arg:fromEncoding - const char *
// arg:toEncoding - const char *
// arg:outStr - CkString &
- (NSString *)ReEncode: (NSString *)data 
	fromEncoding: (NSString *)fromEncoding 
	toEncoding: (NSString *)toEncoding;

// method: ReadFile
// m_cppType = bool
// arg:filename - const char *
// arg:outBytes - CkByteData &
- (NSData *)ReadFile: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetDecryptCert
// m_cppType = bool
// arg:cert - CkCert &
- (BOOL)SetDecryptCert: (CkoCert *)cert;

// method: SetDecryptCert2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:key - CkPrivateKey &
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;

// method: SetEncodedIV
// m_cppType = void
// arg:ivStr - const char *
// arg:encoding - const char *
- (void)SetEncodedIV: (NSString *)ivStr 
	encoding: (NSString *)encoding;

// method: SetEncodedKey
// m_cppType = void
// arg:keyStr - const char *
// arg:encoding - const char *
- (void)SetEncodedKey: (NSString *)keyStr 
	encoding: (NSString *)encoding;

// method: SetEncodedSalt
// m_cppType = void
// arg:saltStr - const char *
// arg:encoding - const char *
- (void)SetEncodedSalt: (NSString *)saltStr 
	encoding: (NSString *)encoding;

// method: SetEncryptCert
// m_cppType = void
// arg:cert - const CkCert &
- (void)SetEncryptCert: (CkoCert *)cert;

// method: SetHmacKeyBytes
// m_cppType = void
// arg:keyBytes - const CkByteData &
- (void)SetHmacKeyBytes: (NSData *)keyBytes;

// method: SetHmacKeyEncoded
// m_cppType = void
// arg:key - const char *
// arg:encoding - const char *
- (void)SetHmacKeyEncoded: (NSString *)key 
	encoding: (NSString *)encoding;

// method: SetHmacKeyString
// m_cppType = void
// arg:key - const char *
- (void)SetHmacKeyString: (NSString *)key;

// method: SetSecretKeyViaPassword
// m_cppType = void
// arg:password - const char *
- (void)SetSecretKeyViaPassword: (NSString *)password;

// method: SetSigningCert
// m_cppType = bool
// arg:cert - const CkCert &
- (BOOL)SetSigningCert: (CkoCert *)cert;

// method: SetSigningCert2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:key - CkPrivateKey &
- (BOOL)SetSigningCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;

// method: SetVerifyCert
// m_cppType = void
// arg:cert - const CkCert &
- (void)SetVerifyCert: (CkoCert *)cert;

// method: SignBytes
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outData - CkByteData &
- (NSData *)SignBytes: (NSData *)bData;

// method: SignBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:outStr - CkString &
- (NSString *)SignBytesENC: (NSData *)bData;

// method: SignString
// m_cppType = bool
// arg:str - const char *
// arg:outData - CkByteData &
- (NSData *)SignString: (NSString *)str;

// method: SignStringENC
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)SignStringENC: (NSString *)str;

// method: StringToBytes
// m_cppType = bool
// arg:inStr - const char *
// arg:charset - const char *
// arg:outBytes - CkByteData &
- (NSData *)StringToBytes: (NSString *)inStr 
	charset: (NSString *)charset;

// method: TrimEndingWith
// m_cppType = void
// arg:inStr - const char *
// arg:ending - const char *
// arg:outStr - CkString &
- (NSString *)TrimEndingWith: (NSString *)inStr 
	ending: (NSString *)ending;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: VerifyBytes
// m_cppType = bool
// arg:bData1 - const CkByteData &
// arg:sigData - const CkByteData &
- (BOOL)VerifyBytes: (NSData *)bData1 
	sigData: (NSData *)sigData;

// method: VerifyBytesENC
// m_cppType = bool
// arg:bData - const CkByteData &
// arg:encodedSig - const char *
- (BOOL)VerifyBytesENC: (NSData *)bData 
	encodedSig: (NSString *)encodedSig;

// method: VerifyDetachedSignature
// m_cppType = bool
// arg:inFile - const char *
// arg:sigFile - const char *
- (BOOL)VerifyDetachedSignature: (NSString *)inFile 
	sigFile: (NSString *)sigFile;

// method: VerifyP7M
// m_cppType = bool
// arg:p7mFilename - const char *
// arg:outFilename - const char *
- (BOOL)VerifyP7M: (NSString *)p7mFilename 
	outFilename: (NSString *)outFilename;

// method: VerifyP7S
// m_cppType = bool
// arg:inFilename - const char *
// arg:p7sFilename - const char *
- (BOOL)VerifyP7S: (NSString *)inFilename 
	p7sFilename: (NSString *)p7sFilename;

// method: VerifyString
// m_cppType = bool
// arg:str - const char *
// arg:sigData - const CkByteData &
- (BOOL)VerifyString: (NSString *)str 
	sigData: (NSData *)sigData;

// method: VerifyStringENC
// m_cppType = bool
// arg:str - const char *
// arg:encodedSig - const char *
- (BOOL)VerifyStringENC: (NSString *)str 
	encodedSig: (NSString *)encodedSig;

// method: WriteFile
// m_cppType = bool
// arg:filename - const char *
// arg:fileData - CkByteData &
- (BOOL)WriteFile: (NSString *)filename 
	fileData: (NSData *)fileData;


@end
