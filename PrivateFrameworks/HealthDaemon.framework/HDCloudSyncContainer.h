/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncContainer : NSObject {
    HDProfile * _profile;
    long long  _pullOperationFailureCount;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _secondaryContainer;
    bool  _secureContainer;
    CKContainer * _syncContainer;
}

@property (nonatomic) HDProfile *profile;
@property (nonatomic, readonly) bool secondaryContainer;
@property (nonatomic, readonly) bool secureContainer;
@property (nonatomic, retain) CKContainer *syncContainer;

- (void).cxx_destruct;
- (id)_cloudSyncContainerDescriptionFromFetchOperationResult:(id)arg1 configuration:(id)arg2;
- (void)_disableCloudSyncWithCompletion:(id /* block */)arg1;
- (id)_fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)_lastSuccessfulPullKey;
- (id)_operationGroupForReason:(long long)arg1 options:(unsigned long long)arg2;
- (long long)_pendingProgressCountForPullOperationsGivenOptions:(unsigned long long)arg1;
- (long long)_pendingProgressCountForPushOperationGivenOptions:(unsigned long long)arg1 maxPullOperationCount:(long long)arg2;
- (void)_recordSuccessfulPull;
- (id)_startPullOperationForStoreIdentifier:(id)arg1 configuration:(id)arg2 fetchOperationResult:(id)arg3 taskTree:(id)arg4;
- (id)description;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1 identifier:(id)arg2;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)fetchSyncStatusWithTaskTree:(id)arg1 resultsHandler:(id /* block */)arg2;
- (id)initAsSecondaryWithProfile:(id)arg1 syncContainer:(id)arg2;
- (id)initWithProfile:(id)arg1 syncContainer:(id)arg2;
- (id)profile;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4;
- (bool)secondaryContainer;
- (bool)secureContainer;
- (void)setProfile:(id)arg1;
- (void)setSyncContainer:(id)arg1;
- (id)syncContainer;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4;

@end
