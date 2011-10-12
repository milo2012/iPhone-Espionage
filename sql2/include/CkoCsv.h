// Chilkat Objective-C header.
// Generic/internal class name =  Csv
// Wrapped Chilkat C++ class name =  CkCsv



@interface CkoCsv : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Crlf
// m_cppType = bool
// arg:newVal - bool
- (BOOL)Crlf;

// property setter: Crlf
// m_cppType = bool
// arg:newVal - bool
- (void)setCrlf: (BOOL)boolVal;

// property getter: Delimiter
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Delimiter;

// property setter: Delimiter
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setDelimiter: (NSString *)input;

// property getter: HasColumnNames
// m_cppType = bool
// arg:newVal - bool
- (BOOL)HasColumnNames;

// property setter: HasColumnNames
// m_cppType = bool
// arg:newVal - bool
- (void)setHasColumnNames: (BOOL)boolVal;

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

// property getter: NumColumns
// m_cppType = int
- (NSNumber *)NumColumns;

// property getter: NumRows
// m_cppType = int
- (NSNumber *)NumRows;

// method: GetCell
// m_cppType = bool
// arg:row - int
// arg:col - int
// arg:outStr - CkString &
- (NSString *)GetCell: (NSNumber *)row 
	col: (NSNumber *)col;

// method: GetColumnName
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetColumnName: (NSNumber *)index;

// method: GetIndex
// m_cppType = int
// arg:columnName - const char *
- (NSNumber *)GetIndex: (NSString *)columnName;

// method: GetNumCols
// m_cppType = int
// arg:row - int
- (NSNumber *)GetNumCols: (NSNumber *)row;

// method: LoadFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)LoadFile: (NSString *)filename;

// method: LoadFile2
// m_cppType = bool
// arg:filename - const char *
// arg:charset - const char *
- (BOOL)LoadFile2: (NSString *)filename 
	charset: (NSString *)charset;

// method: LoadFromString
// m_cppType = bool
// arg:csvData - const char *
- (BOOL)LoadFromString: (NSString *)csvData;

// method: SaveFile
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveFile: (NSString *)filename;

// method: SaveFile2
// m_cppType = bool
// arg:filename - const char *
// arg:charset - const char *
- (BOOL)SaveFile2: (NSString *)filename 
	charset: (NSString *)charset;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveToString
// m_cppType = bool
// arg:outStr - CkString &
- (NSString *)SaveToString;

// method: SetCell
// m_cppType = bool
// arg:row - int
// arg:col - int
// arg:content - const char *
- (BOOL)SetCell: (NSNumber *)row 
	col: (NSNumber *)col 
	content: (NSString *)content;

// method: SetColumnName
// m_cppType = bool
// arg:index - int
// arg:columnName - const char *
- (BOOL)SetColumnName: (NSNumber *)index 
	columnName: (NSString *)columnName;


@end
