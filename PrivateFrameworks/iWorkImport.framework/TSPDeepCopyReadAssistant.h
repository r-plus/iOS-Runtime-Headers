/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    NSDictionary * _cachedDataMap;
    TSPObject * _cachedMetadataObject;
    TSPComponent * _component;
    TSPObjectContext * _context;
    TSPDeepCopyObjectMap * _objectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int fileFormatVersion;
@property (nonatomic, readonly) BOOL hasDocumentVersionUUID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCrossAppPaste;
@property (nonatomic, readonly) BOOL isCrossDocumentPaste;
@property (nonatomic, readonly) int sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedDataForIdentifier:(int)arg1;
- (id)cachedMetadataObject;
- (BOOL)canResolveExternalReferences;
- (id)dataInfoForIdentifier:(int)arg1;
- (id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned int)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1 objectMap:(id)arg2 cachedMetadataObject:(id)arg3 cachedDataMap:(id)arg4;
- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (id)metadataComponent;
- (int)objectIdentifierForUUID:(id)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(int)arg1;
- (BOOL)processMetadataObject:(id)arg1 error:(id*)arg2;
- (id)rootObjectComponent;
- (BOOL)shouldDecodeMissingDataAsRemote;
- (BOOL)shouldResolveExternalReferencesUsingObjectUUID;
- (int)sourceType;

@end