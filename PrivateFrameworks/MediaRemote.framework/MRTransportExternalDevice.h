/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate> {
    unsigned int  _cachedServerDisconnectError;
    MRExternalClientConnection * _clientConnection;
    unsigned int  _connectionOptions;
    long long  _connectionRecoveryBehavior;
    unsigned int  _connectionState;
    id /* block */  _connectionStateCallback;
    NSObject<OS_dispatch_queue> * _connectionStateCallbackQueue;
    id /* block */  _customDataCallback;
    NSObject<OS_dispatch_queue> * _customDataCallbackQueue;
    _MROriginProtobuf * _customOrigin;
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    bool  _disconnecting;
    bool  _forceReconnectOnConnectionFailure;
    bool  _isCallingClientCallback;
    id /* block */  _nameCallback;
    NSObject<OS_dispatch_queue> * _nameCallbackQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSData * _nowPlayingArtwork;
    NSDictionary * _nowPlayingInfo;
    _MRContentItemProtobuf * _nowPlayingItem;
    id /* block */  _outputContextCallback;
    NSObject<OS_dispatch_queue> * _outputContextCallbackQueue;
    id /* block */  _pairingAllowedCallback;
    NSObject<OS_dispatch_queue> * _pairingAllowedCallbackQueue;
    id /* block */  _pairingCallback;
    NSObject<OS_dispatch_queue> * _pairingCallbackQueue;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    unsigned long long  _reconnectionAttemptCount;
    CURunLoopThread * _runLoopThread;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MRSupportedProtocolMessages * _supportedMessages;
    MRExternalDeviceTransport * _transport;
    bool  _usingSystemPairing;
    id /* block */  _volumeCallback;
    NSObject<OS_dispatch_queue> * _volumeCallbackQueue;
    bool  _wantsNowPlayingArtworkNotifications;
    bool  _wantsNowPlayingNotifications;
    bool  _wantsVolumeNotifications;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, retain) MRExternalClientConnection *clientConnection;
@property (nonatomic) long long connectionRecoveryBehavior;
@property (nonatomic, copy) id /* block */ connectionStateCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue;
@property (nonatomic, copy) id /* block */ customDataCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *customDataCallbackQueue;
@property (nonatomic, retain) _MROriginProtobuf *customOrigin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCallingClientCallback;
@property (nonatomic, copy) id /* block */ nameCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nameCallbackQueue;
@property (nonatomic, retain) NSData *nowPlayingArtwork;
@property (nonatomic, retain) NSDictionary *nowPlayingInfo;
@property (nonatomic, retain) _MRContentItemProtobuf *nowPlayingItem;
@property (nonatomic, copy) id /* block */ outputContextCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *outputContextCallbackQueue;
@property (nonatomic, copy) id /* block */ pairingAllowedCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue;
@property (nonatomic, copy) id /* block */ pairingCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pairingCallbackQueue;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, readonly) MRExternalDeviceTransport *transport;
@property (nonatomic, copy) id /* block */ volumeCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *volumeCallbackQueue;

- (void).cxx_destruct;
- (void)_callClientAllowsPairingCallback;
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 error:(id)arg2;
- (void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2;
- (void)_callClientNameCallback;
- (void)_callClientOutputContextCallbackWithInfo:(struct { unsigned int x1; bool x2; unsigned int x3[2]; })arg1;
- (void)_callClientPairingCallback:(id /* block */)arg1;
- (void)_callVolumeCallback:(float)arg1 endpoint:(id)arg2 outputDevice:(id)arg3;
- (void)_contentItemUpdatedNotification:(id)arg1;
- (id)_createPlaybackQueue:(bool)arg1;
- (void)_handleCryptoPairingMessage:(id)arg1;
- (void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2;
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;
- (void)_handleGenericMessage:(id)arg1;
- (void)_handleLegacyPlaybackQueueRequestWithCompletion:(id /* block */)arg1;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_handleNotificationMessageLegacy:(id)arg1;
- (void)_handleNotificationMessageModern:(id)arg1;
- (void)_handlePlaybackQueueRequest:(void*)arg1 forPlayer:(void*)arg2 completion:(id /* block */)arg3;
- (void)_handlePlaybackQueueResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1;
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1;
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(void*)arg3 completion:(id /* block */)arg4;
- (void)_handleRemoveClientMessage:(id)arg1;
- (void)_handleRemovePlayerMessage:(id)arg1;
- (void)_handleSetArtworkMessage:(id)arg1;
- (void)_handleSetConnectionStateMessage:(id)arg1;
- (void)_handleSetNowPlayingClientMessage:(id)arg1;
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;
- (void)_handleSetStateMessage:(id)arg1;
- (void)_handleSetStateMessageLegacy:(id)arg1;
- (void)_handleSetStateMessageModern:(id)arg1;
- (void)_handleSetVolumeControlAvailabilityMessage:(id)arg1;
- (void)_handleTransactionMessage:(id)arg1;
- (void)_handleUpdateClientMessage:(id)arg1;
- (void)_handleUpdateContentItemArtworkMessage:(id)arg1;
- (void)_handleUpdateContentItemsMessage:(id)arg1;
- (void)_handleUpdatePlayerMessage:(id)arg1;
- (void)_handleVolumeDidChangeMessage:(id)arg1;
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;
- (void)_onSerialQueue_connectWithOptions:(unsigned int)arg1;
- (void)_onSerialQueue_registerOriginCallbacks;
- (void)_onWorkerQueue_cleanUpWithReason:(long long)arg1;
- (void)_onWorkerQueue_connectWithOptions:(unsigned int)arg1 isRetry:(bool)arg2;
- (id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg1;
- (id)_onWorkerQueue_loadDeviceInfo;
- (id)_onWorkerQueue_openSecuritySession;
- (id)_onWorkerQueue_setupCustomOrigin;
- (void)_tearDownCustomOriginWithReason:(long long)arg1;
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;
- (void)_updateNowPlayingInfo;
- (id)clientConnection;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)clientDidDisconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
- (long long)connectionRecoveryBehavior;
- (unsigned int)connectionState;
- (id /* block */)connectionStateCallback;
- (id)connectionStateCallbackQueue;
- (id)currentClientUpdatesConfigMessage;
- (id /* block */)customDataCallback;
- (id)customDataCallbackQueue;
- (id)customOrigin;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (void)disconnect:(id)arg1;
- (id)errorForCurrentState;
- (id)hostName;
- (id)init;
- (id)initWithTransport:(id)arg1;
- (bool)isCallingClientCallback;
- (bool)isPaired;
- (bool)isUsingSystemPairing;
- (bool)isValid;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)name;
- (id /* block */)nameCallback;
- (id)nameCallbackQueue;
- (id)nowPlayingArtwork;
- (id)nowPlayingInfo;
- (id)nowPlayingItem;
- (id /* block */)outputContextCallback;
- (id)outputContextCallbackQueue;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)pairingAllowedCallback;
- (id)pairingAllowedCallbackQueue;
- (id /* block */)pairingCallback;
- (id)pairingCallbackQueue;
- (void)ping:(double)arg1 callback:(id /* block */)arg2 withQueue:(id)arg3;
- (id)playerPath;
- (long long)port;
- (void)sendClientUpdatesConfigMessage;
- (void)sendClientUpdatesConfigMessageWithCompletion:(id /* block */)arg1;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setClientConnection:(id)arg1;
- (void)setConnectionRecoveryBehavior:(long long)arg1;
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;
- (void)setConnectionStateCallback:(id /* block */)arg1;
- (void)setConnectionStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallbackQueue:(id)arg1;
- (void)setCustomDataCallback:(id /* block */)arg1;
- (void)setCustomDataCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallbackQueue:(id)arg1;
- (void)setCustomOrigin:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setIsCallingClientCallback:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameCallback:(id /* block */)arg1;
- (void)setNameCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setNameCallbackQueue:(id)arg1;
- (void)setNowPlayingArtwork:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (void)setOutputContextCallback:(id /* block */)arg1;
- (void)setOutputContextCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setOutputContextCallbackQueue:(id)arg1;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setPairingAllowedCallback:(id /* block */)arg1;
- (void)setPairingAllowedCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallbackQueue:(id)arg1;
- (void)setPairingCallback:(id /* block */)arg1;
- (void)setPairingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingCallbackQueue:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setSupportedMessages:(id)arg1;
- (void)setUsingSystemPairing:(bool)arg1;
- (void)setVolume:(float)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)setVolumeCallback:(id /* block */)arg1;
- (void)setVolumeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setVolumeCallbackQueue:(id)arg1;
- (void)setWantsNowPlayingArtworkNotifications:(bool)arg1;
- (void)setWantsNowPlayingNotifications:(bool)arg1;
- (void)setWantsVolumeNotifications:(bool)arg1;
- (id)supportedMessages;
- (struct { unsigned int x1; bool x2; unsigned int x3[2]; })systemMusicContextInfo;
- (id)transport;
- (void)unpair;
- (id /* block */)volumeCallback;
- (id)volumeCallbackQueue;
- (void)volumeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)wantsNowPlayingArtworkNotifications;
- (bool)wantsNowPlayingNotifications;
- (bool)wantsVolumeNotifications;

@end
