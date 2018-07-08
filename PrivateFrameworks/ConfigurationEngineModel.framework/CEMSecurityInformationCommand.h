/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecurityInformationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)SecurityInfo_FirewallSettings_ApplicationsItem_allowedStatusKeys;
+ (id)SecurityInfo_FirewallSettings_allowedStatusKeys;
+ (id)SecurityInfo_FirmwarePasswordStatus_allowedStatusKeys;
+ (id)SecurityInfo_allowedStatusKeys;
+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)registeredClass;
+ (id)registeredType;

- (int)executionLevel;
- (bool)mustBeSupervised;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusSecurityInfo_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusSecurityInfo_FirewallSettings_ApplicationsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusSecurityInfo_FirewallSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusSecurityInfo_FirmwarePasswordStatus_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;

@end
