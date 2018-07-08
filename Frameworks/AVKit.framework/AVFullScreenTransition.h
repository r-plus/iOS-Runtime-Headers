/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVFullScreenTransition : AVTransition {
    AVFullScreenViewController * _fullScreenViewController;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOfPlayerViewControllerWithinContainerView;
@property (nonatomic, readonly) AVFullScreenViewController *fullScreenViewController;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } rotationTransformFromPresentedViewToSourceView;
@property (nonatomic, readonly) bool shouldRemovePresentingView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewFrameInContainerView;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformForDismissalAnimation;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)completeTransition:(bool)arg1;
- (id)destinationView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPlayerViewControllerWithinContainerView;
- (id)fullScreenViewController;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransform:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })rotationTransformFromPresentedViewToSourceView;
- (bool)shouldRemovePresentingView;
- (id)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewFrameInContainerView;
- (id)sourceWindow;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForDismissalAnimation;
- (void)transitionWillBegin;
- (void)updateCornerAppearanceAttributesOfView:(id)arg1 similarityToSourceView:(double)arg2;

@end
