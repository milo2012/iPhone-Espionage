// Chilkat Objective-C header.
// Generic/internal class name =  Cert
// Wrapped Chilkat C++ class name =  CkCert

@class CkoPrivateKey;
@class CkoPublicKey;


@interface CkoCert : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: CertVersion
// m_cppType = int
- (NSNumber *)CertVersion;

// property getter: Expired
// m_cppType = bool
- (BOOL)Expired;

// property getter: ForClientAuthentication
// m_cppType = bool
- (BOOL)ForClientAuthentication;

// property getter: ForCodeSigning
// m_cppType = bool
- (BOOL)ForCodeSigning;

// property getter: ForSecureEmail
// m_cppType = bool
- (BOOL)ForSecureEmail;

// property getter: ForServerAuthentication
// m_cppType = bool
- (BOOL)ForServerAuthentication;

// property getter: ForTimeStamping
// m_cppType = bool
- (BOOL)ForTimeStamping;

// property getter: IntendedKeyUsage
// m_cppType = unsigned long
- (NSNumber *)IntendedKeyUsage;

// property getter: IsRoot
// m_cppType = bool
- (BOOL)IsRoot;

// property getter: IssuerC
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerC;

// property getter: IssuerCN
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerCN;

// property getter: IssuerDN
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerDN;

// property getter: IssuerE
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerE;

// property getter: IssuerL
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerL;

// property getter: IssuerO
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerO;

// property getter: IssuerOU
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerOU;

// property getter: IssuerS
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)IssuerS;

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

// property getter: OcspUrl
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)OcspUrl;

// property getter: Revoked
// m_cppType = bool
- (BOOL)Revoked;

// property getter: Rfc822Name
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Rfc822Name;

// property getter: SelfSigned
// m_cppType = bool
- (BOOL)SelfSigned;

// property getter: SerialNumber
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SerialNumber;

// property getter: Sha1Thumbprint
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Sha1Thumbprint;

// property getter: SignatureVerified
// m_cppType = bool
- (BOOL)SignatureVerified;

// property getter: SubjectC
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectC;

// property getter: SubjectCN
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectCN;

// property getter: SubjectDN
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectDN;

// property getter: SubjectE
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectE;

// property getter: SubjectL
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectL;

// property getter: SubjectO
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectO;

// property getter: SubjectOU
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectOU;

// property getter: SubjectS
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SubjectS;

// property getter: TrustedRoot
// m_cppType = bool
- (BOOL)TrustedRoot;

// property getter: ValidFrom
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)ValidFrom;

// property getter: ValidTo
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)ValidTo;

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

// method: CheckRevoked
// m_cppType = int
- (NSNumber *)CheckRevoked;

// method: ExportCertDer
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)ExportCertDer;

// method: ExportCertDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)ExportCertDerFile: (NSString *)filename;

// method: ExportCertPem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ExportCertPem;

// method: ExportCertPemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)ExportCertPemFile: (NSString *)filename;

// method: ExportCertXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ExportCertXml;

// method: ExportPrivateKey
// m_cppType = CkPrivateKey *
- (CkoPrivateKey *)ExportPrivateKey;

// method: ExportPublicKey
// m_cppType = CkPublicKey *
- (CkoPublicKey *)ExportPublicKey;

// method: FindIssuer
// m_cppType = CkCert *
- (CkoCert *)FindIssuer;

// method: GetEncoded
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetEncoded;

// method: GetPrivateKeyPem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetPrivateKeyPem;

// method: HasPrivateKey
// m_cppType = bool
- (BOOL)HasPrivateKey;

// method: LoadFromBase64
// m_cppType = bool
// arg:encodedCert - const char *
- (BOOL)LoadFromBase64: (NSString *)encodedCert;

// method: LoadFromBinary
// m_cppType = bool
// arg:buf - const unsigned char *
// arg:bufLen - unsigned long
- (BOOL)LoadFromBinary: (NSData *)buf 
	bufLen: (NSNumber *)bufLen;

// method: LoadFromFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadFromFile: (NSString *)filename;

// method: LoadPfxData
// m_cppType = bool
// arg:pfxData - CkByteData &
// arg:password - const char *
- (BOOL)LoadPfxData: (NSData *)pfxData 
	password: (NSString *)password;

// method: LoadPfxData2
// m_cppType = bool
// arg:buf - const unsigned char *
// arg:bufLen - unsigned long
// arg:password - const char *
- (BOOL)LoadPfxData2: (NSData *)buf 
	bufLen: (NSNumber *)bufLen 
	password: (NSString *)password;

// method: LoadPfxFile
// m_cppType = bool
// arg:filename - const char *
// arg:password - const char *
- (BOOL)LoadPfxFile: (NSString *)filename 
	password: (NSString *)password;

// method: PemFileToDerFile
// m_cppType = bool
// arg:inFilename - const char *
// arg:outFilename - const char *
- (BOOL)PemFileToDerFile: (NSString *)inFilename 
	outFilename: (NSString *)outFilename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveToFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveToFile: (NSString *)filename;

// method: SetFromEncoded
// m_cppType = bool
// arg:encodedCert - const char *
- (BOOL)SetFromEncoded: (NSString *)encodedCert;

// method: SetPrivateKey
// m_cppType = bool
// arg:privKey - CkPrivateKey &
- (BOOL)SetPrivateKey: (CkoPrivateKey *)privKey;

// method: SetPrivateKeyPem
// m_cppType = bool
// arg:privKeyPem - const char *
- (BOOL)SetPrivateKeyPem: (NSString *)privKeyPem;


@end
