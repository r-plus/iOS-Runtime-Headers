/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySetting : HMFObject <HMDAccessorySettingProtocol, HMDAccessorySettingUpdateDelegate, HMDAccessorySettingUpdateProtocol, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFLogging, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned long long  _configurationVersion;
    NSMutableArray * _constraints;
    HMDAccessorySettingContainer * _container;
    HMDAccessorySettingGroup * _group;
    NSUUID * _identifier;
    HMDAccessorySetting * _mediaSystemSetting;
    HMFMessageDestination * _messageDestination;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    unsigned long long  _properties;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _type;
    HMDAccessorySettingUpdateBase * _updateSetting;
    id  _value;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long configurationVersion;
@property (readonly, copy) NSArray *constraints;
@property (nonatomic, retain) HMDAccessorySettingContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMDAccessorySettingGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSString *keyPath;
@property HMDAccessorySetting *mediaSystemSetting;
@property (nonatomic, retain) HMFMessageDestination *messageDestination;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDAccessorySettingModel *model;
@property (readonly, copy) NSArray *models;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long properties;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (nonatomic, retain) HMDAccessorySettingUpdateBase *updateSetting;
@property (readonly, copy) id value;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__init;
- (void)_fixupAccessorySetting;
- (void)_handleAddConstraint:(id)arg1;
- (void)_handleRemoveConstraint:(id)arg1;
- (void)_handleReplaceConstraints:(id)arg1;
- (void)_handleUpdateValue:(id)arg1;
- (void)_handleUpdatedConstraints:(id)arg1;
- (void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addConstraint:(id)arg1;
- (id)clientQueue;
- (bool)compareConstraints:(id)arg1;
- (unsigned long long)configurationVersion;
- (void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2;
- (id)constraintWithIdentifier:(id)arg1;
- (id)constraints;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupAccessorySetting;
- (id)group;
- (void)handleAddConstraint:(id)arg1;
- (void)handleRemoveConstraint:(id)arg1;
- (void)handleUpdateValue:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)keyPath;
- (id)logIdentifier;
- (id)mediaSystemSetting;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)model;
- (id)models;
- (id)modelsForConstraintsUpdate:(id)arg1;
- (id)name;
- (unsigned long long)properties;
- (id)propertyQueue;
- (void)registerForMessages;
- (id)remoteMessageDestination:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)sendReflectedNotification:(bool)arg1;
- (void)setConfigurationVersion:(unsigned long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setMediaSystemSetting:(id)arg1;
- (void)setMessageDestination:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setUpdateSetting:(id)arg1;
- (void)setValue:(id)arg1;
- (void)settingUpdate:(id)arg1 didCompleteWithError:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (long long)type;
- (void)updateMediaSystemSettings:(id)arg1;
- (id)updateSetting;
- (id)value;
- (id)valueUpdateNotificationWithMessage:(id)arg1;

@end
