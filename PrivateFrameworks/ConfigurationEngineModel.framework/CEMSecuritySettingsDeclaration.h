/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecuritySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *payloadAllowEnablingRestrictions;
@property (nonatomic, readonly) NSNumber *payloadAllowEraseContentAndSettings;
@property (nonatomic, readonly) NSNumber *payloadAllowOTAPKIUpdates;
@property (nonatomic, readonly) NSNumber *payloadAllowUntrustedTLSPrompt;
@property (nonatomic, readonly) NSNumber *payloadForceEncryptedBackup;
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
- (id)payloadAllowEnablingRestrictions;
- (id)payloadAllowEraseContentAndSettings;
- (id)payloadAllowOTAPKIUpdates;
- (id)payloadAllowUntrustedTLSPrompt;
- (id)payloadForceEncryptedBackup;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end