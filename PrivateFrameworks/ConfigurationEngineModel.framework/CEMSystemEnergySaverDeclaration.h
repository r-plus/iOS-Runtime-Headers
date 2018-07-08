/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *payloadComappleEnergySaverdesktopACPower;
@property (nonatomic, readonly) NSDictionary *payloadComappleEnergySaverdesktopSchedule;
@property (nonatomic, readonly) NSDictionary *payloadComappleEnergySaverportableACPower;
@property (nonatomic, readonly) NSDictionary *payloadComappleEnergySaverportableBatteryPower;
@property (nonatomic, readonly) NSNumber *payloadDestroyFVKeyOnStandby;
@property (nonatomic, readonly) NSNumber *payloadSleepDisabled;
@property (readonly) Class superclass;

+ (id)ComappleEnergySaverdesktopSchedule_allowedPayloadKeys;
+ (id)EnergySaverSettings_allowedPayloadKeys;
+ (id)PowerOnSettings_allowedPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)profileType;
+ (id)registeredClass;
+ (id)registeredType;
+ (id)restrictionPayloadKeys;

- (int)activationLevel;
- (id)assetReferences;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadComappleEnergySaverdesktopACPower;
- (id)payloadComappleEnergySaverdesktopSchedule;
- (id)payloadComappleEnergySaverportableACPower;
- (id)payloadComappleEnergySaverportableBatteryPower;
- (id)payloadDestroyFVKeyOnStandby;
- (id)payloadSleepDisabled;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadComappleEnergySaverdesktopSchedule:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadEnergySaverSettings:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadPowerOnSettings:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadComappleEnergySaverdesktopSchedule_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validPayloadEnergySaverSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadPowerOnSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
