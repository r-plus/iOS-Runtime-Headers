/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *payloadAccountDescription;
@property (nonatomic, readonly) NSArray *payloadConfiguredAccounts;
@property (nonatomic, readonly) NSString *payloadCredentials;
@property (nonatomic, readonly) NSString *payloadHostName;
@property (readonly) Class superclass;

+ (id)ConfiguredAccountsItem_allowedPayloadKeys;
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
- (id)payloadConfiguredAccounts;
- (id)payloadCredentials;
- (id)payloadHostName;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadConfiguredAccountsItem:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadConfiguredAccountsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
