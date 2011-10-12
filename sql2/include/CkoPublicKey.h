// Chilkat Objective-C header.
// Generic/internal class name =  PublicKey
// Wrapped Chilkat C++ class name =  CkPublicKey



@interface CkoPublicKey : NSObject {

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

// method: GetOpenSslDer
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)GetOpenSslDer;

// method: GetOpenSslPem
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetOpenSslPem;

// method: GetRsaDer
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)GetRsaDer;

// method: GetXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetXml;

// method: LoadOpenSslDer
// m_cppType = bool
// arg:data - CkByteData &
- (BOOL)LoadOpenSslDer: (NSData *)data;

// method: LoadOpenSslDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadOpenSslDerFile: (NSString *)filename;

// method: LoadOpenSslPem
// m_cppType = bool
// arg:str - const char *
- (BOOL)LoadOpenSslPem: (NSString *)str;

// method: LoadOpenSslPemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadOpenSslPemFile: (NSString *)filename;

// method: LoadPkcs1Pem
// m_cppType = bool
// arg:str - const char *
- (BOOL)LoadPkcs1Pem: (NSString *)str;

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

// method: SaveOpenSslDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveOpenSslDerFile: (NSString *)filename;

// method: SaveOpenSslPemFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveOpenSslPemFile: (NSString *)filename;

// method: SaveRsaDerFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveRsaDerFile: (NSString *)filename;

// method: SaveXmlFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveXmlFile: (NSString *)filename;


@end
