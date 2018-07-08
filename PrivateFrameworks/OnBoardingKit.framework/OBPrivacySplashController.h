/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacySplashController : OBSplashController <UIScrollViewDelegate> {
    bool  _allowsOpeningSafari;
    NSString * _displayLanguage;
    OBPrivacyFlow * _flow;
    bool  _forceLargeMargins;
    bool  _isCombined;
    bool  _showLinkToPrivacyGateway;
    bool  _showsLinkToUnifiedAbout;
    bool  _suppressPerPageAnalyticsLogging;
    bool  _useModalStyle;
    bool  _useSmallTitle;
}

@property bool allowsOpeningSafari;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *displayLanguage;
@property bool forceLargeMargins;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCombined;
@property (nonatomic) bool showLinkToPrivacyGateway;
@property bool showsLinkToUnifiedAbout;
@property (readonly) Class superclass;
@property bool suppressPerPageAnalyticsLogging;
@property bool useModalStyle;
@property bool useSmallTitle;

+ (id)splashPageWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_defaultButtonTitle;
- (void)_initializeFromBundle;
- (bool)allowsOpeningSafari;
- (id)displayLanguage;
- (bool)forceLargeMargins;
- (id)initWithFlow:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1;
- (bool)isCombined;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAllowsOpeningSafari:(bool)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissHandlerForDefaultButton:(id /* block */)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setForceLargeMargins:(bool)arg1;
- (void)setIsCombined:(bool)arg1;
- (void)setShowLinkToPrivacyGateway:(bool)arg1;
- (void)setShowsLinkToUnifiedAbout:(bool)arg1;
- (void)setSuppressPerPageAnalyticsLogging:(bool)arg1;
- (void)setUseModalStyle:(bool)arg1;
- (void)setUseSmallTitle:(bool)arg1;
- (bool)shouldUseTiledTextViews;
- (bool)showLinkToPrivacyGateway;
- (void)showPrivacyGateway:(id)arg1;
- (void)showUnifiedAbout:(id)arg1;
- (bool)showsLinkToUnifiedAbout;
- (bool)suppressPerPageAnalyticsLogging;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (bool)useModalStyle;
- (bool)useSmallTitle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
