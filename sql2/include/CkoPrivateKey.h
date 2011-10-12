// Chilkat Objective-C header.
// Generic/internal class name =  PrivateKey
// Wrapped Chilkat C++ class name =  CkPrivateKey



@interface CkoPrivateKey : NSObject {

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

// method: GetPkcs8
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)GetPkcs8;

// method: GetPkcs8Encrypted
// m_cppType = bool
// arg:password - const char *
// arg:outBytes - CkByteData &
- (NSData *)GetPkcs8Encrypted: (NSString *)password;

// method: GetPkcs8EncryptedPem
// m_cppType = bool
// arg:password - const char *
// arg:outStr - CkString &
- (NSString *)GetPkcs8EncryptedPem: (NSString *)password;

// method: GetPkcs8Pem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetPkcs8Pem;

// method: GetRsaDer
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)GetRsaDer;

// method: GetRsaPem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetRsaPem;

// method: GetXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetXml;

// method: LoadEncryptedPem
// m_cppType = bool
// arg:pemStr - const char *
// arg:password - const char *
- (BOOL)LoadEncryptedPem: (NSString *)pemStr 
	password: (NSString *)password;

// method: LoadEncryptedPemFile
// m_cppType = bool
// arg:filename - const char *
// arg:password - const char *
- (BOOL)LoadEncryptedPemFile: (NSString *)filename 
	password: (NSString *)password;

// method: LoadPem
// m_cppType = bool
// arg:str - const char *
- (BOOL)LoadPem: (NSString *)str;

// method: LoadPemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadPemFile: (NSString *)filename;

// method: LoadPkcs8
// m_cppType = bool
// arg:data - CkByteData &
- (BOOL)LoadPkcs8: (NSData *)data;

// method: LoadPkcs8Encrypted
// m_cppType = bool
// arg:data - CkByteData &
// arg:password - const char *
- (BOOL)LoadPkcs8Encrypted: (NSData *)data 
	password: (NSString *)password;

// method: LoadPkcs8EncryptedFile
// m_cppType = bool
// arg:filename - const char *
// arg:password - const char *
- (BOOL)LoadPkcs8EncryptedFile: (NSString *)filename 
	password: (NSString *)password;

// method: LoadPkcs8File
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadPkcs8File: (NSString *)filename;

// method: LoadRsaDer
// m_cppType = bool
// arg:data - CkByteData &
- (BOOL)LoadRsaDer: (NSData *)data;

// method: LoadRsaDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadRsaDerFile: (NSString *)filename;

// method: LoadXml
// m_cppType = bool
// arg:xml - const char *
- (BOOL)LoadXml: (NSString *)xml;

// method: LoadXmlFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadXmlFile: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SavePkcs8EncryptedFile
// m_cppType = bool
// arg:password - const char *
// arg:filename - const char *
- (BOOL)SavePkcs8EncryptedFile: (NSString *)password 
	filename: (NSString *)filename;

// method: SavePkcs8EncryptedPemFile
// m_cppType = bool
// arg:password - const char *
// arg:filename - const char *
- (BOOL)SavePkcs8EncryptedPemFile: (NSString *)password 
	filename: (NSString *)filename;

// method: SavePkcs8File
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SavePkcs8File: (NSString *)filename;

// method: SavePkcs8PemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SavePkcs8PemFile: (NSString *)filename;

// method: SaveRsaDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveRsaDerFile: (NSString *)filename;

// method: SaveRsaPemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveRsaPemFile: (NSString *)filename;

// method: SaveXmlFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveXmlFile: (NSString *)filename;


@end
