// Chilkat Objective-C header.
// Generic/internal class name =  OmaDrm
// Wrapped Chilkat C++ class name =  CkOmaDrm



@interface CkoOmaDrm : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Base64Key
// m_cppType = CkString &
// arg:str - CkString &
// arg:key - const char *
- (NSString *)Base64Key;

// property setter: Base64Key
// m_cppType = CkString &
// arg:str - CkString &
// arg:key - const char *
- (void)setBase64Key: (NSString *)input;

// property getter: ContentType
// m_cppType = CkString &
// arg:str - CkString &
// arg:contentType - const char *
- (NSString *)ContentType;

// property setter: ContentType
// m_cppType = CkString &
// arg:str - CkString &
// arg:contentType - const char *
- (void)setContentType: (NSString *)input;

// property getter: ContentUri
// m_cppType = CkString &
// arg:str - CkString &
// arg:contentUri - const char *
- (NSString *)ContentUri;

// property setter: ContentUri
// m_cppType = CkString &
// arg:str - CkString &
// arg:contentUri - const char *
- (void)setContentUri: (NSString *)input;

// property getter: DecryptedData
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSData *)DecryptedData;

// property getter: DecryptedData
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)DecryptedDataMutable;

// property getter: DrmContentVersion
// m_cppType = int
- (NSNumber *)DrmContentVersion;

// property getter: EncryptedData
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSData *)EncryptedData;

// property getter: EncryptedData
// m_cppType = CkByteData &
// arg:data - CkByteData &
- (NSMutableData *)EncryptedDataMutable;

// property getter: Headers
// m_cppType = CkString &
// arg:str - CkString &
// arg:headers - const char *
- (NSString *)Headers;

// property setter: Headers
// m_cppType = CkString &
// arg:str - CkString &
// arg:headers - const char *
- (void)setHeaders: (NSString *)input;

// property getter: IV
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (NSData *)IV;

// property setter: IV
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (void)setIV: (NSData *)data;

// property getter: IV
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (NSMutableData *)IVMutable;

// property setter: IV
// m_cppType = CkByteData &
// arg:data - CkByteData &
// arg:data - const CkByteData &
- (void)setIVMutable: (NSMutableData *)data;

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

// method: CreateDcfFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)CreateDcfFile: (NSString *)filename;

// method: GetHeaderField
// m_cppType = bool
// arg:fieldName - const char *
// arg:fieldVal - CkString &
- (BOOL)GetHeaderField: (NSString *)fieldName 
	fieldVal: (NSString *)fieldVal;

// method: LoadDcfData
// m_cppType = bool
// arg:data - const CkByteData &
- (BOOL)LoadDcfData: (NSData *)data;

// method: LoadDcfFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadDcfFile: (NSString *)filename;

// method: LoadUnencryptedData
// m_cppType = void
// arg:data - const CkByteData &
- (void)LoadUnencryptedData: (NSData *)data;

// method: LoadUnencryptedFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadUnencryptedFile: (NSString *)filename;

// method: SaveDecrypted
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveDecrypted: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetEncodedIV
// m_cppType = void
// arg:encodedIv - const char *
// arg:encoding - const char *
- (void)SetEncodedIV: (NSString *)encodedIv 
	encoding: (NSString *)encoding;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;


@end
