// Chilkat Objective-C header.
// Generic/internal class name =  ZipCrc
// Wrapped Chilkat C++ class name =  CkZipCrc



@interface CkoZipCrc : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// method: BeginStream
// m_cppType = void
- (void)BeginStream;

// method: CalculateCrc
// m_cppType = unsigned long
// arg:byteData - CkByteData &
- (NSNumber *)CalculateCrc: (NSData *)byteData;

// method: EndStream
// m_cppType = unsigned long
- (NSNumber *)EndStream;

// method: FileCrc
// m_cppType = unsigned long
// arg:filename - const char *
- (NSNumber *)FileCrc: (NSString *)filename;

// method: MoreData
// m_cppType = void
// arg:byteData - CkByteData &
- (void)MoreData: (NSData *)byteData;

// method: ToHex
// m_cppType = void
// arg:crc - unsigned long
// arg:outStr - CkString &
- (NSString *)ToHex: (NSNumber *)crc;


@end
