/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeControllerAVControllerDataSource : MPVolumeControllerAVPlayerDataSource {
    MPAVController * _controller;
}

@property (nonatomic, readonly) MPAVController *controller;

- (void).cxx_destruct;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_setup;
- (void)_tearDown;
- (id)controller;
- (id)initWithAVController:(id)arg1;

@end
