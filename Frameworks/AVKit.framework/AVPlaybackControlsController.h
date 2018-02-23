/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsController : NSObject <AVPlayerViewControllerContentViewDelegate, AVRoutePickerViewDelegate, AVTransportControlsViewDelegate, AVVolumeControllerDelegate> {
    id  _AVRouteDetectorMultipleRoutesDetectedObserver;
    bool  _canHideInteractiveContentOverlayView;
    UIViewPropertyAnimator * _collapseExpandSliderAnimator;
    bool  _coveringWindow;
    AVTimeFormatter * _elapsedTimeFormatter;
    bool  _entersFullScreenWhenPlaybackBegins;
    bool  _hasSeekableLiveStreamingContent;
    bool  _includesVideoGravityButton;
    AVKeyValueObservationController * _keyValueObservationController;
    NSTimer * _loadingIndicatorTimer;
    double  _loadingIndicatorTimerDelay;
    bool  _multipleRoutesDetected;
    bool  _mustHideProminentPlayButton;
    AVPictureInPictureController * _pictureInPictureController;
    AVPlaybackControlsView * _playbackControlsView;
    bool  _playbackSuspendedForScrubbing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _playbackViewFrame;
    AVPlayerController * _playerController;
    AVPlayerViewController * _playerViewController;
    bool  _playerViewControllerContentViewIsContainedInWindow;
    bool  _playerViewControllerHasInvalidViewControllerHierarchy;
    bool  _playerViewControllerIsPresentedFullScreen;
    bool  _playerViewControllerIsPresentingFullScreen;
    long long  _preferredUnobscuredArea;
    bool  _prefersVolumeSliderExpanded;
    AVTimeFormatter * _remainingTimeFormatter;
    bool  _requiresLinearPlayback;
    bool  _resumingUpdates;
    AVRouteDetector * _routeDetector;
    UIAlertController * _routePickerAlertController;
    bool  _scrubbingOrSeeking;
    bool  _shouldIgnoreTimeResolverUpdates;
    bool  _showsDoneButtonWhenFullScreen;
    bool  _showsFullScreenButton;
    bool  _showsLoadingIndicator;
    bool  _showsPictureInPictureButton;
    bool  _showsPlaybackControls;
    bool  _suspended;
    long long  _timeControlStatus;
    AVPlayerControllerTimeResolver * _timeResolver;
    NSString * _videoGravity;
    long long  _videoGravityButtonType;
    AVVolumeController * _volumeController;
}

@property (nonatomic, retain) id AVRouteDetectorMultipleRoutesDetectedObserver;
@property (nonatomic) bool canHideInteractiveContentOverlayView;
@property (nonatomic, readonly) bool canShowLoadingIndicator;
@property (nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator;
@property (getter=isCoveringWindow, nonatomic) bool coveringWindow;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTimeFormatter *elapsedTimeFormatter;
@property (nonatomic) bool entersFullScreenWhenPlaybackBegins;
@property (getter=isFullScreen, nonatomic, readonly) bool fullScreen;
@property (nonatomic) bool hasSeekableLiveStreamingContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesDoneButton;
@property (nonatomic, readonly) bool includesFullScreenButton;
@property (nonatomic) bool includesVideoGravityButton;
@property (nonatomic, readonly) AVKeyValueObservationController *keyValueObservationController;
@property (nonatomic) NSTimer *loadingIndicatorTimer;
@property (nonatomic) double loadingIndicatorTimerDelay;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic) bool multipleRoutesDetected;
@property (nonatomic) bool mustHideProminentPlayButton;
@property (nonatomic, retain) AVPictureInPictureController *pictureInPictureController;
@property (nonatomic, readonly) bool playButtonsShowPauseGlyph;
@property (nonatomic, retain) AVPlaybackControlsView *playbackControlsView;
@property (getter=isPlaybackSuspendedForScrubbing, nonatomic) bool playbackSuspendedForScrubbing;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } playbackViewFrame;
@property (nonatomic) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic) bool playerViewControllerContentViewIsContainedInWindow;
@property (nonatomic) bool playerViewControllerHasInvalidViewControllerHierarchy;
@property (nonatomic) bool playerViewControllerIsPresentedFullScreen;
@property (nonatomic) bool playerViewControllerIsPresentingFullScreen;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) bool prefersVolumeSliderExpanded;
@property (nonatomic, readonly) bool prominentPlayButtonCanShowPauseGlyph;
@property (nonatomic, readonly) AVTimeFormatter *remainingTimeFormatter;
@property (nonatomic) bool requiresLinearPlayback;
@property (getter=isResumingUpdates, nonatomic) bool resumingUpdates;
@property (nonatomic, retain) AVRouteDetector *routeDetector;
@property (nonatomic) UIAlertController *routePickerAlertController;
@property (getter=isScrubbingOrSeeking, nonatomic) bool scrubbingOrSeeking;
@property (getter=isSeekingEnabled, nonatomic, readonly) bool seekingEnabled;
@property (nonatomic, readonly) bool shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) bool shouldIgnoreTimeResolverUpdates;
@property (nonatomic) bool showsDoneButtonWhenFullScreen;
@property (nonatomic) bool showsFullScreenButton;
@property (nonatomic) bool showsLoadingIndicator;
@property (nonatomic, readonly) bool showsMediaSelectionButton;
@property (nonatomic) bool showsPictureInPictureButton;
@property (nonatomic) bool showsPlaybackControls;
@property (nonatomic, readonly) bool showsProminentPlayButton;
@property (nonatomic, readonly) bool showsRoutePickerView;
@property (nonatomic, readonly) bool showsSkipButtons;
@property (nonatomic, readonly) bool showsTransportControls;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, readonly) double targetTime;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic, retain) AVPlayerControllerTimeResolver *timeResolver;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic) long long videoGravityButtonType;
@property (nonatomic, readonly) AVVolumeController *volumeController;

+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingFullScreen;
+ (id)keyPathsForValuesAffectingIncludesDoneButton;
+ (id)keyPathsForValuesAffectingIncludesFullScreenButton;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingShowsTransportControls;

- (void).cxx_destruct;
- (id)AVRouteDetectorMultipleRoutesDetectedObserver;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (void)_observeBoolForKeyPath:(id)arg1 observationHandler:(id /* block */)arg2;
- (bool)_prefersVolumeSliderExpandedAutomatically;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_showOrHideVolumeSlider;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_startOrStopHidingViewsQuicklyWhenPlaybackBegins;
- (void)_startVisibilityControllerManagementOfViewVisibilityHidingIfInitiallyPlaying:(bool)arg1;
- (void)_stopVisibilityControllerManagementOfViewVisibilityIfNeeded;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateVideoGravityButtonType;
- (void)_updateVolumeButtonGlyph;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(bool)arg2;
- (id)_volumeButtonMicaPackageState;
- (bool)canHideInteractiveContentOverlayView;
- (bool)canShowLoadingIndicator;
- (id)collapseExpandSliderAnimator;
- (double)currentTime;
- (void)dealloc;
- (id)elapsedTimeFormatter;
- (bool)entersFullScreenWhenPlaybackBegins;
- (bool)hasSeekableLiveStreamingContent;
- (bool)includesDoneButton;
- (bool)includesFullScreenButton;
- (bool)includesVideoGravityButton;
- (id)initWithPlayerViewController:(id)arg1;
- (bool)isCoveringWindow;
- (bool)isFullScreen;
- (bool)isPlaybackSuspendedForScrubbing;
- (bool)isResumingUpdates;
- (bool)isScrubbingOrSeeking;
- (bool)isSeekingEnabled;
- (bool)isSuspended;
- (id)keyValueObservationController;
- (id)loadingIndicatorTimer;
- (double)loadingIndicatorTimerDelay;
- (double)maximumTime;
- (double)minimumTime;
- (bool)multipleRoutesDetected;
- (bool)mustHideProminentPlayButton;
- (id)pictureInPictureController;
- (bool)playButtonsShowPauseGlyph;
- (id)playbackControlsView;
- (void)playbackControlsViewDidLoad:(id)arg1;
- (void)playbackControlsVisibilityDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playbackViewFrame;
- (id)playerController;
- (id)playerViewController;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToWindow:(id)arg1;
- (bool)playerViewControllerContentViewIsContainedInWindow;
- (bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewWillLayoutSubviews:(id)arg1;
- (void)playerViewControllerDidFinishFullScreenDimissalTransition;
- (bool)playerViewControllerHasInvalidViewControllerHierarchy;
- (bool)playerViewControllerIsPresentedFullScreen;
- (bool)playerViewControllerIsPresentingFullScreen;
- (long long)preferredUnobscuredArea;
- (bool)prefersVolumeSliderExpanded;
- (bool)prominentPlayButtonCanShowPauseGlyph;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (id)remainingTimeFormatter;
- (bool)requiresLinearPlayback;
- (void)resumeUpdates;
- (id)routeDetector;
- (id)routePickerAlertController;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)setAVRouteDetectorMultipleRoutesDetectedObserver:(id)arg1;
- (void)setCanHideInteractiveContentOverlayView:(bool)arg1;
- (void)setCollapseExpandSliderAnimator:(id)arg1;
- (void)setCoveringWindow:(bool)arg1;
- (void)setEntersFullScreenWhenPlaybackBegins:(bool)arg1;
- (void)setHasSeekableLiveStreamingContent:(bool)arg1;
- (void)setIncludesVideoGravityButton:(bool)arg1;
- (void)setLoadingIndicatorTimer:(id)arg1;
- (void)setLoadingIndicatorTimerDelay:(double)arg1;
- (void)setMultipleRoutesDetected:(bool)arg1;
- (void)setMustHideProminentPlayButton:(bool)arg1;
- (void)setPictureInPictureController:(id)arg1;
- (void)setPlaybackControlsView:(id)arg1;
- (void)setPlaybackSuspendedForScrubbing:(bool)arg1;
- (void)setPlaybackViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerViewControllerContentViewIsContainedInWindow:(bool)arg1;
- (void)setPlayerViewControllerHasInvalidViewControllerHierarchy:(bool)arg1;
- (void)setPlayerViewControllerIsPresentedFullScreen:(bool)arg1;
- (void)setPlayerViewControllerIsPresentingFullScreen:(bool)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setPrefersVolumeSliderExpanded:(bool)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setResumingUpdates:(bool)arg1;
- (void)setRouteDetector:(id)arg1;
- (void)setRoutePickerAlertController:(id)arg1;
- (void)setScrubbingOrSeeking:(bool)arg1;
- (void)setShouldIgnoreTimeResolverUpdates:(bool)arg1;
- (void)setShowsDoneButtonWhenFullScreen:(bool)arg1;
- (void)setShowsFullScreenButton:(bool)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setShowsPictureInPictureButton:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTimeControlStatus:(long long)arg1;
- (void)setTimeResolver:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoGravityButtonType:(long long)arg1;
- (bool)shouldEnterFullScreenWhenPlaybackBegins;
- (bool)shouldIgnoreTimeResolverUpdates;
- (bool)showsDoneButtonWhenFullScreen;
- (bool)showsFullScreenButton;
- (bool)showsLoadingIndicator;
- (bool)showsMediaSelectionButton;
- (bool)showsPictureInPictureButton;
- (bool)showsPlaybackControls;
- (bool)showsProminentPlayButton;
- (bool)showsRoutePickerView;
- (bool)showsSkipButtons;
- (bool)showsTransportControls;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)stopUpdates;
- (double)targetTime;
- (long long)timeControlStatus;
- (id)timeResolver;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (id)videoGravity;
- (long long)videoGravityButtonType;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (id)volumeController;
- (void)volumeController:(id)arg1 volumeDidChange:(float)arg2 effectiveVolumeLimit:(float)arg3;
- (void)volumeSliderValueDidChange:(id)arg1;

@end
