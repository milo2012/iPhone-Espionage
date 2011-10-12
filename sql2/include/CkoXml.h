// Chilkat Objective-C header.
// Generic/internal class name =  Xml
// Wrapped Chilkat C++ class name =  CkXml



@interface CkoXml : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Cdata
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Cdata;

// property setter: Cdata
// m_cppType = bool
// arg:newVal - bool
- (void)setCdata: (BOOL)boolVal;

// property getter: Content
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Content;

// property setter: Content
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setContent: (NSString *)input;

// property getter: ContentInt
// m_cppType = int
// arg:newVal - int
- (NSNumber *)ContentInt;

// property setter: ContentInt
// m_cppType = int
// arg:newVal - int
- (void)setContentInt: (NSNumber *)intVal;

// property getter: DocType
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)DocType;

// property setter: DocType
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDocType: (NSString *)input;

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

// property getter: NumAttributes
// m_cppType = long
- (NSNumber *)NumAttributes;

// property getter: NumChildren
// m_cppType = long
- (NSNumber *)NumChildren;

// property getter: SortCaseInsensitive
// m_cppType = bool
// arg:newVal - bool
- (BOOL)SortCaseInsensitive;

// property setter: SortCaseInsensitive
// m_cppType = bool
// arg:newVal - bool
- (void)setSortCaseInsensitive: (BOOL)boolVal;

// property getter: Standalone
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Standalone;

// property setter: Standalone
// m_cppType = bool
// arg:newVal - bool
- (void)setStandalone: (BOOL)boolVal;

// property getter: Tag
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Tag;

// property setter: Tag
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setTag: (NSString *)input;

// property getter: TreeId
// m_cppType = long
- (NSNumber *)TreeId;

// property getter: Version
// m_cppType = bool
// arg:str - CkString &
- (BOOL)Version;

// method: AccumulateTagContent
// m_cppType = void
// arg:tag - const char *
// arg:skipTags - const char *
// arg:outStr - CkString &
- (NSString *)AccumulateTagContent: (NSString *)tag 
	skipTags: (NSString *)skipTags;

// method: AddAttribute
// m_cppType = bool
// arg:name - const char *
// arg:value - const char *
- (BOOL)AddAttribute: (NSString *)name 
	value: (NSString *)value;

// method: AddAttributeInt
// m_cppType = bool
// arg:name - const char *
// arg:value - int
- (BOOL)AddAttributeInt: (NSString *)name 
	value: (NSNumber *)value;

// method: AddChildTree
// m_cppType = bool
// arg:tree - const CkXml &
- (BOOL)AddChildTree: (CkoXml *)tree;

// method: AddOrUpdateAttribute
// m_cppType = void
// arg:name - const char *
// arg:value - const char *
- (void)AddOrUpdateAttribute: (NSString *)name 
	value: (NSString *)value;

// method: AddOrUpdateAttributeI
// m_cppType = void
// arg:name - const char *
// arg:value - long
- (void)AddOrUpdateAttributeI: (NSString *)name 
	value: (NSNumber *)value;

// method: AddStyleSheet
// m_cppType = void
// arg:styleSheet - const char *
- (void)AddStyleSheet: (NSString *)styleSheet;

// method: AddToAttribute
// m_cppType = void
// arg:name - const char *
// arg:amount - long
- (void)AddToAttribute: (NSString *)name 
	amount: (NSNumber *)amount;

// method: AddToChildContent
// m_cppType = void
// arg:tag - const char *
// arg:amount - long
- (void)AddToChildContent: (NSString *)tag 
	amount: (NSNumber *)amount;

// method: AddToContent
// m_cppType = void
// arg:amount - long
- (void)AddToContent: (NSNumber *)amount;

// method: AppendToContent
// m_cppType = bool
// arg:str - const char *
- (BOOL)AppendToContent: (NSString *)str;

// method: BEncodeContent
// m_cppType = bool
// arg:charset - const char *
// arg:db - const CkByteData &
- (BOOL)BEncodeContent: (NSString *)charset 
	db: (NSData *)db;

// method: ChildContentMatches
// m_cppType = bool
// arg:tag - const char *
// arg:pattern - const char *
// arg:caseSensitive - bool
- (BOOL)ChildContentMatches: (NSString *)tag 
	pattern: (NSString *)pattern 
	caseSensitive: (BOOL)caseSensitive;

// method: ChilkatPath
// m_cppType = bool
// arg:cmd - const char *
// arg:outStr - CkString &
- (NSString *)ChilkatPath: (NSString *)cmd;

// method: Clear
// m_cppType = bool
- (BOOL)Clear;

// method: ContentMatches
// m_cppType = bool
// arg:pattern - const char *
// arg:caseSensitive - bool
- (BOOL)ContentMatches: (NSString *)pattern 
	caseSensitive: (BOOL)caseSensitive;

// method: Copy
// m_cppType = void
// arg:node - const CkXml &
- (void)Copy: (CkoXml *)node;

// method: DecodeContent
// m_cppType = bool
// arg:outData - CkByteData &
- (NSData *)DecodeContent;

// method: DecodeEntities
// m_cppType = bool
// arg:str - const char *
// arg:outStr - CkString &
- (NSString *)DecodeEntities: (NSString *)str;

// method: DecryptContent
// m_cppType = bool
// arg:password - const char *
- (BOOL)DecryptContent: (NSString *)password;

// method: EncryptContent
// m_cppType = bool
// arg:password - const char *
- (BOOL)EncryptContent: (NSString *)password;

// method: ExtractChildByIndex
// m_cppType = CkXml *
// arg:index - long
- (CkoXml *)ExtractChildByIndex: (NSNumber *)index;

// method: ExtractChildByName
// m_cppType = CkXml *
// arg:tag - const char *
// arg:attrName - const char *
// arg:attrValue - const char *
- (CkoXml *)ExtractChildByName: (NSString *)tag 
	attrName: (NSString *)attrName 
	attrValue: (NSString *)attrValue;

// method: FindChild
// m_cppType = CkXml *
// arg:tag - const char *
- (CkoXml *)FindChild: (NSString *)tag;

// method: FindChild2
// m_cppType = bool
// arg:tag - const char *
- (BOOL)FindChild2: (NSString *)tag;

// method: FindNextRecord
// m_cppType = CkXml *
// arg:tag - const char *
// arg:contentPattern - const char *
- (CkoXml *)FindNextRecord: (NSString *)tag 
	contentPattern: (NSString *)contentPattern;

// method: FindOrAddNewChild
// m_cppType = CkXml *
// arg:tag - const char *
- (CkoXml *)FindOrAddNewChild: (NSString *)tag;

// method: FirstChild
// m_cppType = CkXml *
- (CkoXml *)FirstChild;

// method: FirstChild2
// m_cppType = bool
- (BOOL)FirstChild2;

// method: GetAttrValue
// m_cppType = bool
// arg:name - const char *
// arg:outStr - CkString &
- (NSString *)GetAttrValue: (NSString *)name;

// method: GetAttrValueInt
// m_cppType = int
// arg:name - const char *
- (NSNumber *)GetAttrValueInt: (NSString *)name;

// method: GetAttributeName
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetAttributeName: (NSNumber *)index;

// method: GetAttributeValue
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetAttributeValue: (NSNumber *)index;

// method: GetAttributeValueInt
// m_cppType = int
// arg:index - int
- (NSNumber *)GetAttributeValueInt: (NSNumber *)index;

// method: GetBinaryContent
// m_cppType = bool
// arg:data - CkByteData &
// arg:unzipFlag - bool
// arg:decryptFlag - bool
// arg:password - const char *
- (BOOL)GetBinaryContent: (NSData *)data 
	unzipFlag: (BOOL)unzipFlag 
	decryptFlag: (BOOL)decryptFlag 
	password: (NSString *)password;

// method: GetChild
// m_cppType = CkXml *
// arg:index - long
- (CkoXml *)GetChild: (NSNumber *)index;

// method: GetChild2
// m_cppType = bool
// arg:index - long
- (BOOL)GetChild2: (NSNumber *)index;

// method: GetChildBoolValue
// m_cppType = bool
// arg:tag - const char *
- (BOOL)GetChildBoolValue: (NSString *)tag;

// method: GetChildContent
// m_cppType = bool
// arg:tag - const char *
// arg:outStr - CkString &
- (NSString *)GetChildContent: (NSString *)tag;

// method: GetChildContentByIndex
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetChildContentByIndex: (NSNumber *)index;

// method: GetChildExact
// m_cppType = CkXml *
// arg:tag - const char *
// arg:content - const char *
- (CkoXml *)GetChildExact: (NSString *)tag 
	content: (NSString *)content;

// method: GetChildIntValue
// m_cppType = int
// arg:tag - const char *
- (NSNumber *)GetChildIntValue: (NSString *)tag;

// method: GetChildTag
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetChildTag: (NSNumber *)index;

// method: GetChildTagByIndex
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetChildTagByIndex: (NSNumber *)index;

// method: GetChildWithContent
// m_cppType = CkXml *
// arg:content - const char *
- (CkoXml *)GetChildWithContent: (NSString *)content;

// method: GetChildWithTag
// m_cppType = CkXml *
// arg:tag - const char *
- (CkoXml *)GetChildWithTag: (NSString *)tag;

// method: GetNthChildWithTag
// m_cppType = CkXml *
// arg:tag - const char *
// arg:n - long
- (CkoXml *)GetNthChildWithTag: (NSString *)tag 
	n: (NSNumber *)n;

// method: GetNthChildWithTag2
// m_cppType = bool
// arg:tag - const char *
// arg:n - long
- (BOOL)GetNthChildWithTag2: (NSString *)tag 
	n: (NSNumber *)n;

// method: GetParent
// m_cppType = CkXml *
- (CkoXml *)GetParent;

// method: GetParent2
// m_cppType = bool
- (BOOL)GetParent2;

// method: GetRoot
// m_cppType = CkXml *
- (CkoXml *)GetRoot;

// method: GetRoot2
// m_cppType = void
- (void)GetRoot2;

// method: GetSelf
// m_cppType = CkXml *
- (CkoXml *)GetSelf;

// method: GetXml
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)GetXml;

// method: HasAttrWithValue
// m_cppType = bool
// arg:name - const char *
// arg:value - const char *
- (BOOL)HasAttrWithValue: (NSString *)name 
	value: (NSString *)value;

// method: HasAttribute
// m_cppType = bool
// arg:name - const char *
- (BOOL)HasAttribute: (NSString *)name;

// method: HasChildWithContent
// m_cppType = bool
// arg:content - const char *
- (BOOL)HasChildWithContent: (NSString *)content;

// method: HasChildWithTag
// m_cppType = bool
// arg:tag - const char *
- (BOOL)HasChildWithTag: (NSString *)tag;

// method: HasChildWithTagAndContent
// m_cppType = bool
// arg:tag - const char *
// arg:content - const char *
- (BOOL)HasChildWithTagAndContent: (NSString *)tag 
	content: (NSString *)content;

// method: HttpGet
// m_cppType = CkXml *
// arg:url - const char *
- (CkoXml *)HttpGet: (NSString *)url;

// method: HttpPost
// m_cppType = CkXml *
// arg:url - const char *
- (CkoXml *)HttpPost: (NSString *)url;

// method: InsertChildTreeAfter
// m_cppType = bool
// arg:index - int
// arg:tree - const CkXml &
- (BOOL)InsertChildTreeAfter: (NSNumber *)index 
	tree: (CkoXml *)tree;

// method: InsertChildTreeBefore
// m_cppType = bool
// arg:index - int
// arg:tree - const CkXml &
- (BOOL)InsertChildTreeBefore: (NSNumber *)index 
	tree: (CkoXml *)tree;

// method: LastChild
// m_cppType = CkXml *
- (CkoXml *)LastChild;

// method: LastChild2
// m_cppType = bool
- (BOOL)LastChild2;

// method: LoadXml
// m_cppType = bool
// arg:xmlData - const char *
- (BOOL)LoadXml: (NSString *)xmlData;

// method: LoadXml2
// m_cppType = bool
// arg:xmlData - const char *
// arg:autoTrim - bool
- (BOOL)LoadXml2: (NSString *)xmlData 
	autoTrim: (BOOL)autoTrim;

// method: LoadXmlFile
// m_cppType = bool
// arg:fileName - const char *
- (BOOL)LoadXmlFile: (NSString *)fileName;

// method: LoadXmlFile2
// m_cppType = bool
// arg:fileName - const char *
// arg:autoTrim - bool
- (BOOL)LoadXmlFile2: (NSString *)fileName 
	autoTrim: (BOOL)autoTrim;

// method: NewChild
// m_cppType = CkXml *
// arg:tag - const char *
// arg:content - const char *
- (CkoXml *)NewChild: (NSString *)tag 
	content: (NSString *)content;

// method: NewChild2
// m_cppType = void
// arg:tag - const char *
// arg:content - const char *
- (void)NewChild2: (NSString *)tag 
	content: (NSString *)content;

// method: NewChildAfter
// m_cppType = CkXml *
// arg:index - int
// arg:tag - const char *
// arg:content - const char *
- (CkoXml *)NewChildAfter: (NSNumber *)index 
	tag: (NSString *)tag 
	content: (NSString *)content;

// method: NewChildBefore
// m_cppType = CkXml *
// arg:index - int
// arg:tag - const char *
// arg:content - const char *
- (CkoXml *)NewChildBefore: (NSNumber *)index 
	tag: (NSString *)tag 
	content: (NSString *)content;

// method: NewChildInt2
// m_cppType = void
// arg:tag - const char *
// arg:value - int
- (void)NewChildInt2: (NSString *)tag 
	value: (NSNumber *)value;

// method: NextSibling
// m_cppType = CkXml *
- (CkoXml *)NextSibling;

// method: NextSibling2
// m_cppType = bool
- (BOOL)NextSibling2;

// method: NumChildrenHavingTag
// m_cppType = long
// arg:tag - const char *
- (NSNumber *)NumChildrenHavingTag: (NSString *)tag;

// method: PreviousSibling
// m_cppType = CkXml *
- (CkoXml *)PreviousSibling;

// method: PreviousSibling2
// m_cppType = bool
- (BOOL)PreviousSibling2;

// method: QEncodeContent
// m_cppType = bool
// arg:charset - const char *
// arg:db - const CkByteData &
- (BOOL)QEncodeContent: (NSString *)charset 
	db: (NSData *)db;

// method: RemoveAllAttributes
// m_cppType = bool
- (BOOL)RemoveAllAttributes;

// method: RemoveAllChildren
// m_cppType = void
- (void)RemoveAllChildren;

// method: RemoveAttribute
// m_cppType = bool
// arg:name - const char *
- (BOOL)RemoveAttribute: (NSString *)name;

// method: RemoveChild
// m_cppType = void
// arg:tag - const char *
- (void)RemoveChild: (NSString *)tag;

// method: RemoveChildByIndex
// m_cppType = void
// arg:index - long
- (void)RemoveChildByIndex: (NSNumber *)index;

// method: RemoveChildWithContent
// m_cppType = void
// arg:content - const char *
- (void)RemoveChildWithContent: (NSString *)content;

// method: RemoveFromTree
// m_cppType = void
- (void)RemoveFromTree;

// method: SaveBinaryContent
// m_cppType = bool
// arg:filename - const char *
// arg:unzipFlag - bool
// arg:decryptFlag - bool
// arg:password - const char *
- (BOOL)SaveBinaryContent: (NSString *)filename 
	unzipFlag: (BOOL)unzipFlag 
	decryptFlag: (BOOL)decryptFlag 
	password: (NSString *)password;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveXml
// m_cppType = bool
// arg:fileName - const char *
- (BOOL)SaveXml: (NSString *)fileName;

// method: SearchAllForContent
// m_cppType = CkXml *
// arg:after - const CkXml &
// arg:contentPattern - const char *
- (CkoXml *)SearchAllForContent: (CkoXml *)after 
	contentPattern: (NSString *)contentPattern;

// method: SearchAllForContent2
// m_cppType = bool
// arg:after - const CkXml &
// arg:contentPattern - const char *
- (BOOL)SearchAllForContent2: (CkoXml *)after 
	contentPattern: (NSString *)contentPattern;

// method: SearchForAttribute
// m_cppType = CkXml *
// arg:after - const CkXml &
// arg:tag - const char *
// arg:attr - const char *
// arg:valuePattern - const char *
- (CkoXml *)SearchForAttribute: (CkoXml *)after 
	tag: (NSString *)tag 
	attr: (NSString *)attr 
	valuePattern: (NSString *)valuePattern;

// method: SearchForAttribute2
// m_cppType = bool
// arg:after - const CkXml &
// arg:tag - const char *
// arg:attr - const char *
// arg:valuePattern - const char *
- (BOOL)SearchForAttribute2: (CkoXml *)after 
	tag: (NSString *)tag 
	attr: (NSString *)attr 
	valuePattern: (NSString *)valuePattern;

// method: SearchForContent
// m_cppType = CkXml *
// arg:after - const CkXml &
// arg:tag - const char *
// arg:contentPattern - const char *
- (CkoXml *)SearchForContent: (CkoXml *)after 
	tag: (NSString *)tag 
	contentPattern: (NSString *)contentPattern;

// method: SearchForContent2
// m_cppType = bool
// arg:after - const CkXml &
// arg:tag - const char *
// arg:contentPattern - const char *
- (BOOL)SearchForContent2: (CkoXml *)after 
	tag: (NSString *)tag 
	contentPattern: (NSString *)contentPattern;

// method: SearchForTag
// m_cppType = CkXml *
// arg:after - const CkXml &
// arg:tag - const char *
- (CkoXml *)SearchForTag: (CkoXml *)after 
	tag: (NSString *)tag;

// method: SearchForTag2
// m_cppType = bool
// arg:after - const CkXml &
// arg:tag - const char *
- (BOOL)SearchForTag2: (CkoXml *)after 
	tag: (NSString *)tag;

// method: SetBinaryContent
// m_cppType = bool
// arg:data - const CkByteData &
// arg:zipFlag - bool
// arg:encryptFlag - bool
// arg:password - const char *
- (BOOL)SetBinaryContent: (NSData *)data 
	zipFlag: (BOOL)zipFlag 
	encryptFlag: (BOOL)encryptFlag 
	password: (NSString *)password;

// method: SetBinaryContent2
// m_cppType = bool
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
// arg:zipFlag - bool
// arg:encryptFlag - bool
// arg:password - const char *
- (BOOL)SetBinaryContent2: (NSData *)data 
	dataLen: (NSNumber *)dataLen 
	zipFlag: (BOOL)zipFlag 
	encryptFlag: (BOOL)encryptFlag 
	password: (NSString *)password;

// method: SetBinaryContentFromFile
// m_cppType = bool
// arg:filename - const char *
// arg:zipFlag - bool
// arg:encryptFlag - bool
// arg:password - const char *
- (BOOL)SetBinaryContentFromFile: (NSString *)filename 
	zipFlag: (BOOL)zipFlag 
	encryptFlag: (BOOL)encryptFlag 
	password: (NSString *)password;

// method: SortByAttribute
// m_cppType = void
// arg:attrName - const char *
// arg:ascending - long
- (void)SortByAttribute: (NSString *)attrName 
	ascending: (NSNumber *)ascending;

// method: SortByAttributeInt
// m_cppType = void
// arg:attrName - const char *
// arg:ascending - bool
- (void)SortByAttributeInt: (NSString *)attrName 
	ascending: (BOOL)ascending;

// method: SortByContent
// m_cppType = void
// arg:ascending - long
- (void)SortByContent: (NSNumber *)ascending;

// method: SortByTag
// m_cppType = void
// arg:ascending - long
- (void)SortByTag: (NSNumber *)ascending;

// method: SortRecordsByAttribute
// m_cppType = void
// arg:sortTag - const char *
// arg:attrName - const char *
// arg:ascending - long
- (void)SortRecordsByAttribute: (NSString *)sortTag 
	attrName: (NSString *)attrName 
	ascending: (NSNumber *)ascending;

// method: SortRecordsByContent
// m_cppType = void
// arg:sortTag - const char *
// arg:ascending - long
- (void)SortRecordsByContent: (NSString *)sortTag 
	ascending: (NSNumber *)ascending;

// method: SortRecordsByContentInt
// m_cppType = void
// arg:sortTag - const char *
// arg:ascending - bool
- (void)SortRecordsByContentInt: (NSString *)sortTag 
	ascending: (BOOL)ascending;

// method: SwapNode
// m_cppType = bool
// arg:node - const CkXml &
- (BOOL)SwapNode: (CkoXml *)node;

// method: SwapTree
// m_cppType = bool
// arg:tree - const CkXml &
- (BOOL)SwapTree: (CkoXml *)tree;

// method: TagContent
// m_cppType = bool
// arg:tag - const char *
// arg:outStr - CkString &
- (NSString *)TagContent: (NSString *)tag;

// method: TagEquals
// m_cppType = bool
// arg:tag - const char *
- (BOOL)TagEquals: (NSString *)tag;

// method: UnzipContent
// m_cppType = bool
- (BOOL)UnzipContent;

// method: UnzipTree
// m_cppType = bool
- (BOOL)UnzipTree;

// method: UpdateAttribute
// m_cppType = bool
// arg:attrName - const char *
// arg:attrValue - const char *
- (BOOL)UpdateAttribute: (NSString *)attrName 
	attrValue: (NSString *)attrValue;

// method: UpdateAttributeInt
// m_cppType = bool
// arg:attrName - const char *
// arg:value - int
- (BOOL)UpdateAttributeInt: (NSString *)attrName 
	value: (NSNumber *)value;

// method: UpdateChildContent
// m_cppType = void
// arg:tag - const char *
// arg:value - const char *
- (void)UpdateChildContent: (NSString *)tag 
	value: (NSString *)value;

// method: UpdateChildContentInt
// m_cppType = void
// arg:tag - const char *
// arg:value - int
- (void)UpdateChildContentInt: (NSString *)tag 
	value: (NSNumber *)value;

// method: ZipContent
// m_cppType = bool
- (BOOL)ZipContent;

// method: ZipTree
// m_cppType = bool
- (BOOL)ZipTree;


@end
