/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationRotationFollowingWindow : UIWindow

+ (bool)_isSystemWindow;

- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (void)_commonApplicationRotationFollowingWindowInit;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attached:(bool)arg2;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldControlAutorotation;
- (void)applicationWindowRotated:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isInterfaceAutorotationDisabled;

@end
