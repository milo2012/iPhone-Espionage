// Chilkat Objective-C header.
// Generic/internal class name =  SFtpFile
// Wrapped Chilkat C++ class name =  CkSFtpFile



@interface CkoSFtpFile : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: CreateTime
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)CreateTime;

// property getter: FileType
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)FileType;

// property getter: Filename
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Filename;

// property getter: Gid
// m_cppType = int
- (NSNumber *)Gid;

// property getter: Group
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Group;

// property getter: IsAppendOnly
// m_cppType = bool
- (BOOL)IsAppendOnly;

// property getter: IsArchive
// m_cppType = bool
- (BOOL)IsArchive;

// property getter: IsCaseInsensitive
// m_cppType = bool
- (BOOL)IsCaseInsensitive;

// property getter: IsCompressed
// m_cppType = bool
- (BOOL)IsCompressed;

// property getter: IsDirectory
// m_cppType = bool
- (BOOL)IsDirectory;

// property getter: IsEncrypted
// m_cppType = bool
- (BOOL)IsEncrypted;

// property getter: IsHidden
// m_cppType = bool
- (BOOL)IsHidden;

// property getter: IsImmutable
// m_cppType = bool
- (BOOL)IsImmutable;

// property getter: IsReadOnly
// m_cppType = bool
- (BOOL)IsReadOnly;

// property getter: IsRegular
// m_cppType = bool
- (BOOL)IsRegular;

// property getter: IsSparse
// m_cppType = bool
- (BOOL)IsSparse;

// property getter: IsSymLink
// m_cppType = bool
- (BOOL)IsSymLink;

// property getter: IsSync
// m_cppType = bool
- (BOOL)IsSync;

// property getter: IsSystem
// m_cppType = bool
- (BOOL)IsSystem;

// property getter: LastAccessTime
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)LastAccessTime;

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

// property getter: LastModifiedTime
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)LastModifiedTime;

// property getter: Owner
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Owner;

// property getter: Permissions
// m_cppType = int
- (NSNumber *)Permissions;

// property getter: Size64
// m_cppType = __int64
- (NSNumber *)Size64;

// property getter: Uid
// m_cppType = int
- (NSNumber *)Uid;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;


@end
