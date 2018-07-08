/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerPropertyCache : NSObject {
    long long  _actionAtItemEnd;
    bool  _allowsExternalPlayback;
    bool  _appliesMediaSelectionCriteriaAutomatically;
    NSObject<OS_dispatch_queue> * _avPropertyAccessQueue;
    bool  _canPlayFastForward;
    bool  _canPlayFastReverse;
    bool  _canUseNetworkResourcesForLiveStreamingWhilePaused;
    AVAsset * _currentAssetIfReady;
    AVPlayerItem * _currentItemIfReady;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSError * _error;
    bool  _externalPlaybackActive;
    long long  _externalPlaybackType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _forwardPlaybackEndTime;
    bool  _hasEnabledAudio;
    bool  _hasEnabledVideo;
    bool  _hasLiveStreamingContent;
    bool  _hasVideo;
    bool  _inspectionSuspended;
    double  _liveUpdateInterval;
    NSArray * _loadedTimeRanges;
    bool  _muted;
    bool  _playbackBufferEmpty;
    bool  _playbackBufferFull;
    bool  _playbackLikelyToKeepUp;
    AVPlayer * _player;
    NSError * _playerError;
    AVPlayer * _playerIfReady;
    NSError * _playerItemError;
    long long  _playerItemStatus;
    long long  _playerStatus;
    bool  _preparingAssetForInspection;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    float  _rate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _reversePlaybackEndTime;
    NSArray * _seekableTimeRanges;
    double  _seekableTimeRangesLastModifiedTime;
    bool  _streaming;
    long long  _timeControlStatus;
    NSArray * _tracks;
    bool  _usesExternalPlaybackWhileExternalScreenIsActive;
    float  _volume;
}

@property (nonatomic) long long actionAtItemEnd;
@property (nonatomic) bool allowsExternalPlayback;
@property (nonatomic) bool appliesMediaSelectionCriteriaAutomatically;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *avPropertyAccessQueue;
@property (nonatomic) bool canPlayFastForward;
@property (nonatomic) bool canPlayFastReverse;
@property (nonatomic) bool canUseNetworkResourcesForLiveStreamingWhilePaused;
@property (nonatomic, retain) AVAsset *currentAssetIfReady;
@property (nonatomic, retain) AVPlayerItem *currentItemIfReady;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, retain) NSError *error;
@property (getter=isExternalPlaybackActive, nonatomic) bool externalPlaybackActive;
@property (nonatomic) long long externalPlaybackType;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic) bool hasEnabledAudio;
@property (nonatomic) bool hasEnabledVideo;
@property (nonatomic) bool hasLiveStreamingContent;
@property (nonatomic) bool hasVideo;
@property (getter=isInspectionSuspended, nonatomic) bool inspectionSuspended;
@property (nonatomic) double liveUpdateInterval;
@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (getter=isMuted, nonatomic) bool muted;
@property (getter=isPlaybackBufferEmpty, nonatomic) bool playbackBufferEmpty;
@property (getter=isPlaybackBufferFull, nonatomic) bool playbackBufferFull;
@property (getter=isPlaybackLikelyToKeepUp, nonatomic) bool playbackLikelyToKeepUp;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) NSError *playerError;
@property (nonatomic, retain) AVPlayer *playerIfReady;
@property (nonatomic, retain) NSError *playerItemError;
@property (nonatomic) long long playerItemStatus;
@property (nonatomic) long long playerStatus;
@property (getter=isPreparingAssetForInspection, nonatomic) bool preparingAssetForInspection;
@property (nonatomic) struct CGSize { double x1; double x2; } presentationSize;
@property (nonatomic) float rate;
@property (getter=isReadyToPlay, nonatomic, readonly) bool readyToPlay;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } reversePlaybackEndTime;
@property (nonatomic, retain) NSArray *seekableTimeRanges;
@property (nonatomic) double seekableTimeRangesLastModifiedTime;
@property (nonatomic, readonly) long long status;
@property (getter=isStreaming, nonatomic) bool streaming;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic, retain) NSArray *tracks;
@property (nonatomic) bool usesExternalPlaybackWhileExternalScreenIsActive;
@property (nonatomic) float volume;

+ (id)defaultValuesForProperties;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingReadyToPlay;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsToPropertyNames;
+ (id)keysForUpdatingHasLiveStreamingContent;
+ (id)playerItemPropertiesWhitelistedForBackgroundAccess;
+ (id)playerPropertiesWhitelistedForBackgroundAccess;
+ (id)propertiesDependentOnHasLiveStreaming;
+ (id)propertyNamesToKeyPaths;

- (void).cxx_destruct;
- (void)_prepareAssetForInspectionIfNeeded;
- (bool)_shouldInspectValueForKey:(id)arg1;
- (void)_updateHasLiveStreamingContent;
- (long long)actionAtItemEnd;
- (bool)allowsExternalPlayback;
- (bool)appliesMediaSelectionCriteriaAutomatically;
- (id)avPropertyAccessQueue;
- (bool)canPlayFastForward;
- (bool)canPlayFastReverse;
- (bool)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (id)currentAssetIfReady;
- (id)currentItemIfReady;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (long long)externalPlaybackType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (bool)hasContent;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasLiveStreamingContent;
- (bool)hasVideo;
- (id)initWithPlayer:(id)arg1;
- (bool)isExternalPlaybackActive;
- (bool)isInspectionSuspended;
- (bool)isMuted;
- (bool)isPlaybackBufferEmpty;
- (bool)isPlaybackBufferFull;
- (bool)isPlaybackLikelyToKeepUp;
- (bool)isPreparingAssetForInspection;
- (bool)isReadyToPlay;
- (bool)isStreaming;
- (double)liveUpdateInterval;
- (id)loadedTimeRanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (id)playerError;
- (id)playerIfReady;
- (id)playerItemError;
- (long long)playerItemStatus;
- (long long)playerStatus;
- (struct CGSize { double x1; double x2; })presentationSize;
- (float)rate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (id)seekableTimeRanges;
- (double)seekableTimeRangesLastModifiedTime;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(bool)arg1;
- (void)setCanPlayFastForward:(bool)arg1;
- (void)setCanPlayFastReverse:(bool)arg1;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(bool)arg1;
- (void)setCurrentAssetIfReady:(id)arg1;
- (void)setCurrentItemIfReady:(id)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setError:(id)arg1;
- (void)setExternalPlaybackActive:(bool)arg1;
- (void)setExternalPlaybackType:(long long)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHasEnabledAudio:(bool)arg1;
- (void)setHasEnabledVideo:(bool)arg1;
- (void)setHasLiveStreamingContent:(bool)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setInspectionSuspended:(bool)arg1;
- (void)setLiveUpdateInterval:(double)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaybackBufferEmpty:(bool)arg1;
- (void)setPlaybackBufferFull:(bool)arg1;
- (void)setPlaybackLikelyToKeepUp:(bool)arg1;
- (void)setPlayerIfReady:(id)arg1;
- (void)setPlayerItemError:(id)arg1;
- (void)setPlayerItemStatus:(long long)arg1;
- (void)setPlayerStatus:(long long)arg1;
- (void)setPreparingAssetForInspection:(bool)arg1;
- (void)setPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRate:(float)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeekableTimeRanges:(id)arg1;
- (void)setSeekableTimeRangesLastModifiedTime:(double)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setTimeControlStatus:(long long)arg1;
- (void)setTracks:(id)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (void)setVolume:(float)arg1;
- (long long)status;
- (long long)timeControlStatus;
- (id)tracks;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (float)volume;

@end