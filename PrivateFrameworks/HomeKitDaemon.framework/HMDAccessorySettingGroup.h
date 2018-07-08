/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingGroup : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFLogging, NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDAccessorySettingContainer * _container;
    HMDAccessorySettingGroup * _group;
    NSMutableSet * _groups;
    NSUUID * _identifier;
    HMDAccessorySettingGroup * _mediaSystemSettingGroup;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _settings;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMDAccessorySettingContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMDAccessorySettingGroup *group;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSString *keyPath;
@property HMDAccessorySettingGroup *mediaSystemSettingGroup;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDAccessorySettingGroupModel *model;
@property (readonly, copy) NSArray *models;
@property (readonly, copy) NSString *name;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fixupAccessorySetting;
- (void)_handleAddGroup:(id)arg1;
- (void)_handleAddSetting:(id)arg1;
- (void)_handleRemoveGroup:(id)arg1;
- (void)_handleRemoveSetting:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)clientQueue;
- (bool)compareSettingsTree:(id)arg1;
- (void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupAccessorySetting;
- (id)fullDescription;
- (id)group;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (void)handleAddedGroupModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSettingModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedGroupModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedSettingModel:(id)arg1 message:(id)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)logIdentifier;
- (id)mediaSystemSettingGroup;
- (id)mergeWithGroupMetadata:(id)arg1;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (id)model;
- (id)models;
- (id)name;
- (id)propertyQueue;
- (void)registerForMessages;
- (id)remoteMessageDestination:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setMediaSystemSettingGroup:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
- (id)settings;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)updateMediaSystemSettingsGroup:(id)arg1;

@end
