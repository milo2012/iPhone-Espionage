// Chilkat Objective-C header.
// Generic/internal class name =  CertStore
// Wrapped Chilkat C++ class name =  CkCertStore

@class CkoCert;


@interface CkoCertStore : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

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

// property getter: NumCertificates
// m_cppType = long
- (NSNumber *)NumCertificates;

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
// arg:version - CkString &
- (NSString *)Version;

// method: FindCertByRfc822Name
// m_cppType = CkCert *
// arg:name - const char *
- (CkoCert *)FindCertByRfc822Name: (NSString *)name;

// method: FindCertBySerial
// m_cppType = CkCert *
// arg:serialNumber - const char *
- (CkoCert *)FindCertBySerial: (NSString *)serialNumber;

// method: FindCertBySha1Thumbprint
// m_cppType = CkCert *
// arg:str - const char *
- (CkoCert *)FindCertBySha1Thumbprint: (NSString *)str;

// method: FindCertBySubject
// m_cppType = CkCert *
// arg:subject - const char *
- (CkoCert *)FindCertBySubject: (NSString *)subject;

// method: FindCertBySubjectCN
// m_cppType = CkCert *
// arg:commonName - const char *
- (CkoCert *)FindCertBySubjectCN: (NSString *)commonName;

// method: FindCertBySubjectE
// m_cppType = CkCert *
// arg:emailAddress - const char *
- (CkoCert *)FindCertBySubjectE: (NSString *)emailAddress;

// method: FindCertBySubjectO
// m_cppType = CkCert *
// arg:organization - const char *
- (CkoCert *)FindCertBySubjectO: (NSString *)organization;

// method: GetCertificate
// m_cppType = CkCert *
// arg:index - long
- (CkoCert *)GetCertificate: (NSNumber *)index;

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

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;


@end
