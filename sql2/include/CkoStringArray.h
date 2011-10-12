// Chilkat Objective-C header.
// Generic/internal class name =  StringArray
// Wrapped Chilkat C++ class name =  CkStringArray



@interface CkoStringArray : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Count
// m_cppType = long
- (NSNumber *)Count;

// property getter: Crlf
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Crlf;

// property setter: Crlf
// m_cppType = bool
// arg:newVal - bool
- (void)setCrlf: (BOOL)boolVal;

// property getter: Trim
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Trim;

// property setter: Trim
// m_cppType = bool
// arg:newVal - bool
- (void)setTrim: (BOOL)boolVal;

// property getter: Unique
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Unique;

// property setter: Unique
// m_cppType = bool
// arg:newVal - bool
- (void)setUnique: (BOOL)boolVal;

// method: Append
// m_cppType = void
// arg:str - const char *
- (void)Append: (NSString *)str;

// method: AppendSerialized
// m_cppType = bool
// arg:encodedStr - const char *
- (BOOL)AppendSerialized: (NSString *)encodedStr;

// method: Clear
// m_cppType = void
- (void)Clear;

// method: Contains
// m_cppType = bool
// arg:str - const char *
- (BOOL)Contains: (NSString *)str;

// method: Find
// m_cppType = long
// arg:str - const char *
// arg:firstIndex - long
- (NSNumber *)Find: (NSString *)str 
	firstIndex: (NSNumber *)firstIndex;

// method: FindFirstMatch
// m_cppType = int
// arg:str - const char *
// arg:firstIndex - int
- (NSNumber *)FindFirstMatch: (NSString *)str 
	firstIndex: (NSNumber *)firstIndex;

// method: GetString
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetString: (NSNumber *)index;

// method: GetStringLen
// m_cppType = int
// arg:index - int
- (NSNumber *)GetStringLen: (NSNumber *)index;

// method: InsertAt
// m_cppType = void
// arg:index - long
// arg:str - const char *
- (void)InsertAt: (NSNumber *)index 
	str: (NSString *)str;

// method: LastString
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)LastString;

// method: LoadFromFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadFromFile: (NSString *)filename;

// method: LoadFromText
// m_cppType = void
// arg:str - const char *
- (void)LoadFromText: (NSString *)str;

// method: Pop
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)Pop;

// method: Prepend
// m_cppType = void
// arg:str - const char *
- (void)Prepend: (NSString *)str;

// method: Remove
// m_cppType = void
// arg:str - const char *
- (void)Remove: (NSString *)str;

// method: RemoveAt
// m_cppType = bool
// arg:index - long
- (BOOL)RemoveAt: (NSNumber *)index;

// method: SaveNthToFile
// m_cppType = bool
// arg:index - int
// arg:filename - const char *
- (BOOL)SaveNthToFile: (NSNumber *)index 
	filename: (NSString *)filename;

// method: SaveToFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveToFile: (NSString *)filename;

// method: SaveToText
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)SaveToText;

// method: Serialize
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)Serialize;

// method: Sort
// m_cppType = void
// arg:ascending - bool
- (void)Sort: (BOOL)ascending;

// method: SplitAndAppend
// m_cppType = void
// arg:str - const char *
// arg:boundary - const char *
- (void)SplitAndAppend: (NSString *)str 
	boundary: (NSString *)boundary;

// method: Subtract
// m_cppType = void
// arg:array - CkStringArray &
- (void)Subtract: (CkoStringArray *)array;

// method: Union
// m_cppType = void
// arg:array - CkStringArray &
- (void)Union: (CkoStringArray *)array;


@end
