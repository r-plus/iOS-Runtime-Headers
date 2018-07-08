/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyPresenter : NSObject {
    bool  _animatePresentAndDismiss;
    OBPrivacyCombinedController * _combinedController;
    bool  _darkMode;
    id /* block */  _dismissHandler;
    long long  _modalPresentationStyle;
    id /* block */  _presentationCompletionHandler;
    struct UIViewController { Class x1; } * _presentedController;
    NSArray * _presentedIdentifiers;
    UIViewController * _presentingViewController;
    OBPrivacySplashController * _splashController;
    unsigned long long  _supportedInterfaceOrientations;
    bool  _usesFullScreenPresentation;
}

@property (nonatomic) bool animatePresentAndDismiss;
@property (retain) OBPrivacyCombinedController *combinedController;
@property (nonatomic) bool darkMode;
@property (copy) id /* block */ dismissHandler;
@property (nonatomic) long long modalPresentationStyle;
@property (copy) id /* block */ presentationCompletionHandler;
@property (retain) UIViewController *presentedController;
@property (retain) NSArray *presentedIdentifiers;
@property UIViewController *presentingViewController;
@property (retain) OBPrivacySplashController *splashController;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) bool usesFullScreenPresentation;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_presenterDidDismiss;
- (bool)animatePresentAndDismiss;
- (id)combinedController;
- (bool)darkMode;
- (void)dismiss;
- (id /* block */)dismissHandler;
- (long long)modalPresentationStyle;
- (void)present;
- (void)presentInNavigationStack:(id)arg1;
- (id /* block */)presentationCompletionHandler;
- (struct UIViewController { Class x1; }*)presentedController;
- (id)presentedIdentifiers;
- (id)presentingViewController;
- (void)setAnimatePresentAndDismiss:(bool)arg1;
- (void)setCombinedController:(id)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPresentationCompletionHandler:(id /* block */)arg1;
- (void)setPresentedController:(struct UIViewController { Class x1; }*)arg1;
- (void)setPresentedIdentifiers:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSplashController:(id)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setUsesFullScreenPresentation:(bool)arg1;
- (id)splashController;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)usesFullScreenPresentation;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pk_presenterForContext:(unsigned long long)arg1;

@end
