/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate {
    NSArray * _addedRecords;
    NSArray * _deletedRecordIdentifiers;
    CPLChangeBatch * _diffBatch;
    NSSet * _unquarantinedRecordIdentifiers;
    NSArray * _updatedRecords;
    NSDictionary * _uploadIdentifiers;
}

@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) NSArray *deletedRecordIdentifiers;
@property (nonatomic, readonly) CPLChangeBatch *diffBatch;
@property (nonatomic, readonly) NSSet *unquarantinedRecordIdentifiers;
@property (nonatomic, readonly) NSArray *updatedRecords;
@property (nonatomic, readonly) NSDictionary *uploadIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedRecords;
- (bool)applyToStore:(id)arg1 error:(id*)arg2;
- (id)deletedRecordIdentifiers;
- (id)diffBatch;
- (bool)discardFromStore:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (id)unquarantinedRecordIdentifiers;
- (id)updatedRecords;
- (id)uploadIdentifiers;

@end
