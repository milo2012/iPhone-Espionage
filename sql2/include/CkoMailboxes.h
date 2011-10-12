// Chilkat Objective-C header.
// Generic/internal class name =  Mailboxes
// Wrapped Chilkat C++ class name =  CkMailboxes



@interface CkoMailboxes : NSObject {

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

// method: GetName
// m_cppType = bool
// arg:index - long
// arg:outStrName - CkString &
- (NSString *)GetName: (NSNumber *)index;

// method: HasInferiors
// m_cppType = bool
// arg:index - long
- (BOOL)HasInferiors: (NSNumber *)index;

// method: IsMarked
// m_cppType = bool
// arg:index - long
- (BOOL)IsMarked: (NSNumber *)index;

// method: IsSelectable
// m_cppType = bool
// arg:index - long
- (BOOL)IsSelectable: (NSNumber *)index;


@end
