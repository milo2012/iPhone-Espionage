// Chilkat Objective-C header.
// Generic/internal class name =  Dh
// Wrapped Chilkat C++ class name =  CkDh



@interface CkoDh : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: G
// m_cppType = int
- (NSNumber *)G;

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

// property getter: P
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)P;

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: CreateE
// m_cppType = bool
// arg:numBits - int
// arg:outStr - CkString &
- (NSString *)CreateE: (NSNumber *)numBits;

// method: FindK
// m_cppType = bool
// arg:e - const char *
// arg:outStr - CkString &
- (NSString *)FindK: (NSString *)e;

// method: GenPG
// m_cppType = bool
// arg:numBits - int
// arg:g - int
- (BOOL)GenPG: (NSNumber *)numBits 
	g: (NSNumber *)g;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SetPG
// m_cppType = bool
// arg:p - const char *
// arg:g - int
- (BOOL)SetPG: (NSString *)p 
	g: (NSNumber *)g;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UseKnownPrime
// m_cppType = void
// arg:index - int
- (void)UseKnownPrime: (NSNumber *)index;


@end
