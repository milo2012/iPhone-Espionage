// Chilkat Objective-C header.
// Generic/internal class name =  MessageSet
// Wrapped Chilkat C++ class name =  CkMessageSet



@interface CkoMessageSet : NSObject {

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

// property getter: HasUids
// m_cppType = bool
// arg:value - bool
- (BOOL)HasUids;

// property setter: HasUids
// m_cppType = bool
// arg:value - bool
- (void)setHasUids: (BOOL)boolVal;

// method: ContainsId
// m_cppType = bool
// arg:id - long
- (BOOL)ContainsId: (NSNumber *)id;

// method: FromCompactString
// m_cppType = bool
// arg:str - const char *
- (BOOL)FromCompactString: (NSString *)str;

// method: GetId
// m_cppType = long
// arg:index - long
- (NSNumber *)GetId: (NSNumber *)index;

// method: InsertId
// m_cppType = void
// arg:id - long
- (void)InsertId: (NSNumber *)id;

// method: RemoveId
// m_cppType = void
// arg:id - long
- (void)RemoveId: (NSNumber *)id;

// method: ToCompactString
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)ToCompactString;

// method: ToString
// m_cppType = void
// arg:outStr - CkString &
- (NSString *)ToString;


@end
