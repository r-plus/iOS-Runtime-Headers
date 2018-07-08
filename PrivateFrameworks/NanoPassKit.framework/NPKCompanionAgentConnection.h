/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol> {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMutableDictionary * _cachedPasses;
    NSMutableSet * _cachedUniqueIDs;
    NSMutableDictionary * _connectionAvailableActions;
    PKPaymentWebServiceContext * _connectionUnavailableWebServiceContext;
    <NPKCompanionAgentConnectionDelegate> * _delegate;
    bool  _hasQueuedPaymentPasses;
    bool  _queueAppropriateFailedActions;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (retain) NSMutableDictionary *cachedPasses;
@property (retain) NSMutableSet *cachedUniqueIDs;
@property (nonatomic, retain) NSMutableDictionary *connectionAvailableActions;
@property (nonatomic, retain) PKPaymentWebServiceContext *connectionUnavailableWebServiceContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKCompanionAgentConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasQueuedPaymentPasses;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool queueAppropriateFailedActions;
@property (readonly) Class superclass;
@property (readonly) NSXPCConnection *xpcConnection;

+ (bool)isIssuerAppProvisioningSupported;
+ (bool)isSetupAssistantProvisioningSupported;
+ (id)watchPaymentWebService;
+ (id)watchPeerPaymentWebService;
+ (id)watchProvisioningURL;
+ (id)watchProvisioningURLForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (void)_addPassToCache:(id)arg1;
- (void)_applyPropertiesToPass:(id)arg1;
- (id)_cachedPassForUniqueID:(id)arg1;
- (id)_cachedUniqueIDs;
- (void)_clearCaches;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (void)_handleDefaultCardChanged:(id)arg1;
- (void)_handleServerPaymentPassesChanged:(id)arg1;
- (int)_isApplePaySupportedInCurrentRegion;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_removePassWithUniqueIDFromCache:(id)arg1;
- (void)_savePaymentPass:(id)arg1 atURL:(id)arg2 forDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)_setCachedUniqueIDs:(id)arg1;
- (void)_sharedPaymentWebServiceContextForDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)cachedPasses;
- (id)cachedUniqueIDs;
- (id)connectionAvailableActions;
- (id)connectionUnavailableWebServiceContext;
- (void)consistencyCheckWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)defaultCardUniqueID:(id /* block */)arg1;
- (void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 fromDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)handlePendingUnpairingWithCompletion:(id /* block */)arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(id /* block */)arg1;
- (void)handlePotentialExpressPass:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasQueuedPaymentPasses;
- (id)init;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg1;
- (void)markAllAppletsForDeletionWithCompletion:(id /* block */)arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(bool)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)noteWatchOfferShownForPaymentPass:(id)arg1;
- (void)paymentPassUniqueIDs:(id /* block */)arg1;
- (void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)paymentPassWithUniqueID:(id)arg1 reply:(id /* block */)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentAccountForDevice:(id)arg1;
- (bool)queueAppropriateFailedActions;
- (void)redownloadAllPaymentPassesWithCompletion:(id /* block */)arg1;
- (void)removePaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 waitForConfirmation:(bool)arg3 completion:(id /* block */)arg4;
- (void)savePaymentPass:(id)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)setCachedPasses:(id)arg1;
- (void)setCachedUniqueIDs:(id)arg1;
- (void)setConnectionAvailableActions:(id)arg1;
- (void)setConnectionUnavailableWebServiceContext:(id)arg1;
- (void)setDefaultCardUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHasQueuedPaymentPasses:(bool)arg1;
- (void)setPeerPaymentAccount:(id)arg1 forDevice:(id)arg2;
- (void)setQueueAppropriateFailedActions:(bool)arg1;
- (void)setSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (id)sharedPaymentWebServiceContext;
- (id)sharedPaymentWebServiceContextForDevice:(id)arg1;
- (id)sharedPeerPaymentWebServiceContextForDevice:(id)arg1;
- (void)shouldShowApplePaySettingsWithCompletion:(id /* block */)arg1;
- (void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(id /* block */)arg5;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;
- (id)watchPaymentWebService;
- (id)xpcConnection;

@end
