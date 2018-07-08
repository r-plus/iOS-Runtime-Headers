/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *payloadCommunicationServiceRules;
@property (nonatomic, readonly) NSString *payloadLDAPAccountDescription;
@property (nonatomic, readonly) NSString *payloadLDAPAccountHostName;
@property (nonatomic, readonly) NSNumber *payloadLDAPAccountUseSSL;
@property (nonatomic, readonly) NSString *payloadLDAPCredentials;
@property (nonatomic, readonly) NSArray *payloadLDAPSearchSettings;
@property (readonly) Class superclass;

+ (id)CommunicationServiceRules_DefaultServiceHandlers_allowedPayloadKeys;
+ (id)CommunicationServiceRules_allowedPayloadKeys;
+ (id)LDAPSearchSettingsItem_allowedPayloadKeys;
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
- (id)payloadCommunicationServiceRules;
- (id)payloadLDAPAccountDescription;
- (id)payloadLDAPAccountHostName;
- (id)payloadLDAPAccountUseSSL;
- (id)payloadLDAPCredentials;
- (id)payloadLDAPSearchSettings;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules_DefaultServiceHandlers:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadLDAPSearchSettingsItem:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadCommunicationServiceRules_DefaultServiceHandlers_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadCommunicationServiceRules_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validPayloadLDAPSearchSettingsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
