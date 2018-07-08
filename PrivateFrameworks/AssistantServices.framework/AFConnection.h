/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConnection : NSObject <AFAudioPowerUpdaterDelegate, NSXPCListenerDelegate> {
    long long  _activeRequestType;
    NSUUID * _activeRequestUUID;
    long long  _activeRequestUsefulUserResultType;
    unsigned int  _audioSessionID;
    NSArray * _cachedBulletins;
    AFClientConfiguration * _clientConfiguration;
    unsigned int  _clientStateIsInSync;
    NSXPCConnection * _connection;
    <AFAssistantUIService> * _delegate;
    unsigned int  _hasOutstandingRequest;
    AFAudioPowerUpdater * _inputAudioPowerUpdater;
    unsigned int  _isCapturingSpeech;
    NSError * _lastRetryError;
    NSString * _outstandingRequestClass;
    unsigned long long  _pendingSpeechRequestCounter;
    NSMutableDictionary * _replyHandlerForAceId;
    AFOneArgumentSafetyBlock * _requestCompletion;
    NSObject<OS_dispatch_source> * _requestTimeoutTimer;
    unsigned int  _shouldSpeak;
    NSObject<OS_dispatch_group> * _speechCallbackGroup;
    <AFSpeechDelegate> * _speechDelegate;
    unsigned int  _stateInSync;
    NSObject<OS_dispatch_queue> * _targetQueue;
    unsigned int  _voiceOverIsActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFAssistantUIService> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActiveRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRecording;
@property (nonatomic) <AFSpeechDelegate> *speechDelegate;
@property (readonly) Class superclass;

+ (bool)assistantIsSupported;
+ (bool)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)beginMonitoringAvailability;
+ (id)currentLanguageCode;
+ (void)defrost;
+ (void)initialize;
+ (bool)isAvailable;
+ (id)outputVoice;
+ (bool)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id*)arg3;
+ (bool)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id*)arg4;
+ (void)stopMonitoringAvailability;
+ (bool)userDataSyncNeeded;

- (void).cxx_destruct;
- (void)_aceConnectionWillRetryOnError:(id)arg1;
- (void)_barrier;
- (id)_cachedBulletins;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(bool)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_clearConnection;
- (id)_clientService;
- (id)_clientServiceWithErrorHandler:(id /* block */)arg1;
- (void)_completeRequestWithUUID:(id)arg1 error:(id)arg2;
- (id)_connection;
- (void)_connectionFailedWithError:(id)arg1;
- (void)_dispatchCallbackGroupBlock:(id /* block */)arg1;
- (void)_doCommand:(id)arg1 reply:(id /* block */)arg2;
- (void)_extendExistingRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(bool)arg2 analyticsEventProvider:(id /* block */)arg3;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(bool)arg2 isBackgroundRequest:(bool)arg3 analyticsEventProvider:(id /* block */)arg4;
- (void)_scheduleRequestTimeout;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setShouldSpeak:(bool)arg1;
- (void)_speechRecordingDidFailWithError:(id)arg1;
- (bool)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;
- (void)_startRequestWithAceCommand:(id)arg1 suppressAlert:(bool)arg2;
- (void)_startRequestWithInfo:(id)arg1;
- (void)_startUIRequestWithText:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopInputAudioPowerUpdates;
- (void)_tellDelegateAudioPlaybackRequestDidNotStart:(id)arg1 error:(id)arg2;
- (void)_tellDelegateAudioPlaybackRequestDidStart:(id)arg1;
- (void)_tellDelegateAudioPlaybackRequestDidStop:(id)arg1 error:(id)arg2;
- (void)_tellDelegateAudioPlaybackRequestWillStart:(id)arg1;
- (void)_tellDelegateAudioSessionDidBecomeActive:(bool)arg1;
- (void)_tellDelegateAudioSessionDidBeginInterruption;
- (void)_tellDelegateAudioSessionDidEndInterruption:(bool)arg1;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateAudioSessionWillBecomeActive:(bool)arg1;
- (void)_tellDelegateCacheImage:(id)arg1;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(bool)arg1;
- (void)_tellDelegateExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (void)_tellDelegateExtensionRequestWillStartForApplication:(id)arg1;
- (void)_tellDelegateHandleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(id /* block */)arg3;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateRequestWillStart;
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (void)_tellDelegateShouldSpeakChanged:(bool)arg1;
- (void)_tellDelegateStartPlaybackDidFail:(long long)arg1;
- (void)_tellDelegateWillProcessStartPlayback:(long long)arg1;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellSpeechDelegateDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)arg1;
- (void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidDetectStartpoint;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFinishRecognitionUpdateWithError:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (void)_tellSpeechDelegateRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(long long)arg1 reply:(id /* block */)arg2;
- (void)_updateClientState;
- (void)_updateState;
- (void)_willCancelRequest;
- (void)_willCompleteRequest;
- (void)_willEndSession;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willPresentUsefulUserResultWithType:(long long)arg1;
- (void)_willStartRequestWithSpeech:(bool)arg1 analyticsEventProvider:(id /* block */)arg2;
- (id)acquireUserInteractionAssertion;
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(bool)arg1;
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
- (unsigned int)audioSessionID;
- (float)averagePower;
- (void)beginUpdateOutputAudioPowerWithCompletion:(id /* block */)arg1;
- (void)boostedPreheatWithStyle:(long long)arg1 completion:(id /* block */)arg2;
- (void)cancelRequest;
- (void)cancelSpeech;
- (void)checkLanguageReady:(id)arg1 completion:(id /* block */)arg2;
- (void)clearContext;
- (void)dealloc;
- (id)delegate;
- (void)didDismissUI;
- (void)endSession;
- (void)endUpdateOutputAudioPower;
- (void)failRequestWithError:(id)arg1;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionActiveWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionInactiveWithCompletion:(id /* block */)arg1;
- (void)getCachedObjectsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasActiveRequest;
- (id)init;
- (id)initWithTargetQueue:(id)arg1;
- (void)invalidate;
- (bool)isRecording;
- (float)peakPower;
- (void)preheatWithStyle:(long long)arg1;
- (void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2;
- (void)prepareForPhoneCall;
- (void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)requestBarrier:(id /* block */)arg1;
- (void)rollbackClearContext;
- (void)rollbackRequest;
- (void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)arg1 selectedBundleId:(id)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id /* block */)arg2;
- (void)sendReplyCommand:(id)arg1;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;
- (void)setCarDNDActive:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsStark:(bool)arg1;
- (void)setLockState:(bool)arg1 screenLocked:(bool)arg2;
- (void)setMyriadDecisionResult:(bool)arg1;
- (void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;
- (void)setShouldWaitForMyriad:(bool)arg1;
- (void)setSpeechDelegate:(id)arg1;
- (void)setVoiceOverIsActive:(bool)arg1;
- (bool)shouldSpeak;
- (id)speechDelegate;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (id /* block */)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)startRequestWithAceCommand:(id)arg1;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)startRequestWithInfo:(id)arg1;
- (void)startRequestWithInfo:(id)arg1 activationEvent:(long long)arg2;
- (void)startRequestWithText:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(bool)arg2;
- (void)startUIRequest;
- (void)stopAllAudioPlaybackRequests:(bool)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(bool)arg2;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)telephonyRequestCompleted;
- (void)updateSpeechOptions:(id)arg1;
- (void)updateSpeechSynthesisRecord:(id)arg1;
- (void)usefulUserResultWillPresent;
- (void)willPresentUI;
- (void)willPresentUsefulUserResultWithType:(long long)arg1;
- (void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2;
- (void)willSetApplicationContextWithRefId:(id)arg1;

@end
