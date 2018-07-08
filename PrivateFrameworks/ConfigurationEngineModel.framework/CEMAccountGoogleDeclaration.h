/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *payloadAccountDescription;
@property (nonatomic, readonly) NSString *payloadAccountName;
@property (nonatomic, readonly) NSDictionary *payloadCommunicationServiceRules;
@property (nonatomic, readonly) NSString *payloadEmailAddress;
@property (readonly) Class superclass;

+ (id)CommunicationServiceRules_DefaultServiceHandlers_allowedPayloadKeys;
+ (id)CommunicationServiceRules_allowedPayloadKeys;
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
- (id)payloadAccountDescription;
- (id)payloadAccountName;
- (id)payloadCommunicationServiceRules;
- (id)payloadEmailAddress;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadCommunicationServiceRules_DefaultServiceHandlers:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadCommunicationServiceRules_DefaultServiceHandlers_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadCommunicationServiceRules_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end