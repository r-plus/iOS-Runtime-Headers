/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutonomousSingleAppModeSession : NSObject {
    bool  _active;
    UIAutonomousSingleAppModeConfiguration * _effectiveConfiguration;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)currentlyActiveSession;
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_guidedAccessStateDidChange:(id)arg1;
- (void)dealloc;
- (id)effectiveConfiguration;
- (void)endWithCompletion:(id /* block */)arg1;
- (id)initWithEffectiveConfiguration:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setEffectiveConfiguration:(id)arg1;

// Image: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient

+ (id)__gaxTrampoline_currentlyActiveSession;
+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (void)_gaxClientLoaded:(id)arg1;
+ (void)_gaxStatusDidChange:(id)arg1;
+ (void)initialize;
+ (Class)safeCategoryBaseClass;

- (void)__gaxTrampoline_endSessionWithCompletion:(id /* block */)arg1;

@end