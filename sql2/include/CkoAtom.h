// Chilkat Objective-C header.
// Generic/internal class name =  Atom
// Wrapped Chilkat C++ class name =  CkAtom



@interface CkoAtom : NSObject {

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

// property getter: NumEntries
// m_cppType = int
- (NSNumber *)NumEntries;

// method: AddElement
// m_cppType = int
// arg:tag - const char *
// arg:value - const char *
- (NSNumber *)AddElement: (NSString *)tag 
	value: (NSString *)value;

// method: AddElementDate
// m_cppType = int
// arg:tag - const char *
// arg:dateTime - SYSTEMTIME &
- (NSNumber *)AddElementDate: (NSString *)tag 
	dateTime: (NSDate *)dateTime;

// method: AddElementHtml
// m_cppType = int
// arg:tag - const char *
// arg:htmlStr - const char *
- (NSNumber *)AddElementHtml: (NSString *)tag 
	htmlStr: (NSString *)htmlStr;

// method: AddElementXHtml
// m_cppType = int
// arg:tag - const char *
// arg:xmlStr - const char *
- (NSNumber *)AddElementXHtml: (NSString *)tag 
	xmlStr: (NSString *)xmlStr;

// method: AddElementXml
// m_cppType = int
// arg:tag - const char *
// arg:xmlStr - const char *
- (NSNumber *)AddElementXml: (NSString *)tag 
	xmlStr: (NSString *)xmlStr;

// method: AddEntry
// m_cppType = void
// arg:xmlStr - const char *
- (void)AddEntry: (NSString *)xmlStr;

// method: AddLink
// m_cppType = void
// arg:rel - const char *
// arg:href - const char *
// arg:title - const char *
// arg:typ - const char *
- (void)AddLink: (NSString *)rel 
	href: (NSString *)href 
	title: (NSString *)title 
	typ: (NSString *)typ;

// method: AddPerson
// m_cppType = void
// arg:tag - const char *
// arg:name - const char *
// arg:uri - const char *
// arg:email - const char *
- (void)AddPerson: (NSString *)tag 
	name: (NSString *)name 
	uri: (NSString *)uri 
	email: (NSString *)email;

// method: DeleteElement
// m_cppType = void
// arg:tag - const char *
// arg:index - int
- (void)DeleteElement: (NSString *)tag 
	index: (NSNumber *)index;

// method: DeleteElementAttr
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:attrName - const char *
- (void)DeleteElementAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName;

// method: DeletePerson
// m_cppType = void
// arg:tag - const char *
// arg:index - int
- (void)DeletePerson: (NSString *)tag 
	index: (NSNumber *)index;

// method: DownloadAtom
// m_cppType = bool
// arg:url - const char *
- (BOOL)DownloadAtom: (NSString *)url;

// method: GetElement
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetElement: (NSString *)tag 
	index: (NSNumber *)index;

// method: GetElementAttr
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:attrName - const char *
// arg:outStr - CkString &
- (NSString *)GetElementAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName;

// method: GetElementCount
// m_cppType = int
// arg:tag - const char *
- (NSNumber *)GetElementCount: (NSString *)tag;

// method: GetElementDate
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetElementDate: (NSString *)tag 
	index: (NSNumber *)index;

// method: GetEntry
// m_cppType = CkAtom *
// arg:index - int
- (CkoAtom *)GetEntry: (NSNumber *)index;

// method: GetLinkHref
// m_cppType = bool
// arg:relName - const char *
// arg:outStr - CkString &
- (NSString *)GetLinkHref: (NSString *)relName;

// method: GetPersonInfo
// m_cppType = bool
// arg:tag - const char *
// arg:index - int
// arg:tag2 - const char *
// arg:outStr - CkString &
- (NSString *)GetPersonInfo: (NSString *)tag 
	index: (NSNumber *)index 
	tag2: (NSString *)tag2;

// method: GetTopAttr
// m_cppType = bool
// arg:attrName - const char *
// arg:outStr - CkString &
- (NSString *)GetTopAttr: (NSString *)attrName;

// method: HasElement
// m_cppType = bool
// arg:tag - const char *
- (BOOL)HasElement: (NSString *)tag;

// method: LoadXml
// m_cppType = bool
// arg:xmlStr - const char *
- (BOOL)LoadXml: (NSString *)xmlStr;

// method: NewEntry
// m_cppType = void
- (void)NewEntry;

// method: NewFeed
// m_cppType = void
- (void)NewFeed;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetElementAttr
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:attrName - const char *
// arg:attrValue - const char *
- (void)SetElementAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName 
	attrValue: (NSString *)attrValue;

// method: SetTopAttr
// m_cppType = void
// arg:attrName - const char *
// arg:value - const char *
- (void)SetTopAttr: (NSString *)attrName 
	value: (NSString *)value;

// method: ToXmlString
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)ToXmlString;

// method: UpdateElement
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:value - const char *
- (void)UpdateElement: (NSString *)tag 
	index: (NSNumber *)index 
	value: (NSString *)value;

// method: UpdateElementDate
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:dateTime - SYSTEMTIME &
- (void)UpdateElementDate: (NSString *)tag 
	index: (NSNumber *)index 
	dateTime: (NSDate *)dateTime;

// method: UpdateElementHtml
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:htmlStr - const char *
- (void)UpdateElementHtml: (NSString *)tag 
	index: (NSNumber *)index 
	htmlStr: (NSString *)htmlStr;

// method: UpdateElementXHtml
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:xmlStr - const char *
- (void)UpdateElementXHtml: (NSString *)tag 
	index: (NSNumber *)index 
	xmlStr: (NSString *)xmlStr;

// method: UpdateElementXml
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:xmlStr - const char *
- (void)UpdateElementXml: (NSString *)tag 
	index: (NSNumber *)index 
	xmlStr: (NSString *)xmlStr;

// method: UpdatePerson
// m_cppType = void
// arg:tag - const char *
// arg:index - int
// arg:name - const char *
// arg:uri - const char *
// arg:email - const char *
- (void)UpdatePerson: (NSString *)tag 
	index: (NSNumber *)index 
	name: (NSString *)name 
	uri: (NSString *)uri 
	email: (NSString *)email;


@end
