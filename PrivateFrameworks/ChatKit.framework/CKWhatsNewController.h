/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKWhatsNewController : NSObject <CKAAUIDeviceToDeviceEncryptionHelperDelegate, CKWhatsNewViewControllerDelegate> {
    unsigned long long  _cachedMOCEnabledState;
    IMCloudKitHooks * _cloudKitHooks;
    UIViewController * _controllerToPresentFrom;
    <CKWhatsNewControllerDelegate> * _delegate;
    CKWhatsNewViewController * _presentedViewController;
    CKDeviceToDeviceEncryptionHelper * _presentedViewControllerEncryptionHelper;
    NSUserDefaults * _userDefaults;
    bool  _waitingForMOCState;
}

@property (nonatomic) unsigned long long cachedMOCEnabledState;
@property (nonatomic, retain) IMCloudKitHooks *cloudKitHooks;
@property (nonatomic, readonly) UIViewController *controllerToPresentFrom;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKWhatsNewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKWhatsNewViewController *presentedViewController;
@property (nonatomic, retain) CKDeviceToDeviceEncryptionHelper *presentedViewControllerEncryptionHelper;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic) bool waitingForMOCState;

- (void).cxx_destruct;
- (void)_beginMOCFlowForState:(unsigned long long)arg1;
- (void)_beginMOCWhatsNew;
- (void)_beginSurfWhatsNew;
- (void)_dismissPresentedViewControllerIfNeeded;
- (void)_presentViewController:(id)arg1;
- (bool)_shouldPresentMOC;
- (bool)_shouldPresentSurf;
- (void)_tryToEnableHSA2;
- (void)_tryToEnableMOC;
- (void)_writeDefaultWhatsNewDidShow;
- (unsigned long long)cachedMOCEnabledState;
- (id)cloudKitHooks;
- (void)cloudKitHooksReturnedWithMOCState:(id)arg1;
- (id)controllerToPresentFrom;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPresentationViewController:(id)arg1;
- (id)initWithPresentationViewController:(id)arg1 userDefaults:(id)arg2 cloudKitHooks:(id)arg3;
- (void)presentViewControllerIfNeeded;
- (id)presentedViewController;
- (id)presentedViewControllerEncryptionHelper;
- (void)setCachedMOCEnabledState:(unsigned long long)arg1;
- (void)setCloudKitHooks:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setPresentedViewControllerEncryptionHelper:(id)arg1;
- (void)setWaitingForMOCState:(bool)arg1;
- (id)userDefaults;
- (bool)waitingForMOCState;
- (void)whatsNewConfirmPressed;
- (void)whatsNewNotNowButtonPressed;

@end
