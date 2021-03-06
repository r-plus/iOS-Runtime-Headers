/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BKUIPearlPillContainerView : UIView {
    long long  _clockwise;
    long long  _counterwise;
    bool  _hasPillStateStash;
    long long  _lastAngle;
    long long  _numberOfVisiblePillViews;
    NSMutableArray * _pillViews;
    double  _radius;
    unsigned long long  _stashedPillStates;
    int  _state;
    UIImageView * _successAnimation;
}

@property (nonatomic, readonly) double radius;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (void)_animateToFinishedCompletion:(id /* block */)arg1;
- (void)_animateToFirstEnrollFinishedCompletion:(id /* block */)arg1;
- (void)_animateToSecondEnrollFinishedCompletion:(id /* block */)arg1;
- (void)_animateToSecondEnrollInProgressCompletion:(id /* block */)arg1;
- (long long)_indexForPillAtAngle:(double)arg1;
- (unsigned long long)_numberOfVisiblePillViews;
- (void)_setPillView:(id)arg1 toAngle:(double)arg2 radius:(double)arg3;
- (void)animateToState:(int)arg1 completion:(id /* block */)arg2;
- (bool)fillPillsAroundAngle:(double)arg1;
- (bool)fillPillsAroundAngle:(double)arg1 forTutorial:(bool)arg2;
- (id)init;
- (void)layoutSubviews;
- (double)percentOfPillsCompleted;
- (double)radius;
- (void)resetPillsAnimated:(bool)arg1;
- (void)setAllPillState:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setRadius:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setState:(int)arg1;
- (void)stashPillStates;
- (int)state;
- (id)unfilledDirections;
- (void)unstashPillStatesAnimated:(bool)arg1;
- (bool)unstashPillStatesIfNeededAnimated:(bool)arg1;

@end
