/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {
    NSData * _MACAddress;
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    AVOutputDevice * _avOutputDevice;
    NSString * _groupID;
    NSString * _logicalDeviceID;
    NSString * _modelID;
    NSDictionary * _modelSpecificInfo;
    NSString * _name;
    NSString * _playingPairedDeviceName;
    MRAVOutputDeviceSourceInfo * _sourceInfo;
    NSString * _uid;
}

@property (setter=setAVOutputDevice:, nonatomic, retain) AVOutputDevice *avOutputDevice;
@property (nonatomic, retain) MRAVOutputDeviceSourceInfo *sourceInfo;

- (void).cxx_destruct;
- (id)MACAddress;
- (void)_onqueue_clearCachedAVOutputDeviceProperties;
- (id)_playingPairedDeviceNameForAVOutputDevice:(id)arg1;
- (id)avOutputDevice;
- (float)batteryLevel;
- (bool)canAccessRemoteAssets;
- (bool)canRelayCommunicationChannel;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)groupID;
- (bool)hasBatteryLevel;
- (id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2;
- (bool)isDeviceGroupable;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isLocalDevice;
- (bool)isPickedOnPairedDevice;
- (bool)isRemoteControllable;
- (bool)isVolumeControlAvailable;
- (id)logicalDeviceID;
- (id)modelID;
- (id)modelSpecificInfo;
- (id)name;
- (id)playingPairedDeviceName;
- (bool)requiresAuthorization;
- (void)setAVOutputDevice:(id)arg1;
- (void)setSourceInfo:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)sourceInfo;
- (bool)supportsExternalScreen;
- (id)uid;
- (float)volume;

@end
