// Chilkat Objective-C header.
// Generic/internal class name =  Email
// Wrapped Chilkat C++ class name =  CkEmail

@class CkoCert;
@class CkoStringArray;
@class CkoMime;
@class CkoPrivateKey;


@interface CkoEmail : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property getter: Body
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Body;

// property setter: Body
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setBody: (NSString *)input;

// property getter: BounceAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)BounceAddress;

// property setter: BounceAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setBounceAddress: (NSString *)input;

// property getter: Charset
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Charset;

// property setter: Charset
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setCharset: (NSString *)input;

// property getter: Decrypted
// m_cppType = bool
- (BOOL)Decrypted;

// property getter: EmailDate
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)EmailDate;

// property setter: EmailDate
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (void)setEmailDate: (NSDate *)dateVal;

// property getter: EncryptedBy
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)EncryptedBy;

// property getter: FileDistList
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)FileDistList;

// property setter: FileDistList
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setFileDistList: (NSString *)input;

// property getter: From
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)From;

// property setter: From
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setFrom: (NSString *)input;

// property getter: FromAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)FromAddress;

// property setter: FromAddress
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setFromAddress: (NSString *)input;

// property getter: FromName
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)FromName;

// property setter: FromName
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setFromName: (NSString *)input;

// property getter: Header
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Header;

// property getter: Language
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Language;

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

// property getter: LocalDate
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (NSDate *)LocalDate;

// property setter: LocalDate
// m_cppType = SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
// arg:sysTime - SYSTEMTIME &
- (void)setLocalDate: (NSDate *)dateVal;

// property getter: Mailer
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Mailer;

// property setter: Mailer
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setMailer: (NSString *)input;

// property getter: NumAlternatives
// m_cppType = long
- (NSNumber *)NumAlternatives;

// property getter: NumAttachedMessages
// m_cppType = long
- (NSNumber *)NumAttachedMessages;

// property getter: NumAttachments
// m_cppType = long
- (NSNumber *)NumAttachments;

// property getter: NumBcc
// m_cppType = long
- (NSNumber *)NumBcc;

// property getter: NumCC
// m_cppType = long
- (NSNumber *)NumCC;

// property getter: NumDaysOld
// m_cppType = int
- (NSNumber *)NumDaysOld;

// property getter: NumHeaderFields
// m_cppType = long
- (NSNumber *)NumHeaderFields;

// property getter: NumRelatedItems
// m_cppType = long
- (NSNumber *)NumRelatedItems;

// property getter: NumReplacePatterns
// m_cppType = long
- (NSNumber *)NumReplacePatterns;

// property getter: NumReports
// m_cppType = int
- (NSNumber *)NumReports;

// property getter: NumTo
// m_cppType = long
- (NSNumber *)NumTo;

// property getter: OverwriteExisting
// m_cppType = bool
// arg:newVal - bool
- (BOOL)OverwriteExisting;

// property setter: OverwriteExisting
// m_cppType = bool
// arg:newVal - bool
- (void)setOverwriteExisting: (BOOL)boolVal;

// property getter: Pkcs7CryptAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)Pkcs7CryptAlg;

// property setter: Pkcs7CryptAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setPkcs7CryptAlg: (NSString *)input;

// property getter: Pkcs7KeyLength
// m_cppType = int
// arg:numBits - int
- (NSNumber *)Pkcs7KeyLength;

// property setter: Pkcs7KeyLength
// m_cppType = int
// arg:numBits - int
- (void)setPkcs7KeyLength: (NSNumber *)intVal;

// property getter: PreferredCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)PreferredCharset;

// property setter: PreferredCharset
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setPreferredCharset: (NSString *)input;

// property getter: PrependHeaders
// m_cppType = bool
// arg:newVal - bool
- (BOOL)PrependHeaders;

// property setter: PrependHeaders
// m_cppType = bool
// arg:newVal - bool
- (void)setPrependHeaders: (BOOL)boolVal;

// property getter: ReceivedEncrypted
// m_cppType = bool
- (BOOL)ReceivedEncrypted;

// property getter: ReceivedSigned
// m_cppType = bool
- (BOOL)ReceivedSigned;

// property getter: ReplyTo
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)ReplyTo;

// property setter: ReplyTo
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setReplyTo: (NSString *)input;

// property getter: ReturnReceipt
// m_cppType = bool
// arg:newVal - bool
- (BOOL)ReturnReceipt;

// property setter: ReturnReceipt
// m_cppType = bool
// arg:newVal - bool
- (void)setReturnReceipt: (BOOL)boolVal;

// property getter: SendEncrypted
// m_cppType = bool
// arg:newVal - bool
- (BOOL)SendEncrypted;

// property setter: SendEncrypted
// m_cppType = bool
// arg:newVal - bool
- (void)setSendEncrypted: (BOOL)boolVal;

// property getter: SendSigned
// m_cppType = bool
// arg:newVal - bool
- (BOOL)SendSigned;

// property setter: SendSigned
// m_cppType = bool
// arg:newVal - bool
- (void)setSendSigned: (BOOL)boolVal;

// property getter: SignaturesValid
// m_cppType = bool
- (BOOL)SignaturesValid;

// property getter: SignedBy
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)SignedBy;

// property getter: SigningHashAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (NSString *)SigningHashAlg;

// property setter: SigningHashAlg
// m_cppType = CkString &
// arg:str - CkString &
// arg:newVal - const char *
- (void)setSigningHashAlg: (NSString *)input;

// property getter: Size
// m_cppType = long
- (NSNumber *)Size;

// property getter: Subject
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (NSString *)Subject;

// property setter: Subject
// m_cppType = CkString &
// arg:str - CkString &
// arg:str - const char *
- (void)setSubject: (NSString *)input;

// property getter: Uidl
// m_cppType = CkString &
// arg:str - CkString &
- (NSString *)Uidl;

// property getter: UnpackUseRelPaths
// m_cppType = bool
// arg:newVal - bool
- (BOOL)UnpackUseRelPaths;

// property setter: UnpackUseRelPaths
// m_cppType = bool
// arg:newVal - bool
- (void)setUnpackUseRelPaths: (BOOL)boolVal;

// property getter: VerboseLogging
// m_cppType = bool
// arg:newVal - bool
- (BOOL)VerboseLogging;

// property setter: VerboseLogging
// m_cppType = bool
// arg:newVal - bool
- (void)setVerboseLogging: (BOOL)boolVal;

// method: AddAttachmentHeader
// m_cppType = void
// arg:index - int
// arg:fieldName - const char *
// arg:fieldValue - const char *
- (void)AddAttachmentHeader: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;

// method: AddBcc
// m_cppType = bool
// arg:friendlyName - const char *
// arg:emailAddress - const char *
- (BOOL)AddBcc: (NSString *)friendlyName 
	emailAddress: (NSString *)emailAddress;

// method: AddCC
// m_cppType = bool
// arg:friendlyName - const char *
// arg:emailAddress - const char *
- (BOOL)AddCC: (NSString *)friendlyName 
	emailAddress: (NSString *)emailAddress;

// method: AddDataAttachment
// m_cppType = bool
// arg:fileName - const char *
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
- (BOOL)AddDataAttachment: (NSString *)fileName 
	data: (NSData *)data 
	dataLen: (NSNumber *)dataLen;

// method: AddDataAttachment2
// m_cppType = bool
// arg:fileName - const char *
// arg:content - CkByteData &
// arg:contentType - const char *
- (BOOL)AddDataAttachment2: (NSString *)fileName 
	content: (NSData *)content 
	contentType: (NSString *)contentType;

// method: AddEncryptCert
// m_cppType = bool
// arg:cert - CkCert &
- (BOOL)AddEncryptCert: (CkoCert *)cert;

// method: AddFileAttachment
// m_cppType = bool
// arg:fileName - const char *
// arg:outStrContentType - CkString &
- (NSString *)AddFileAttachment: (NSString *)fileName;

// method: AddFileAttachment2
// m_cppType = bool
// arg:fileName - const char *
// arg:contentType - const char *
- (BOOL)AddFileAttachment2: (NSString *)fileName 
	contentType: (NSString *)contentType;

// method: AddHeaderField
// m_cppType = void
// arg:fieldName - const char *
// arg:fieldValue - const char *
- (void)AddHeaderField: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;

// method: AddHeaderField2
// m_cppType = void
// arg:fieldName - const char *
// arg:fieldValue - const char *
- (void)AddHeaderField2: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;

// method: AddHtmlAlternativeBody
// m_cppType = bool
// arg:body - const char *
- (BOOL)AddHtmlAlternativeBody: (NSString *)body;

// method: AddMultipleBcc
// m_cppType = bool
// arg:commaSeparatedAddresses - const char *
- (BOOL)AddMultipleBcc: (NSString *)commaSeparatedAddresses;

// method: AddMultipleCC
// m_cppType = bool
// arg:commaSeparatedAddresses - const char *
- (BOOL)AddMultipleCC: (NSString *)commaSeparatedAddresses;

// method: AddMultipleTo
// m_cppType = bool
// arg:commaSeparatedAddresses - const char *
- (BOOL)AddMultipleTo: (NSString *)commaSeparatedAddresses;

// method: AddPfxSourceData
// m_cppType = bool
// arg:pfxData - CkByteData &
// arg:password - const char *
- (BOOL)AddPfxSourceData: (NSData *)pfxData 
	password: (NSString *)password;

// method: AddPfxSourceFile
// m_cppType = bool
// arg:pfxFilePath - const char *
// arg:password - const char *
- (BOOL)AddPfxSourceFile: (NSString *)pfxFilePath 
	password: (NSString *)password;

// method: AddPlainTextAlternativeBody
// m_cppType = bool
// arg:body - const char *
- (BOOL)AddPlainTextAlternativeBody: (NSString *)body;

// method: AddRelatedData
// m_cppType = bool
// arg:nameInHtml - const char *
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
// arg:outStrContentId - CkString &
- (NSString *)AddRelatedData: (NSString *)nameInHtml 
	data: (NSData *)data 
	dataLen: (NSNumber *)dataLen;

// method: AddRelatedData2
// m_cppType = void
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
// arg:fileNameInHtml - const char *
- (void)AddRelatedData2: (NSData *)data 
	dataLen: (NSNumber *)dataLen 
	fileNameInHtml: (NSString *)fileNameInHtml;

// method: AddRelatedFile
// m_cppType = bool
// arg:fileName - const char *
// arg:outStrContentID - CkString &
- (NSString *)AddRelatedFile: (NSString *)fileName;

// method: AddRelatedFile2
// m_cppType = bool
// arg:fileNameOnDisk - const char *
// arg:filenameInHtml - const char *
- (BOOL)AddRelatedFile2: (NSString *)fileNameOnDisk 
	filenameInHtml: (NSString *)filenameInHtml;

// method: AddRelatedHeader
// m_cppType = void
// arg:index - int
// arg:fieldName - const char *
// arg:fieldValue - const char *
- (void)AddRelatedHeader: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;

// method: AddRelatedString
// m_cppType = bool
// arg:nameInHtml - const char *
// arg:str - const char *
// arg:charset - const char *
// arg:outCid - CkString &
- (NSString *)AddRelatedString: (NSString *)nameInHtml 
	str: (NSString *)str 
	charset: (NSString *)charset;

// method: AddRelatedString2
// m_cppType = void
// arg:str - const char *
// arg:charset - const char *
// arg:filenameInHtml - const char *
- (void)AddRelatedString2: (NSString *)str 
	charset: (NSString *)charset 
	filenameInHtml: (NSString *)filenameInHtml;

// method: AddStringAttachment
// m_cppType = bool
// arg:fileName - const char *
// arg:str - const char *
- (BOOL)AddStringAttachment: (NSString *)fileName 
	str: (NSString *)str;

// method: AddStringAttachment2
// m_cppType = bool
// arg:fileName - const char *
// arg:str - const char *
// arg:charset - const char *
- (BOOL)AddStringAttachment2: (NSString *)fileName 
	str: (NSString *)str 
	charset: (NSString *)charset;

// method: AddTo
// m_cppType = bool
// arg:friendlyName - const char *
// arg:emailAddress - const char *
- (BOOL)AddTo: (NSString *)friendlyName 
	emailAddress: (NSString *)emailAddress;

// method: AesDecrypt
// m_cppType = bool
// arg:password - const char *
- (BOOL)AesDecrypt: (NSString *)password;

// method: AesEncrypt
// m_cppType = bool
// arg:password - const char *
- (BOOL)AesEncrypt: (NSString *)password;

// method: AppendToBody
// m_cppType = void
// arg:str - const char *
- (void)AppendToBody: (NSString *)str;

// method: AspUnpack
// m_cppType = bool
// arg:prefix - const char *
// arg:saveDir - const char *
// arg:urlPath - const char *
// arg:cleanFiles - bool
- (BOOL)AspUnpack: (NSString *)prefix 
	saveDir: (NSString *)saveDir 
	urlPath: (NSString *)urlPath 
	cleanFiles: (BOOL)cleanFiles;

// method: AspUnpack2
// m_cppType = bool
// arg:prefix - const char *
// arg:saveDir - const char *
// arg:urlPath - const char *
// arg:cleanFiles - bool
// arg:outHtml - CkByteData &
- (NSData *)AspUnpack2: (NSString *)prefix 
	saveDir: (NSString *)saveDir 
	urlPath: (NSString *)urlPath 
	cleanFiles: (BOOL)cleanFiles;

// method: AttachMessage
// m_cppType = bool
// arg:mimeBytes - CkByteData &
- (BOOL)AttachMessage: (NSData *)mimeBytes;

// method: BEncodeBytes
// m_cppType = bool
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
// arg:charset - const char *
// arg:outEncodedStr - CkString &
- (NSString *)BEncodeBytes: (NSData *)data 
	dataLen: (NSNumber *)dataLen 
	charset: (NSString *)charset;

// method: BEncodeString
// m_cppType = bool
// arg:str - const char *
// arg:charset - const char *
// arg:outEncodedStr - CkString &
- (NSString *)BEncodeString: (NSString *)str 
	charset: (NSString *)charset;

// method: ClearBcc
// m_cppType = void
- (void)ClearBcc;

// method: ClearCC
// m_cppType = void
- (void)ClearCC;

// method: ClearEncryptCerts
// m_cppType = void
- (void)ClearEncryptCerts;

// method: ClearTo
// m_cppType = void
- (void)ClearTo;

// method: Clone
// m_cppType = CkEmail *
- (CkoEmail *)Clone;

// method: ComputeGlobalKey
// m_cppType = bool
// arg:encoding - const char *
// arg:bFold - bool
// arg:outStr - CkString &
- (NSString *)ComputeGlobalKey: (NSString *)encoding 
	bFold: (BOOL)bFold;

// method: CreateDsn
// m_cppType = CkEmail *
// arg:explanation - const char *
// arg:xmlDeliveryStatus - const char *
// arg:bHeaderOnly - bool
- (CkoEmail *)CreateDsn: (NSString *)explanation 
	xmlDeliveryStatus: (NSString *)xmlDeliveryStatus 
	bHeaderOnly: (BOOL)bHeaderOnly;

// method: CreateForward
// m_cppType = CkEmail *
- (CkoEmail *)CreateForward;

// method: CreateMdn
// m_cppType = CkEmail *
// arg:explanation - const char *
// arg:xmlMdnFields - const char *
// arg:bHeaderOnly - bool
- (CkoEmail *)CreateMdn: (NSString *)explanation 
	xmlMdnFields: (NSString *)xmlMdnFields 
	bHeaderOnly: (BOOL)bHeaderOnly;

// method: CreateReply
// m_cppType = CkEmail *
- (CkoEmail *)CreateReply;

// method: CreateTempMht
// m_cppType = bool
// arg:inFilename - const char *
// arg:tempMhtFilenameInOut - CkString &
- (BOOL)CreateTempMht: (NSString *)inFilename 
	tempMhtFilenameInOut: (NSString *)tempMhtFilenameInOut;

// method: DropAttachments
// m_cppType = void
- (void)DropAttachments;

// method: DropRelatedItem
// m_cppType = void
// arg:index - long
- (void)DropRelatedItem: (NSNumber *)index;

// method: DropRelatedItems
// m_cppType = void
- (void)DropRelatedItems;

// method: DropSingleAttachment
// m_cppType = bool
// arg:index - long
- (BOOL)DropSingleAttachment: (NSNumber *)index;

// method: GenerateFilename
// m_cppType = void
// arg:outStrFilename - CkString &
- (NSString *)GenerateFilename;

// method: GetAltHeaderField
// m_cppType = bool
// arg:index - int
// arg:fieldName - const char *
// arg:outStr - CkString &
- (NSString *)GetAltHeaderField: (NSNumber *)index 
	fieldName: (NSString *)fieldName;

// method: GetAlternativeBody
// m_cppType = bool
// arg:index - long
// arg:outStrBody - CkString &
- (NSString *)GetAlternativeBody: (NSNumber *)index;

// method: GetAlternativeBodyByContentType
// m_cppType = bool
// arg:contentType - const char *
// arg:outStr - CkString &
- (NSString *)GetAlternativeBodyByContentType: (NSString *)contentType;

// method: GetAlternativeContentType
// m_cppType = bool
// arg:index - long
// arg:outStrContentType - CkString &
- (NSString *)GetAlternativeContentType: (NSNumber *)index;

// method: GetAttachedMessage
// m_cppType = CkEmail *
// arg:index - long
- (CkoEmail *)GetAttachedMessage: (NSNumber *)index;

// method: GetAttachedMessageFilename
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetAttachedMessageFilename: (NSNumber *)index;

// method: GetAttachmentContentID
// m_cppType = bool
// arg:index - long
// arg:outStrContentID - CkString &
- (NSString *)GetAttachmentContentID: (NSNumber *)index;

// method: GetAttachmentContentType
// m_cppType = bool
// arg:index - long
// arg:outStrContentType - CkString &
- (NSString *)GetAttachmentContentType: (NSNumber *)index;

// method: GetAttachmentData
// m_cppType = bool
// arg:index - long
// arg:outData - CkByteData &
- (NSData *)GetAttachmentData: (NSNumber *)index;

// method: GetAttachmentFilename
// m_cppType = bool
// arg:index - long
// arg:outStrFilename - CkString &
- (NSString *)GetAttachmentFilename: (NSNumber *)index;

// method: GetAttachmentHeader
// m_cppType = bool
// arg:index - long
// arg:fieldName - const char *
// arg:outFieldValue - CkString &
- (NSString *)GetAttachmentHeader: (NSNumber *)index 
	fieldName: (NSString *)fieldName;

// method: GetAttachmentSize
// m_cppType = long
// arg:index - long
- (NSNumber *)GetAttachmentSize: (NSNumber *)index;

// method: GetAttachmentString
// m_cppType = bool
// arg:index - long
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)GetAttachmentString: (NSNumber *)index 
	charset: (NSString *)charset;

// method: GetAttachmentStringCrLf
// m_cppType = bool
// arg:index - long
// arg:charset - const char *
// arg:outStrData - CkString &
- (NSString *)GetAttachmentStringCrLf: (NSNumber *)index 
	charset: (NSString *)charset;

// method: GetBcc
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetBcc: (NSNumber *)index;

// method: GetBccAddr
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetBccAddr: (NSNumber *)index;

// method: GetBccName
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetBccName: (NSNumber *)index;

// method: GetCC
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetCC: (NSNumber *)index;

// method: GetCcAddr
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetCcAddr: (NSNumber *)index;

// method: GetCcName
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetCcName: (NSNumber *)index;

// method: GetDeliveryStatusInfo
// m_cppType = bool
// arg:fieldName - const char *
// arg:outFieldValue - CkString &
- (NSString *)GetDeliveryStatusInfo: (NSString *)fieldName;

// method: GetDsnFinalRecipients
// m_cppType = CkStringArray *
- (CkoStringArray *)GetDsnFinalRecipients;

// method: GetEncryptCert
// m_cppType = CkCert *
- (CkoCert *)GetEncryptCert;

// method: GetEncryptedByCert
// m_cppType = CkCert *
- (CkoCert *)GetEncryptedByCert;

// method: GetFileContent
// m_cppType = bool
// arg:filename - const char *
// arg:outData - CkByteData &
- (NSData *)GetFileContent: (NSString *)filename;

// method: GetHeaderField
// m_cppType = bool
// arg:fieldName - const char *
// arg:outStrFieldData - CkString &
- (NSString *)GetHeaderField: (NSString *)fieldName;

// method: GetHeaderFieldName
// m_cppType = bool
// arg:index - long
// arg:outStrFieldName - CkString &
- (NSString *)GetHeaderFieldName: (NSNumber *)index;

// method: GetHeaderFieldValue
// m_cppType = bool
// arg:index - long
// arg:outStrFieldValue - CkString &
- (NSString *)GetHeaderFieldValue: (NSNumber *)index;

// method: GetHtmlBody
// m_cppType = bool
// arg:outStrBody - CkString &
- (NSString *)GetHtmlBody;

// method: GetImapUid
// m_cppType = int
- (NSNumber *)GetImapUid;

// method: GetLinkedDomains
// m_cppType = void
// arg:array - CkStringArray &
- (void)GetLinkedDomains: (CkoStringArray *)array;

// method: GetMbHeaderField
// m_cppType = bool
// arg:fieldName - const char *
// arg:outData - CkByteData &
- (NSData *)GetMbHeaderField: (NSString *)fieldName;

// method: GetMbHeaderField2
// m_cppType = bool
// arg:charset - const char *
// arg:fieldName - const char *
// arg:outData - CkByteData &
- (NSData *)GetMbHeaderField2: (NSString *)charset 
	fieldName: (NSString *)fieldName;

// method: GetMbHtmlBody
// m_cppType = bool
// arg:charset - const char *
// arg:outData - CkByteData &
- (NSData *)GetMbHtmlBody: (NSString *)charset;

// method: GetMbPlainTextBody
// m_cppType = bool
// arg:charset - const char *
// arg:outData - CkByteData &
- (NSData *)GetMbPlainTextBody: (NSString *)charset;

// method: GetMime
// m_cppType = void
// arg:outStrMime - CkString &
- (NSString *)GetMime;

// method: GetMimeBinary
// m_cppType = bool
// arg:outBytes - CkByteData &
- (NSData *)GetMimeBinary;

// method: GetMimeObject
// m_cppType = CkMime *
- (CkoMime *)GetMimeObject;

// method: GetPlainTextBody
// m_cppType = bool
// arg:outStrBody - CkString &
- (NSString *)GetPlainTextBody;

// method: GetRelatedContentID
// m_cppType = bool
// arg:index - long
// arg:outStrContentID - CkString &
- (NSString *)GetRelatedContentID: (NSNumber *)index;

// method: GetRelatedContentLocation
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetRelatedContentLocation: (NSNumber *)index;

// method: GetRelatedContentType
// m_cppType = bool
// arg:index - long
// arg:outStrContentType - CkString &
- (NSString *)GetRelatedContentType: (NSNumber *)index;

// method: GetRelatedData
// m_cppType = bool
// arg:index - long
// arg:outBuffer - CkByteData &
- (NSData *)GetRelatedData: (NSNumber *)index;

// method: GetRelatedFilename
// m_cppType = bool
// arg:index - long
// arg:outStrFilename - CkString &
- (NSString *)GetRelatedFilename: (NSNumber *)index;

// method: GetRelatedString
// m_cppType = bool
// arg:index - long
// arg:charset - const char *
// arg:outStrData - CkString &
- (NSString *)GetRelatedString: (NSNumber *)index 
	charset: (NSString *)charset;

// method: GetRelatedStringCrLf
// m_cppType = bool
// arg:index - long
// arg:charset - const char *
// arg:outStr - CkString &
- (NSString *)GetRelatedStringCrLf: (NSNumber *)index 
	charset: (NSString *)charset;

// method: GetReplacePattern
// m_cppType = bool
// arg:index - long
// arg:outStrPattern - CkString &
- (NSString *)GetReplacePattern: (NSNumber *)index;

// method: GetReplaceString
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetReplaceString: (NSNumber *)index;

// method: GetReplaceString2
// m_cppType = bool
// arg:pattern - const char *
// arg:outStr - CkString &
- (NSString *)GetReplaceString2: (NSString *)pattern;

// method: GetReport
// m_cppType = bool
// arg:index - int
// arg:outStr - CkString &
- (NSString *)GetReport: (NSNumber *)index;

// method: GetSignedByCert
// m_cppType = CkCert *
- (CkoCert *)GetSignedByCert;

// method: GetSigningCert
// m_cppType = CkCert *
- (CkoCert *)GetSigningCert;

// method: GetTo
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetTo: (NSNumber *)index;

// method: GetToAddr
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetToAddr: (NSNumber *)index;

// method: GetToName
// m_cppType = bool
// arg:index - long
// arg:outStr - CkString &
- (NSString *)GetToName: (NSNumber *)index;

// method: GetXml
// m_cppType = void
// arg:outStrXml - CkString &
- (NSString *)GetXml;

// method: HasHeaderMatching
// m_cppType = bool
// arg:fieldName - const char *
// arg:valuePattern - const char *
// arg:caseInsensitive - bool
- (BOOL)HasHeaderMatching: (NSString *)fieldName 
	valuePattern: (NSString *)valuePattern 
	caseInsensitive: (BOOL)caseInsensitive;

// method: HasHtmlBody
// m_cppType = bool
- (BOOL)HasHtmlBody;

// method: HasPlainTextBody
// m_cppType = bool
- (BOOL)HasPlainTextBody;

// method: IsMultipartReport
// m_cppType = bool
- (BOOL)IsMultipartReport;

// method: LoadEml
// m_cppType = bool
// arg:mimeFilename - const char *
- (BOOL)LoadEml: (NSString *)mimeFilename;

// method: LoadXml
// m_cppType = bool
// arg:xmlFilename - const char *
- (BOOL)LoadXml: (NSString *)xmlFilename;

// method: LoadXmlString
// m_cppType = bool
// arg:xmlStr - const char *
- (BOOL)LoadXmlString: (NSString *)xmlStr;

// method: QEncodeBytes
// m_cppType = bool
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
// arg:charset - const char *
// arg:outEncodedStr - CkString &
- (NSString *)QEncodeBytes: (NSData *)data 
	dataLen: (NSNumber *)dataLen 
	charset: (NSString *)charset;

// method: QEncodeString
// m_cppType = bool
// arg:str - const char *
// arg:charset - const char *
// arg:outEncodedStr - CkString &
- (NSString *)QEncodeString: (NSString *)str 
	charset: (NSString *)charset;

// method: RemoveAttachedMessage
// m_cppType = void
// arg:index - long
- (void)RemoveAttachedMessage: (NSNumber *)index;

// method: RemoveAttachedMessages
// m_cppType = void
- (void)RemoveAttachedMessages;

// method: RemoveAttachmentPaths
// m_cppType = void
- (void)RemoveAttachmentPaths;

// method: RemoveHeaderField
// m_cppType = void
// arg:fieldName - const char *
- (void)RemoveHeaderField: (NSString *)fieldName;

// method: RemoveHtmlAlternative
// m_cppType = void
- (void)RemoveHtmlAlternative;

// method: RemovePlainTextAlternative
// m_cppType = void
- (void)RemovePlainTextAlternative;

// method: SaveAllAttachments
// m_cppType = bool
// arg:directory - const char *
- (BOOL)SaveAllAttachments: (NSString *)directory;

// method: SaveAttachedFile
// m_cppType = bool
// arg:index - long
// arg:directory - const char *
- (BOOL)SaveAttachedFile: (NSNumber *)index 
	directory: (NSString *)directory;

// method: SaveEml
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveEml: (NSString *)filename;

// method: SaveLastError
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveLastError: (NSString *)filename;

// method: SaveRelatedItem
// m_cppType = bool
// arg:index - long
// arg:directory - const char *
- (BOOL)SaveRelatedItem: (NSNumber *)index 
	directory: (NSString *)directory;

// method: SaveXml
// m_cppType = bool
// arg:filename - const char *
- (BOOL)SaveXml: (NSString *)filename;

// method: SetAttachmentCharset
// m_cppType = bool
// arg:index - int
// arg:charset - const char *
- (BOOL)SetAttachmentCharset: (NSNumber *)index 
	charset: (NSString *)charset;

// method: SetAttachmentDisposition
// m_cppType = bool
// arg:index - int
// arg:disposition - const char *
- (BOOL)SetAttachmentDisposition: (NSNumber *)index 
	disposition: (NSString *)disposition;

// method: SetAttachmentFilename
// m_cppType = bool
// arg:index - long
// arg:filename - const char *
- (BOOL)SetAttachmentFilename: (NSNumber *)index 
	filename: (NSString *)filename;

// method: SetEncryptCert
// m_cppType = bool
// arg:cert - const CkCert &
- (BOOL)SetEncryptCert: (CkoCert *)cert;

// method: SetFromMimeBytes
// m_cppType = bool
// arg:mimeBytes - CkByteData &
- (BOOL)SetFromMimeBytes: (NSData *)mimeBytes;

// method: SetFromMimeObject
// m_cppType = bool
// arg:mime - CkMime &
- (BOOL)SetFromMimeObject: (CkoMime *)mime;

// method: SetFromMimeText
// m_cppType = bool
// arg:mimeText - const char *
- (BOOL)SetFromMimeText: (NSString *)mimeText;

// method: SetFromMimeText2
// m_cppType = bool
// arg:mimeText - const char *
// arg:numBytes - int
- (BOOL)SetFromMimeText2: (NSString *)mimeText 
	numBytes: (NSNumber *)numBytes;

// method: SetFromXmlText
// m_cppType = bool
// arg:xmlStr - const char *
- (BOOL)SetFromXmlText: (NSString *)xmlStr;

// method: SetHtmlBody
// m_cppType = void
// arg:html - const char *
- (void)SetHtmlBody: (NSString *)html;

// method: SetMbHtmlBody
// m_cppType = bool
// arg:charset - const char *
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
- (BOOL)SetMbHtmlBody: (NSString *)charset 
	data: (NSData *)data 
	dataLen: (NSNumber *)dataLen;

// method: SetMbPlainTextBody
// m_cppType = bool
// arg:charset - const char *
// arg:data - const unsigned char *
// arg:dataLen - unsigned long
- (BOOL)SetMbPlainTextBody: (NSString *)charset 
	data: (NSData *)data 
	dataLen: (NSNumber *)dataLen;

// method: SetReplacePattern
// m_cppType = bool
// arg:pattern - const char *
// arg:replaceString - const char *
- (BOOL)SetReplacePattern: (NSString *)pattern 
	replaceString: (NSString *)replaceString;

// method: SetSigningCert
// m_cppType = bool
// arg:cert - const CkCert &
- (BOOL)SetSigningCert: (CkoCert *)cert;

// method: SetSigningCert2
// m_cppType = bool
// arg:cert - const CkCert &
// arg:key - CkPrivateKey &
- (BOOL)SetSigningCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;

// method: SetTextBody
// m_cppType = void
// arg:bodyText - const char *
// arg:contentType - const char *
- (void)SetTextBody: (NSString *)bodyText 
	contentType: (NSString *)contentType;

// method: TestFilter
// m_cppType = bool
// arg:expression - const char *
- (BOOL)TestFilter: (NSString *)expression;

// method: UidlEquals
// m_cppType = bool
// arg:e - const CkEmail &
- (BOOL)UidlEquals: (CkoEmail *)e;

// method: UnSpamify
// m_cppType = void
- (void)UnSpamify;

// method: UnlockComponent
// m_cppType = bool
// arg:unlockCode - const char *
- (BOOL)UnlockComponent: (NSString *)unlockCode;

// method: UnpackHtml
// m_cppType = bool
// arg:unpackDir - const char *
// arg:htmlFilename - const char *
// arg:partsSubdir - const char *
- (BOOL)UnpackHtml: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubdir: (NSString *)partsSubdir;

// method: UnzipAttachments
// m_cppType = bool
- (BOOL)UnzipAttachments;

// method: ZipAttachments
// m_cppType = bool
// arg:zipFilename - const char *
- (BOOL)ZipAttachments: (NSString *)zipFilename;


@end
