/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarTimeItemView : UIStatusBarItemView {
    NSString * _timeString;
    bool  _useCustomFadeAnimation;
}

@property (nonatomic) bool useCustomFadeAnimation;

- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUseCustomFadeAnimation:(bool)arg1;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (bool)shouldTintContentImage;
- (long long)textStyle;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (bool)useCustomFadeAnimation;

@end
