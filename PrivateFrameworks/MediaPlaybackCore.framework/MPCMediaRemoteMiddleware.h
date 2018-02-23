/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {
    MPCMediaRemoteController * _controller;
    NSArray * _invalidationObservers;
    long long  _playerState;
    NSIndexPath * _playingIndexPath;
    MPSectionedCollection * _queueContentItems;
    <MPCSupportedCommands> * _supportedCommands;
}

@property (nonatomic, retain) MPCMediaRemoteController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invalidationObservers;
@property (nonatomic) long long playerState;
@property (nonatomic, copy) NSIndexPath *playingIndexPath;
@property (nonatomic, retain) MPSectionedCollection *queueContentItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MPCSupportedCommands> *supportedCommands;

- (void).cxx_destruct;
- (id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3;
- (id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (float)_playbackRateForContentItem:(id)arg1;
- (id)_sectionGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (id)_supportedCommands:(unsigned int)arg1 infoValueForKey:(id)arg2;
- (id)controller;
- (id)controller:(id)arg1 chain:(id)arg2;
- (id)init;
- (id)invalidationObservers;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (bool)playerCommandEnabled:(bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;
- (bool)playerCommandSupported:(bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })playerItemDuration:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(id)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(id)arg2;
- (long long)playerState;
- (long long)playerState:(long long)arg1 chain:(id)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;
- (id)playingIndexPath;
- (id)queueContentItems;
- (void)setController:(id)arg1;
- (void)setInvalidationObservers:(id)arg1;
- (void)setPlayerState:(long long)arg1;
- (void)setPlayingIndexPath:(id)arg1;
- (void)setQueueContentItems:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;

@end
