/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityViewController : UIViewController <UIActionSheetPresentationControllerDelegate, UIAlertControllerContaining, UIAlertControllerVisualStyleProviding, UIViewControllerRestoration, _UIActivityHelperDelegate, _UIShareExtensionHost> {
    id /* block */  __popoverDismissalAction;
    NSMutableDictionary * _activitiesByUUID;
    UIActivity * _activity;
    UIAlertAction * _activityAlertCancelAction;
    UIAlertController * _activityAlertController;
    _UIAlertControllerShimPresenter * _activityAlertControllerShimPresenter;
    _UIActivityHelper * _activityHelper;
    NSOperationQueue * _activityItemProviderOperationQueue;
    NSArray * _activityItemProviderOperations;
    NSArray * _activityItems;
    NSArray * _activityTypeOrder;
    NSArray * _activityTypesToCreateInShareService;
    UIViewController * _activityViewController;
    UISUIActivityViewControllerConfiguration * _activityViewControllerConfiguration;
    <UIActivityViewControllerDelegate> * _airDropDelegate;
    bool  _allowsEmbedding;
    NSArray * _applicationActivities;
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _beginPerformingActivityTimestamp;
    unsigned long long  _beginShareUIConnectionTimestamp;
    long long  _completedProviderCount;
    id /* block */  _completionHandler;
    id /* block */  _completionWithItemsHandler;
    bool  _dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
    long long  _excludedActivityCategories;
    NSArray * _excludedActivityTypes;
    <NSCopying> * _extensionRequestIdentifier;
    bool  _hasPerformedInitialPresentation;
    NSArray * _includedActivityTypes;
    bool  _isPerformingPresentation;
    long long  _originalPopoverBackgroundStyle;
    Class  _originalPopoverBackgroundViewClass;
    bool  _performActivityForStateRestoration;
    id /* block */  _preCompletionHandler;
    bool  _presentationWasDelayed;
    _UIShareExtensionRemoteViewController * _remoteContentViewController;
    NSArray * _resolvedActivityItemsForCurrentActivity;
    NSExtension * _shareExtension;
    <_UIShareExtensionService> * _shareExtensionService;
    bool  _shareServicePreferredContentSizeIsValid;
    bool  _shouldMatchOnlyUserElectedExtensions;
    bool  _showKeyboardAutomatically;
    bool  _sourceIsManaged;
    NSString * _subject;
    long long  _totalProviderCount;
    bool  _waitingForInitialShareServicePreferredContentSize;
    bool  _willDismissActivityViewController;
}

@property (nonatomic, copy) id /* block */ _popoverDismissalAction;
@property (nonatomic, retain) NSMutableDictionary *activitiesByUUID;
@property (nonatomic, retain) UIActivity *activity;
@property (nonatomic, retain) UIAlertAction *activityAlertCancelAction;
@property (nonatomic, retain) UIAlertController *activityAlertController;
@property (nonatomic, retain) _UIAlertControllerShimPresenter *activityAlertControllerShimPresenter;
@property (nonatomic, retain) _UIActivityHelper *activityHelper;
@property (nonatomic, retain) NSOperationQueue *activityItemProviderOperationQueue;
@property (nonatomic, retain) NSArray *activityItemProviderOperations;
@property (nonatomic, copy) NSArray *activityItems;
@property (nonatomic, copy) NSArray *activityTypeOrder;
@property (nonatomic, retain) NSArray *activityTypesToCreateInShareService;
@property (nonatomic, retain) UIViewController *activityViewController;
@property (nonatomic, retain) UISUIActivityViewControllerConfiguration *activityViewControllerConfiguration;
@property (nonatomic) <UIActivityViewControllerDelegate> *airDropDelegate;
@property (nonatomic) bool allowsEmbedding;
@property (nonatomic, copy) NSArray *applicationActivities;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (getter=_beginPerformingActivityTimestamp, setter=_setBeginPerformingActivityTimestamp:, nonatomic) unsigned long long beginPerformingActivityTimestamp;
@property (getter=_beginShareUIConnectionTimestamp, setter=_setBeginShareUIConnectionTimestamp:, nonatomic) unsigned long long beginShareUIConnectionTimestamp;
@property (nonatomic) long long completedProviderCount;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ completionWithItemsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (nonatomic) bool dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (getter=_hasPerformedInitialPresentation, setter=_setHasPerformedInitialPresentation:, nonatomic) bool hasPerformedInitialPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *includedActivityTypes;
@property (getter=_isPerformingPresentation, setter=_setIsPerformingPresentation:, nonatomic) bool isPerformingPresentation;
@property (nonatomic) long long originalPopoverBackgroundStyle;
@property (nonatomic, retain) Class originalPopoverBackgroundViewClass;
@property (nonatomic) bool performActivityForStateRestoration;
@property (nonatomic, copy) id /* block */ preCompletionHandler;
@property (getter=_presentationWasDelayed, setter=_setPresentationWasDelayed:, nonatomic) bool presentationWasDelayed;
@property (nonatomic, retain) _UIShareExtensionRemoteViewController *remoteContentViewController;
@property (nonatomic, readonly) NSArray *resolvedActivityItemsForCurrentActivity;
@property (nonatomic, retain) NSExtension *shareExtension;
@property (nonatomic, retain) <_UIShareExtensionService> *shareExtensionService;
@property (nonatomic) bool shareServicePreferredContentSizeIsValid;
@property (nonatomic) bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) bool showKeyboardAutomatically;
@property (nonatomic) bool sourceIsManaged;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic) long long totalProviderCount;
@property (nonatomic) bool waitingForInitialShareServicePreferredContentSize;
@property (nonatomic) bool willDismissActivityViewController;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_popoverPresentationUsesModernPresentation;
+ (bool)_usesActionSheetPresentationController;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (id)_activityConfigurationsForActivities:(id)arg1;
- (id)_activityItemURLValuesForMatching;
- (id)_activityItemValues;
- (id)_activityWithActivityUUID:(id)arg1;
- (id)_availableActivities;
- (void)_beginDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_beginInProgressActivityExecutionForcedStrongReference;
- (unsigned long long)_beginPerformingActivityTimestamp;
- (unsigned long long)_beginShareUIConnectionTimestamp;
- (void)_cancel;
- (void)_changeActionPresentationDismissButtonHidden:(bool)arg1;
- (void)_changeActionPresentationDismissButtonTitle:(id)arg1;
- (void)_changeActionSheetAvoidsKeyboardDisabledUntilNextUpdatePreferredContentSize:(bool)arg1;
- (void)_cleanupActivityWithSuccess:(bool)arg1;
- (void)_cleanupActivityWithSuccess:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (void)_clearActivity;
- (id)_configurationForActivity:(id)arg1;
- (void)_connectToRemoteViewService;
- (id)_containedAlertController;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (double)_displayHeight;
- (void)_embedRemoteContentViewController;
- (void)_endDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_endInProgressActivityExecutionForcedStrongReference;
- (void)_executeActivity;
- (bool)_hasPerformedInitialPresentation;
- (void)_insertIntoActivitiesByUUID:(id)arg1;
- (void)_installViewController:(id)arg1;
- (bool)_isPerformingPresentation;
- (void)_loadOrPreheatActivityViewControllerConfiguration;
- (id)_newShareUIConfigurationForCurrentState;
- (id)_newShareUIConfigurationWithMatchingResults:(id)arg1;
- (id)_orderedAvailableActivitiesByPerformingMatching;
- (void)_performActivityOfType:(id)arg1 executionEnvironment:(long long)arg2;
- (void)_performDismissWithCompletionHandler:(id /* block */)arg1;
- (id)_placeholderActivityItemValues;
- (id /* block */)_popoverDismissalAction;
- (void)_preloadInitialConfigurationLocallyIfNeeded;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)_presentationWasDelayed;
- (bool)_queueBackgroundOperationsForActivityItems:(id)arg1 activityBeingPerformed:(id)arg2;
- (void)_removeFromActivitiesByUUID:(id)arg1;
- (bool)_requiresCustomPresentationController;
- (void)_resetAfterActivity:(bool)arg1;
- (id)_securityScopedURLsForMatching;
- (void)_sendInitialShareServiceConfigurationAndUpdatePreferredContentSize;
- (void)_setBeginPerformingActivityTimestamp:(unsigned long long)arg1;
- (void)_setBeginShareUIConnectionTimestamp:(unsigned long long)arg1;
- (void)_setHasPerformedInitialPresentation:(bool)arg1;
- (void)_setIsPerformingPresentation:(bool)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)_setPresentationWasDelayed:(bool)arg1;
- (void)_setupLegacyAlertPresentationControllers;
- (void)_shareServiceFinishedInitialPreferredContentSizeUpdate;
- (bool)_shouldExecuteItemOperation:(id)arg1 forActivity:(id)arg2;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (void)_updatePreferredContentSizes;
- (void)_updateSourceIsManagedForURLs;
- (bool)_waitForShareExtensionServiceWithTimeout:(double)arg1 requireValidShareServicePreferredContentSize:(bool)arg2;
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (id)activitiesByUUID;
- (id)activity;
- (id)activityAlertCancelAction;
- (id)activityAlertController;
- (id)activityAlertControllerShimPresenter;
- (id)activityHelper;
- (void)activityHelper:(id)arg1 didUpdateActivityMatchingResults:(id)arg2;
- (bool)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3;
- (id)activityItemProviderOperationQueue;
- (id)activityItemProviderOperations;
- (id)activityItems;
- (id)activityTypeOrder;
- (id)activityTypesToCreateInShareService;
- (id)activityViewController;
- (id)activityViewControllerConfiguration;
- (id)airDropDelegate;
- (bool)allowsEmbedding;
- (id)applicationActivities;
- (unsigned long long)backgroundTaskIdentifier;
- (long long)completedProviderCount;
- (id /* block */)completionHandler;
- (id /* block */)completionWithItemsHandler;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id /* block */)dismissCompletionHandler;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (long long)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)extensionRequestIdentifier;
- (id)includedActivityTypes;
- (id)init;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)originalPopoverBackgroundStyle;
- (Class)originalPopoverBackgroundViewClass;
- (bool)performActivityForStateRestoration;
- (id /* block */)preCompletionHandler;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)remoteContentViewController;
- (id)resolvedActivityItemsForCurrentActivity;
- (void)setActivitiesByUUID:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setActivityAlertCancelAction:(id)arg1;
- (void)setActivityAlertController:(id)arg1;
- (void)setActivityAlertControllerShimPresenter:(id)arg1;
- (void)setActivityHelper:(id)arg1;
- (void)setActivityItemProviderOperationQueue:(id)arg1;
- (void)setActivityItemProviderOperations:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setActivityTypesToCreateInShareService:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setActivityViewControllerConfiguration:(id)arg1;
- (void)setAirDropDelegate:(id)arg1;
- (void)setAllowsEmbedding:(bool)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)setCompletedProviderCount:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (void)setDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel:(bool)arg1;
- (void)setExcludedActivityCategories:(long long)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setOriginalPopoverBackgroundStyle:(long long)arg1;
- (void)setOriginalPopoverBackgroundViewClass:(Class)arg1;
- (void)setPerformActivityForStateRestoration:(bool)arg1;
- (void)setPreCompletionHandler:(id /* block */)arg1;
- (void)setRemoteContentViewController:(id)arg1;
- (void)setShareExtension:(id)arg1;
- (void)setShareExtensionService:(id)arg1;
- (void)setShareServicePreferredContentSizeIsValid:(bool)arg1;
- (void)setShouldMatchOnlyUserElectedExtensions:(bool)arg1;
- (void)setShowKeyboardAutomatically:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setTotalProviderCount:(long long)arg1;
- (void)setWaitingForInitialShareServicePreferredContentSize:(bool)arg1;
- (void)setWillDismissActivityViewController:(bool)arg1;
- (void)set_popoverDismissalAction:(id /* block */)arg1;
- (id)shareExtension;
- (id)shareExtensionService;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
- (void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
- (void)shareExtensionServiceChangeSheetDismissButtonHidden:(bool)arg1;
- (void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
- (void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
- (void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
- (void)shareExtensionServicePreferredContentSizeUpdated:(struct CGSize { double x1; double x2; })arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
- (void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
- (void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(bool)arg2 completion:(id /* block */)arg3;
- (bool)shareServicePreferredContentSizeIsValid;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldMatchOnlyUserElectedExtensions;
- (bool)showKeyboardAutomatically;
- (bool)sourceIsManaged;
- (id)subject;
- (long long)totalProviderCount;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (bool)waitingForInitialShareServicePreferredContentSize;
- (bool)willDismissActivityViewController;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Image: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient

+ (Class)safeCategoryBaseClass;

- (void)_performActivity:(id)arg1;

@end
