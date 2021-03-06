/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *payloadApplications;
@property (nonatomic, readonly) NSNumber *payloadBlockAllIncoming;
@property (nonatomic, readonly) NSNumber *payloadEnableFirewall;
@property (nonatomic, readonly) NSNumber *payloadEnableStealthMode;
@property (readonly) Class superclass;

+ (id)ApplicationsItem_allowedPayloadKeys;
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
- (id)payloadApplications;
- (id)payloadBlockAllIncoming;
- (id)payloadEnableFirewall;
- (id)payloadEnableStealthMode;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadApplicationsItem:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadApplicationsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
