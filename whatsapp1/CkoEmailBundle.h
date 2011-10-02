// Chilkat Objective-C header.
// Generic/internal class name =  EmailBundle
// Wrapped Chilkat C++ class name =  CkEmailBundle

@class CkoEmail;
@class CkoStringArray;


@interface CkoEmailBundle : NSObject {

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

// property getter: MessageCount
// m_cppType = long
- (NSNumber *)MessageCount;

// method: AddEmail
// m_cppType = bool
// arg:email - const CkEmail &
- (BOOL)AddEmail: (CkoEmail *)email;

// method: FindByHeader
// m_cppType = CkEmail *
// arg:name - const char *
// arg:value - const char *
- (CkoEmail *)FindByHeader: (NSString *)name 
	value: (NSString *)value;

// method: GetEmail
// m_cppType = CkEmail *
// arg:index - long
- (CkoEmail *)GetEmail: (NSNumber *)index;

// method: GetUidls
// m_cppType = CkStringArray *
- (CkoStringArray *)GetUidls;

// method: GetXml
// m_cppType = void
// arg:outXml - CkString &
- (NSString *)GetXml;

// method: LoadXml
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadXml: (NSString *)filename;

// method: LoadXmlString
// m_cppType = bool
// arg:xmlStr - const char *
- (BOOL)LoadXmlString: (NSString *)xmlStr;

// method: RemoveEmail
// m_cppType = bool
// arg:email - const CkEmail &
- (BOOL)RemoveEmail: (CkoEmail *)email;

// method: RemoveEmailByIndex
// m_cppType = bool
// arg:index - int
- (BOOL)RemoveEmailByIndex: (NSNumber *)index;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveXml
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveXml: (NSString *)filename;

// method: SortByDate
// m_cppType = void
// arg:ascending - bool
- (void)SortByDate: (BOOL)ascending;

// method: SortByRecipient
// m_cppType = void
// arg:ascending - bool
- (void)SortByRecipient: (BOOL)ascending;

// method: SortBySender
// m_cppType = void
// arg:ascending - bool
- (void)SortBySender: (BOOL)ascending;

// method: SortBySubject
// m_cppType = void
// arg:ascending - bool
- (void)SortBySubject: (BOOL)ascending;


@end
