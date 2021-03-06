/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *payloadAllowManagedAppsCloudSync;
@property (nonatomic, readonly) NSNumber *payloadAllowOpenFromManagedToUnmanaged;
@property (nonatomic, readonly) NSNumber *payloadAllowOpenFromUnmanagedToManaged;
@property (nonatomic, readonly) NSNumber *payloadForceAirDropUnmanaged;
@property (readonly) Class superclass;

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
- (id)payloadAllowManagedAppsCloudSync;
- (id)payloadAllowOpenFromManagedToUnmanaged;
- (id)payloadAllowOpenFromUnmanagedToManaged;
- (id)payloadForceAirDropUnmanaged;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
