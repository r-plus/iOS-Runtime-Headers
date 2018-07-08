/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceInformationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *payloadQueries;
@property (readonly) Class superclass;

+ (id)ErrorResponses_ErrorResponsesItem_allowedStatusKeys;
+ (id)ErrorResponses_allowedStatusKeys;
+ (id)Queries_allowedPayloadKeys;
+ (id)QueryResponses_AutoSetupAdminAccountsItem_allowedStatusKeys;
+ (id)QueryResponses_OSUpdateSettings_allowedStatusKeys;
+ (id)QueryResponses_OrganizationInfo_allowedStatusKeys;
+ (id)QueryResponses_allowedStatusKeys;
+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)registeredClass;
+ (id)registeredType;

- (int)executionLevel;
- (bool)mustBeSupervised;
- (id)payloadQueries;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadQueries:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validPayloadQueries_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusErrorResponses_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusErrorResponses_ErrorResponsesItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusQueryResponses_AutoSetupAdminAccountsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusQueryResponses_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusQueryResponses_OSUpdateSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusQueryResponses_OrganizationInfo_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;

@end
