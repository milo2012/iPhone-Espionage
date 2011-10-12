// Chilkat Objective-C header.
// Generic/internal class name =  Bounce
// Wrapped Chilkat C++ class name =  CkBounce

@class CkoEmail;
@class CkoString;


@interface CkoBounce : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: BounceAddress
// m_cppType = CkString &
// arg:bouncedEmailAddr - CkString &
- (NSString *)BounceAddress;

// property getter: BounceData
// m_cppType = CkString &
// arg:mailBodyText - CkString &
- (NSString *)BounceData;

// property getter: BounceType
// m_cppType = int
- (NSNumber *)BounceType;

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

// property getter: Version
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Version;

// method: ExamineEmail
// m_cppType = bool
// arg:email - const CkEmail &
- (BOOL)ExamineEmail: (CkoEmail *)email;

// method: ExamineEml
// m_cppType = bool
// arg:emlFilename - const char *
- (BOOL)ExamineEml: (NSString *)emlFilename;

// method: ExamineMime
// m_cppType = bool
// arg:mimeString - const CkString &
- (BOOL)ExamineMime: (CkoString *)mimeString;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;


@end
