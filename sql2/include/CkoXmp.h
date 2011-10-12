// Chilkat Objective-C header.
// Generic/internal class name =  Xmp
// Wrapped Chilkat C++ class name =  CkXmp

@class CkoXml;
@class CkoStringArray;


@interface CkoXmp : NSObject {

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

// property getter: NumEmbedded
// m_cppType = long
- (NSNumber *)NumEmbedded;

// property getter: StructInnerDescrip
// m_cppType = bool
// arg:val - bool
- (BOOL)StructInnerDescrip;

// property setter: StructInnerDescrip
// m_cppType = bool
// arg:val - bool
- (void)setStructInnerDescrip: (BOOL)boolVal;

// property getter: Version
// m_cppType = CkString &
// arg:outStr - CkString &
- (NSString *)Version;

// method: AddArray
// m_cppType = bool
// arg:xml - CkXml &
// arg:arrType - const char *
// arg:propName - const char *
// arg:values - CkStringArray &
- (BOOL)AddArray: (CkoXml *)xml 
	arrType: (NSString *)arrType 
	propName: (NSString *)propName 
	values: (CkoStringArray *)values;

// method: AddNsMapping
// m_cppType = void
// arg:ns - const char *
// arg:uri - const char *
- (void)AddNsMapping: (NSString *)ns 
	uri: (NSString *)uri;

// method: AddSimpleDate
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
// arg:sysTime - SYSTEMTIME &
- (BOOL)AddSimpleDate: (CkoXml *)xml 
	propName: (NSString *)propName 
	sysTime: (NSDate *)sysTime;

// method: AddSimpleInt
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
// arg:propVal - int
- (BOOL)AddSimpleInt: (CkoXml *)xml 
	propName: (NSString *)propName 
	propVal: (NSNumber *)propVal;

// method: AddSimpleStr
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
// arg:propVal - const char *
- (BOOL)AddSimpleStr: (CkoXml *)xml 
	propName: (NSString *)propName 
	propVal: (NSString *)propVal;

// method: AddStructProp
// m_cppType = bool
// arg:xml - CkXml &
// arg:structName - const char *
// arg:propName - const char *
// arg:propVal - const char *
- (BOOL)AddStructProp: (CkoXml *)xml 
	structName: (NSString *)structName 
	propName: (NSString *)propName 
	propVal: (NSString *)propVal;

// method: Append
// m_cppType = bool
// arg:xml - CkXml &
- (BOOL)Append: (CkoXml *)xml;

// method: DateToString
// m_cppType = bool
// arg:sysTime - SYSTEMTIME &
// arg:outStr - CkString &
- (NSString *)DateToString: (NSDate *)sysTime;

// method: GetArray
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
// arg:array - CkStringArray &
- (BOOL)GetArray: (CkoXml *)xml 
	propName: (NSString *)propName 
	array: (CkoStringArray *)array;

// method: GetEmbedded
// m_cppType = CkXml *
// arg:index - int
- (CkoXml *)GetEmbedded: (NSNumber *)index;

// method: GetSimpleDate
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)GetSimpleDate: (CkoXml *)xml 
	propName: (NSString *)propName;

// method: GetSimpleInt
// m_cppType = int
// arg:xml - CkXml &
// arg:propName - const char *
- (NSNumber *)GetSimpleInt: (CkoXml *)xml 
	propName: (NSString *)propName;

// method: GetSimpleStr
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
// arg:outStr - CkString &
- (NSString *)GetSimpleStr: (CkoXml *)xml 
	propName: (NSString *)propName;

// method: GetStructPropNames
// m_cppType = bool
// arg:xml - CkXml &
// arg:structName - const char *
// arg:array - CkStringArray &
- (BOOL)GetStructPropNames: (CkoXml *)xml 
	structName: (NSString *)structName 
	array: (CkoStringArray *)array;

// method: GetStructValue
// m_cppType = bool
// arg:xml - CkXml &
// arg:structName - const char *
// arg:propName - const char *
// arg:outStr - CkString &
- (NSString *)GetStructValue: (CkoXml *)xml 
	structName: (NSString *)structName 
	propName: (NSString *)propName;

// method: LoadAppFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadAppFile: (NSString *)filename;

// method: LoadFromBuffer
// m_cppType = bool
// arg:byteData - CkByteData &
// arg:ext - const char *
- (BOOL)LoadFromBuffer: (NSData *)byteData 
	ext: (NSString *)ext;

// method: NewXmp
// m_cppType = void
// arg:xmlOut - CkXml &
- (void)NewXmp: (CkoXml *)xmlOut;

// method: RemoveAllEmbedded
// m_cppType = void
- (void)RemoveAllEmbedded;

// method: RemoveArray
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
- (BOOL)RemoveArray: (CkoXml *)xml 
	propName: (NSString *)propName;

// method: RemoveNsMapping
// m_cppType = void
// arg:ns - const char *
- (void)RemoveNsMapping: (NSString *)ns;

// method: RemoveSimple
// m_cppType = bool
// arg:xml - CkXml &
// arg:propName - const char *
- (BOOL)RemoveSimple: (CkoXml *)xml 
	propName: (NSString *)propName;

// method: RemoveStruct
// m_cppType = bool
// arg:xml - CkXml &
// arg:structName - const char *
- (BOOL)RemoveStruct: (CkoXml *)xml 
	structName: (NSString *)structName;

// method: RemoveStructProp
// m_cppType = bool
// arg:xml - CkXml &
// arg:structName - const char *
// arg:propName - const char *
- (BOOL)RemoveStructProp: (CkoXml *)xml 
	structName: (NSString *)structName 
	propName: (NSString *)propName;

// method: SaveAppFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveAppFile: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveToBuffer
// m_cppType = bool
// arg:byteData - CkByteData &
- (BOOL)SaveToBuffer: (NSData *)byteData;

// method: StringToDate
// m_cppType = bool
// arg:str - const char *
// arg:outSysTime - SYSTEMTIME &
- (NSDate *)StringToDate: (NSString *)str;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;


@end
