/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *payloadFamilyControlsEnabled;
@property (nonatomic, readonly) NSDictionary *payloadTimeLimits;
@property (readonly) Class superclass;

+ (id)Allowance_allowedPayloadKeys;
+ (id)TimeLimits_allowedPayloadKeys;
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
- (id)payloadFamilyControlsEnabled;
- (id)payloadTimeLimits;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadAllowance:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadTimeLimits:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadAllowance_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validPayloadTimeLimits_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
