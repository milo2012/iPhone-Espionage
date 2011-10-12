// Chilkat Objective-C header.
// Generic/internal class name =  Mime
// Wrapped Chilkat C++ class name =  CkMime

@class CkoCert;
@class CkoPrivateKey;
@class CkoStringArray;
@class CkoEmail;


@interface CkoMime : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Boundary
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Boundary;

// property setter: Boundary
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setBoundary: (NSString *)input;

// property getter: Charset
// m_cppType = CkString &
// arg:sb - CkString &
// arg:newVal - const char *
- (NSString *)Charset;

// property setter: Charset
// m_cppType = CkString &
// arg:sb - CkString &
// arg:newVal - const char *
- (void)setCharset: (NSString *)input;

// property getter: ContentType
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)ContentType;

// property setter: ContentType
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setContentType: (NSString *)input;

// property getter: CurrentDateTime
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)CurrentDateTime;

// property getter: Disposition
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Disposition;

// property setter: Disposition
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDisposition: (NSString *)input;

// property getter: Encoding
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Encoding;

// property setter: Encoding
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setEncoding: (NSString *)input;

// property getter: Filename
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Filename;

// property setter: Filename
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setFilename: (NSString *)input;

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

// property getter: Micalg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Micalg;

// property setter: Micalg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setMicalg: (NSString *)input;

// property getter: Name
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Name;

// property setter: Name
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setName: (NSString *)input;

// property getter: NumEncryptCerts
// m_cppType = long
- (NSNumber *)NumEncryptCerts;

// property getter: NumHeaderFields
// m_cppType = long
- (NSNumber *)NumHeaderFields;

// property getter: NumParts
// m_cppType = long
- (NSNumber *)NumParts;

// property getter: NumSignerCerts
// m_cppType = long
- (NSNumber *)NumSignerCerts;

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

// property getter: Pkcs7KeyLength
// m_cppType = int
// arg:numBits - int
- (NSNumber *)Pkcs7KeyLength;

// property setter: Pkcs7KeyLength
// m_cppType = int
// arg:numBits - int
- (void)setPkcs7KeyLength: (NSNumber *)intVal;

// property getter: Protocol
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Protocol;

// property setter: Protocol
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setProtocol: (NSString *)input;

// property getter: SigningHashAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SigningHashAlg;

// property setter: SigningHashAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSigningHashAlg: (NSString *)input;

// property getter: UnwrapExtras
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UnwrapExtras;

// property setter: UnwrapExtras
// m_cppType = bool
// arg:newVal - bool
- (void)setUnwrapExtras: (BOOL)boolVal;

// property getter: UseMmDescription
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UseMmDescription;

// property setter: UseMmDescription
// m_cppType = bool
// arg:newVal - bool
- (void)setUseMmDescription: (BOOL)boolVal;

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

// method: AddContentLength
// m_cppType = void
- (void)AddContentLength;

// method: AddDetachedSignature
// m_cppType = bool
// arg:cert - const CkCert &
- (BOOL)AddDetachedSignature: (CkoCert *)cert;

// method: AddDetachedSignature2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:transferHeaderFields - bool
- (BOOL)AddDetachedSignature2: (CkoCert *)cert 
	transferHeaderFields: (BOOL)transferHeaderFields;

// method: AddDetachedSignaturePk
// m_cppType = bool
// arg:cert - const CkCert &
// arg:privateKey - const CkPrivateKey &
- (BOOL)AddDetachedSignaturePk: (CkoCert *)cert 
	privateKey: (CkoPrivateKey *)privateKey;

// method: AddDetachedSignaturePk2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:privateKey - const CkPrivateKey &
// arg:transferHeaderFields - bool
- (BOOL)AddDetachedSignaturePk2: (CkoCert *)cert 
	privateKey: (CkoPrivateKey *)privateKey 
	transferHeaderFields: (BOOL)transferHeaderFields;

// method: AddEncryptCert
// m_cppType = bool
// arg:cert - CkCert &
- (BOOL)AddEncryptCert: (CkoCert *)cert;

// method: AddHeaderField
// m_cppType = bool
// arg:name - const char *
// arg:value - const char *
- (BOOL)AddHeaderField: (NSString *)name 
	value: (NSString *)value;

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

// method: AppendPart
// m_cppType = bool
// arg:mime - const CkMime &
- (BOOL)AppendPart: (CkoMime *)mime;

// method: AppendPartFromFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)AppendPartFromFile: (NSString *)filename;

// method: AsnBodyToXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)AsnBodyToXml;

// method: ClearEncryptCerts
// m_cppType = void
- (void)ClearEncryptCerts;

// method: ContainsEncryptedParts
// m_cppType = bool
- (BOOL)ContainsEncryptedParts;

// method: ContainsSignedParts
// m_cppType = bool
- (BOOL)ContainsSignedParts;

// method: Convert8Bit
// m_cppType = void
- (void)Convert8Bit;

// method: ConvertToMultipartAlt
// m_cppType = void
- (void)ConvertToMultipartAlt;

// method: ConvertToMultipartMixed
// m_cppType = void
- (void)ConvertToMultipartMixed;

// method: ConvertToSigned
// m_cppType = bool
// arg:cert - const CkCert &
- (BOOL)ConvertToSigned: (CkoCert *)cert;

// method: ConvertToSignedPk
// m_cppType = bool
// arg:cert - const CkCert &
// arg:privateKey - const CkPrivateKey &
- (BOOL)ConvertToSignedPk: (CkoCert *)cert 
	privateKey: (CkoPrivateKey *)privateKey;

// method: Decrypt
// m_cppType = bool
- (BOOL)Decrypt;

// method: Decrypt2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:privateKey - const CkPrivateKey &
- (BOOL)Decrypt2: (CkoCert *)cert 
	privateKey: (CkoPrivateKey *)privateKey;

// method: DecryptUsingPfxData
// m_cppType = bool
// arg:pfxData - CkByteData &
// arg:password - const char *
- (BOOL)DecryptUsingPfxData: (NSData *)pfxData 
	password: (NSString *)password;

// method: DecryptUsingPfxFile
// m_cppType = bool
// arg:pfxFilePath - const char *
// arg:password - const char *
- (BOOL)DecryptUsingPfxFile: (NSString *)pfxFilePath 
	password: (NSString *)password;

// method: Encrypt
// m_cppType = bool
// arg:cert - const CkCert &
- (BOOL)Encrypt: (CkoCert *)cert;

// method: EncryptN
// m_cppType = bool
- (BOOL)EncryptN;

// method: ExtractPartsToFiles
// m_cppType = CkStringArray *
// arg:dirPath - const char *
- (CkoStringArray *)ExtractPartsToFiles: (NSString *)dirPath;

// method: GetBodyBinary
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)GetBodyBinary;

// method: GetBodyDecoded
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetBodyDecoded;

// method: GetBodyEncoded
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetBodyEncoded;

// method: GetEncryptCert
// m_cppType = CkCert *
// arg:index - long
- (CkoCert *)GetEncryptCert: (NSNumber *)index;

// method: GetEntireBody
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)GetEntireBody;

// method: GetEntireHead
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)GetEntireHead;

// method: GetHeaderField
// m_cppType = bool
// arg:name - const char *
// arg:outStr - CkString &
- (NSString *)GetHeaderField: (NSString *)name;

// method: GetHeaderFieldAttribute
// m_cppType = bool
// arg:name - const char *
// arg:attrName - const char *
// arg:outStr - CkString &
- (NSString *)GetHeaderFieldAttribute: (NSString *)name 
	attrName: (NSString *)attrName;

// method: GetHeaderFieldName
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetHeaderFieldName: (NSNumber *)index;

// method: GetHeaderFieldValue
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetHeaderFieldValue: (NSNumber *)index;

// method: GetMime
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetMime;

// method: GetMimeBytes
// m_cppType = bool
// arg:outBytes - CkByteData &
- (NSData *)GetMimeBytes;

// method: GetPart
// m_cppType = CkMime *
// arg:index - long
- (CkoMime *)GetPart: (NSNumber *)index;

// method: GetSignatureSigningTime
// m_cppType = bool
// arg:index - int
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetSignatureSigningTime: (NSNumber *)index;

// method: GetSignerCert
// m_cppType = CkCert *
// arg:index - long
- (CkoCert *)GetSignerCert: (NSNumber *)index;

// method: GetXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetXml;

// method: HasSignatureSigningTime
// m_cppType = bool
// arg:index - int
- (BOOL)HasSignatureSigningTime: (NSNumber *)index;

// method: IsApplicationData
// m_cppType = bool
- (BOOL)IsApplicationData;

// method: IsAttachment
// m_cppType = bool
- (BOOL)IsAttachment;

// method: IsAudio
// m_cppType = bool
- (BOOL)IsAudio;

// method: IsEncrypted
// m_cppType = bool
- (BOOL)IsEncrypted;

// method: IsHtml
// m_cppType = bool
- (BOOL)IsHtml;

// method: IsImage
// m_cppType = bool
- (BOOL)IsImage;

// method: IsMultipart
// m_cppType = bool
- (BOOL)IsMultipart;

// method: IsMultipartAlternative
// m_cppType = bool
- (BOOL)IsMultipartAlternative;

// method: IsMultipartMixed
// m_cppType = bool
- (BOOL)IsMultipartMixed;

// method: IsMultipartRelated
// m_cppType = bool
- (BOOL)IsMultipartRelated;

// method: IsPlainText
// m_cppType = bool
- (BOOL)IsPlainText;

// method: IsSigned
// m_cppType = bool
- (BOOL)IsSigned;

// method: IsText
// m_cppType = bool
- (BOOL)IsText;

// method: IsUnlocked
// m_cppType = bool
- (BOOL)IsUnlocked;

// method: IsVideo
// m_cppType = bool
- (BOOL)IsVideo;

// method: IsXml
// m_cppType = bool
- (BOOL)IsXml;

// method: LoadMime
// m_cppType = bool
// arg:mimeMsg - const char *
- (BOOL)LoadMime: (NSString *)mimeMsg;

// method: LoadMimeBytes
// m_cppType = bool
// arg:bData - CkByteData &
- (BOOL)LoadMimeBytes: (NSData *)bData;

// method: LoadMimeFile
// m_cppType = bool
// arg:fileName - const char *
- (BOOL)LoadMimeFile: (NSString *)fileName;

// method: LoadXml
// m_cppType = bool
// arg:xml - const char *
- (BOOL)LoadXml: (NSString *)xml;

// method: LoadXmlFile
// m_cppType = bool
// arg:fileName - const char *
- (BOOL)LoadXmlFile: (NSString *)fileName;

// method: NewMessageRfc822
// m_cppType = bool
// arg:mimeObject - const CkMime &
- (BOOL)NewMessageRfc822: (CkoMime *)mimeObject;

// method: NewMultipartAlternative
// m_cppType = bool
- (BOOL)NewMultipartAlternative;

// method: NewMultipartMixed
// m_cppType = bool
- (BOOL)NewMultipartMixed;

// method: NewMultipartRelated
// m_cppType = bool
- (BOOL)NewMultipartRelated;

// method: RemoveHeaderField
// m_cppType = void
// arg:name - const char *
// arg:bAllOccurances - bool
- (void)RemoveHeaderField: (NSString *)name 
	bAllOccurances: (BOOL)bAllOccurances;

// method: RemovePart
// m_cppType = bool
// arg:index - int
- (BOOL)RemovePart: (NSNumber *)index;

// method: SaveBody
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveBody: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveMime
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveMime: (NSString *)filename;

// method: SaveXml
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveXml: (NSString *)filename;

// method: SetBody
// m_cppType = void
// arg:str - const char *
- (void)SetBody: (NSString *)str;

// method: SetBodyFromBinary
// m_cppType = bool
// arg:dbuf - const CkByteData &
- (BOOL)SetBodyFromBinary: (NSData *)dbuf;

// method: SetBodyFromEncoded
// m_cppType = bool
// arg:encoding - const char *
// arg:str - const char *
- (BOOL)SetBodyFromEncoded: (NSString *)encoding 
	str: (NSString *)str;

// method: SetBodyFromFile
// m_cppType = bool
// arg:fileName - const char *
- (BOOL)SetBodyFromFile: (NSString *)fileName;

// method: SetBodyFromHtml
// m_cppType = bool
// arg:str - const char *
- (BOOL)SetBodyFromHtml: (NSString *)str;

// method: SetBodyFromPlainText
// m_cppType = bool
// arg:str - const char *
- (BOOL)SetBodyFromPlainText: (NSString *)str;

// method: SetBodyFromXml
// m_cppType = bool
// arg:str - const char *
- (BOOL)SetBodyFromXml: (NSString *)str;

// method: SetHeaderField
// m_cppType = bool
// arg:name - const char *
// arg:value - const char *
- (BOOL)SetHeaderField: (NSString *)name 
	value: (NSString *)value;

// method: SetVerifyCert
// m_cppType = void
// arg:cert - const CkCert &
- (void)SetVerifyCert: (CkoCert *)cert;

// method: ToEmailObject
// m_cppType = CkEmail *
- (CkoEmail *)ToEmailObject;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UnwrapSecurity
// m_cppType = bool
- (BOOL)UnwrapSecurity;

// method: UrlEncodeBody
// m_cppType = void
// arg:charset - const char *
- (void)UrlEncodeBody: (NSString *)charset;

// method: Verify
// m_cppType = bool
- (BOOL)Verify;


@end
