/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {
    NSOperationQueue * _enquedNowPlayingInfoAssetRequests;
    NSOperationQueue * _enquedNowPlayingInfoRequests;
    void * _playbackQueue;
    MRPlaybackQueuePlayerClient * _playbackQueueClient;
    NSMutableDictionary * _playbackQueueCompletions;
    unsigned int  _playbackState;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _responseQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _transactionCallbacks;
    NSMutableDictionary * _transactions;
}

@property (nonatomic, readonly) void*playbackQueue;
@property (nonatomic, readonly) MRPlaybackQueuePlayerClient *playbackQueueClient;
@property (nonatomic, readonly) unsigned int playbackState;
@property (nonatomic, readonly) void*playerPath;

- (void)_handleContentItemArtworkDidChangeNotification:(id)arg1;
- (void)_handleContentItemsDidChangeNotification:(id)arg1;
- (void)_handleEnqueuedPlaybackQueueRequest:(void*)arg1 completion:(id /* block */)arg2;
- (void)_handlePlaybackQueueDidChangeNotification:(id)arg1;
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;
- (void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(id /* block */)arg3;
- (void)_registerDefaultCallbacks;
- (id)_transactionDestintationForName:(unsigned long long)arg1;
- (void)addPlaybackQueueCompletion:(id /* block */)arg1 forRequest:(void*)arg2;
- (void)addTransactionCallback:(id /* block */)arg1 forName:(unsigned long long)arg2;
- (void)dealloc;
- (void)enqueuePlaybackQueueRequest:(void*)arg1 completion:(id /* block */)arg2;
- (id)initWithPlayerPath:(void*)arg1;
- (void*)playbackQueue;
- (id)playbackQueueClient;
- (unsigned int)playbackState;
- (void*)playerPath;
- (void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2;
- (void)removePlaybackQueueCompletionForRequest:(void*)arg1;
- (void)restoreNowPlayingClientState;
- (void)setPlaybackQueue:(void*)arg1;
- (id)transactionCallbacksForName:(unsigned long long)arg1;
- (bool)verifyCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;

@end
