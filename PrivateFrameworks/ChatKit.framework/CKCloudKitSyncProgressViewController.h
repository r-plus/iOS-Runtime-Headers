/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCloudKitSyncProgressViewController : UIViewController <IMCloudKitEventHandler> {
    <CKAKAccountManager> * _accountManager;
    UIButton * _actionButton;
    <CKAKAppleIDAuthenticationContext> * _authenticationContext;
    IMCloudKitHooks * _cloudKitHooks;
    <CKCloudKitSyncProgressViewControllerDelegate> * _delegate;
    CKDeviceToDeviceEncryptionHelper * _deviceToDeviceEncryptionHelper;
    bool  _hidden;
    UIStackView * _horizontalStackView;
    IMCloudKitSyncProgress * _lastProgress;
    UIProgressView * _progressBar;
    UILabel * _progressLabel;
    UILabel * _userMessageLabel;
    UIStackView * _verticalStackView;
}

@property (nonatomic, readonly) <CKAKAccountManager> *accountManager;
@property (nonatomic, readonly) bool accountNeedsRepair;
@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, readonly) <CKAKAppleIDAuthenticationContext> *authenticationContext;
@property (nonatomic, readonly) IMCloudKitHooks *cloudKitHooks;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKCloudKitSyncProgressViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDeviceToDeviceEncryptionHelper *deviceToDeviceEncryptionHelper;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIStackView *horizontalStackView;
@property (nonatomic, retain) IMCloudKitSyncProgress *lastProgress;
@property (nonatomic, readonly) UIProgressView *progressBar;
@property (nonatomic, readonly) UILabel *progressLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *userMessageLabel;
@property (nonatomic, retain) UIStackView *verticalStackView;

- (void).cxx_destruct;
- (void)_actionButtonWasPressed:(id)arg1;
- (id)_createLabel;
- (id)accountManager;
- (bool)accountNeedsRepair;
- (id)actionButton;
- (void)addToToolbar:(id)arg1;
- (id)authenticationContext;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (id)cloudKitHooks;
- (id)delegate;
- (id)deviceToDeviceEncryptionHelper;
- (void)handleDeviceToDeviceEncryptionStateRepairCompleted:(bool)arg1 error:(id)arg2;
- (id)horizontalStackView;
- (id)init;
- (id)initWithCloudKitHooks:(id)arg1;
- (bool)isHidden;
- (id)lastProgress;
- (void)loadView;
- (void)performDeviceToDeviceEncryptionStateRepair;
- (id)progressBar;
- (id)progressLabel;
- (void)setDelegate:(id)arg1;
- (void)setDeviceToDeviceEncryptionHelper:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHorizontalStackView:(id)arg1;
- (void)setLastProgress:(id)arg1;
- (void)setVerticalStackView:(id)arg1;
- (void)updateViewIfNeeded;
- (id)userMessageLabel;
- (id)verticalStackView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end