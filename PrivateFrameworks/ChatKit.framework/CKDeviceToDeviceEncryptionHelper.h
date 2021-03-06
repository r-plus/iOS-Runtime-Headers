/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDeviceToDeviceEncryptionHelper : NSObject <CKAAUIDeviceToDeviceEncryptionHelperDelegate> {
    <CKAAUIDeviceToDeviceEncryptionHelper> * _deviceToDeviceEncryptionHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CKAAUIDeviceToDeviceEncryptionHelper> *deviceToDeviceEncryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deviceToDeviceEncryptionHelper;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (id)initWithPresentingViewController:(id)arg1;
- (void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id /* block */)arg1;

@end
