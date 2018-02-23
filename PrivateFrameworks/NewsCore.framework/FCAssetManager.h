/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {
    NSMapTable * _assetHandles;
    NSObject<OS_dispatch_queue> * _assetHandlesQueue;
    FCAssetStore * _assetStore;
    FCCacheCoordinator * _cacheCoordinator;
    NSURL * _directoryURLForCachedAssets;
    bool  _flushUnusedAssets;
    NSObject<OS_dispatch_queue> * _initQueue;
    FCKeyValueStore * _keyValueStore;
    NSString * _name;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    NSString * _parentDirectory;
    bool  _shouldUseSecureConnectionForCKAssetDownloads;
}

@property (nonatomic, retain) NSMapTable *assetHandles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetHandlesQueue;
@property (nonatomic, retain) FCAssetStore *assetStore;
@property (nonatomic, retain) FCCacheCoordinator *cacheCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directoryURLForCachedAssets;
@property (nonatomic) bool flushUnusedAssets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, retain) FCKeyValueStore *keyValueStore;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, copy) NSString *parentDirectory;
@property (nonatomic) bool shouldUseSecureConnectionForCKAssetDownloads;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetHandleForCKAssetURLComponents:(id)arg1 lifetimeHint:(long long)arg2;
- (id)_assetKeyForRemoteURL:(id)arg1;
- (bool)_dataIsGzipped:(id)arg1;
- (void)_initStores;
- (void)_prepareForUseIfNeeded;
- (id)_transformerForAssetAtPath:(id)arg1 fromNetworkEvent:(id)arg2;
- (id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(bool)arg3 lifetimeHint:(long long)arg4;
- (id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4;
- (id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 lifetimeHint:(long long)arg3;
- (id)assetHandles;
- (id)assetHandlesQueue;
- (id)assetStore;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)directoryURLForCachedAssets;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (bool)flushUnusedAssets;
- (id)init;
- (id)initQueue;
- (id)initWithName:(id)arg1 directory:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)keyValueStore;
- (id)name;
- (id)networkBehaviorMonitor;
- (id)operationToFetchFileForAssetHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)parentDirectory;
- (void)setAssetHandles:(id)arg1;
- (void)setAssetHandlesQueue:(id)arg1;
- (void)setAssetStore:(id)arg1;
- (void)setCacheCoordinator:(id)arg1;
- (void)setFlushUnusedAssets:(bool)arg1;
- (void)setInitQueue:(id)arg1;
- (void)setKeyValueStore:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNetworkBehaviorMonitor:(id)arg1;
- (void)setParentDirectory:(id)arg1;
- (void)setShouldUseSecureConnectionForCKAssetDownloads:(bool)arg1;
- (bool)shouldUseSecureConnectionForCKAssetDownloads;

@end
