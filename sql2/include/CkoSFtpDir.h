// Chilkat Objective-C header.
// Generic/internal class name =  SFtpDir
// Wrapped Chilkat C++ class name =  CkSFtpDir

@class CkoSFtpFile;


@interface CkoSFtpDir : NSObject {

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

// property getter: NumFilesAndDirs
// m_cppType = int
- (NSNumber *)NumFilesAndDirs;

// property getter: OriginalPath
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)OriginalPath;

// method: GetFileObject
// m_cppType = CkSFtpFile *
// arg:index - int
- (CkoSFtpFile *)GetFileObject: (NSNumber *)index;

// method: GetFilename
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetFilename: (NSNumber *)index;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;


@end
