/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILayoutContainerView : UIView <NSCoding> {
    <UILayoutContainerViewDelegate> * _delegate;
    struct { 
        unsigned int delegateRespondsToSemanticContentAttributeChanged : 1; 
        unsigned int delegateRespondsToViewWillLayoutSubviews : 1; 
        unsigned int delegateRespondsToWillMoveToWindow : 1; 
        unsigned int delegateRespondsToDidMoveToWindow : 1; 
    }  _layoutContainerViewFlags;
    long long  _setNeedsLayoutDisabledCount;
    UIView * _shadowView;
    bool  _usesInnerShadow;
    bool  _usesRoundedCorners;
}

@property (nonatomic) <UILayoutContainerViewDelegate> *delegate;
@property (nonatomic) bool usesInnerShadow;
@property (nonatomic) bool usesRoundedCorners;

- (void).cxx_destruct;
- (void)_installShadowViews;
- (void)_setFlagsFromDelegate:(id)arg1;
- (void)_tearDownShadowViews;
- (void)_updateShadowViews;
- (void)addSubview:(id)arg1;
- (void)beginWhileDisablingSetNeedsLayout;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (void)endWhileDisablingSetNeedsLayout;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUsesInnerShadow:(bool)arg1;
- (void)setUsesRoundedCorners:(bool)arg1;
- (bool)usesInnerShadow;
- (bool)usesRoundedCorners;
- (void)willMoveToWindow:(id)arg1;

@end
