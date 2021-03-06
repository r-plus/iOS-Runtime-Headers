/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkDirectoryServiceDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *payloadADAllowMultiDomainAuth;
@property (nonatomic, readonly) NSNumber *payloadADAllowMultiDomainAuthFlag;
@property (nonatomic, readonly) NSNumber *payloadADCreateMobileAccountAtLogin;
@property (nonatomic, readonly) NSNumber *payloadADCreateMobileAccountAtLoginFlag;
@property (nonatomic, readonly) NSString *payloadADDefaultUserShell;
@property (nonatomic, readonly) NSNumber *payloadADDefaultUserShellFlag;
@property (nonatomic, readonly) NSArray *payloadADDomainAdminGroupList;
@property (nonatomic, readonly) NSNumber *payloadADDomainAdminGroupListFlag;
@property (nonatomic, readonly) NSNumber *payloadADForceHomeLocal;
@property (nonatomic, readonly) NSNumber *payloadADForceHomeLocalFlag;
@property (nonatomic, readonly) NSString *payloadADMapGGIDAttribute;
@property (nonatomic, readonly) NSNumber *payloadADMapGGIDAttributeFlag;
@property (nonatomic, readonly) NSString *payloadADMapGIDAttribute;
@property (nonatomic, readonly) NSNumber *payloadADMapGIDAttributeFlag;
@property (nonatomic, readonly) NSString *payloadADMapUIDAttribute;
@property (nonatomic, readonly) NSNumber *payloadADMapUIDAttributeFlag;
@property (nonatomic, readonly) NSString *payloadADMountStyle;
@property (nonatomic, readonly) NSString *payloadADNamespace;
@property (nonatomic, readonly) NSNumber *payloadADNamespaceFlag;
@property (nonatomic, readonly) NSString *payloadADOrganizationalUnit;
@property (nonatomic, readonly) NSString *payloadADPacketEncrypt;
@property (nonatomic, readonly) NSNumber *payloadADPacketEncryptFlag;
@property (nonatomic, readonly) NSString *payloadADPacketSign;
@property (nonatomic, readonly) NSNumber *payloadADPacketSignFlag;
@property (nonatomic, readonly) NSString *payloadADPreferredDCServer;
@property (nonatomic, readonly) NSNumber *payloadADPreferredDCServerFlag;
@property (nonatomic, readonly) NSArray *payloadADRestrictDDNS;
@property (nonatomic, readonly) NSNumber *payloadADRestrictDDNSFlag;
@property (nonatomic, readonly) NSNumber *payloadADTrustChangePassIntervalDays;
@property (nonatomic, readonly) NSNumber *payloadADTrustChangePassIntervalDaysFlag;
@property (nonatomic, readonly) NSNumber *payloadADUseWindowsUNCPath;
@property (nonatomic, readonly) NSNumber *payloadADUseWindowsUNCPathFlag;
@property (nonatomic, readonly) NSNumber *payloadADWarnUserBeforeCreatingMA;
@property (nonatomic, readonly) NSNumber *payloadADWarnUserBeforeCreatingMAFlag;
@property (nonatomic, readonly) NSString *payloadClientID;
@property (nonatomic, readonly) NSString *payloadDescription;
@property (nonatomic, readonly) NSString *payloadHostName;
@property (nonatomic, readonly) NSString *payloadPassword;
@property (nonatomic, readonly) NSString *payloadUserName;
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
- (id)payloadADAllowMultiDomainAuth;
- (id)payloadADAllowMultiDomainAuthFlag;
- (id)payloadADCreateMobileAccountAtLogin;
- (id)payloadADCreateMobileAccountAtLoginFlag;
- (id)payloadADDefaultUserShell;
- (id)payloadADDefaultUserShellFlag;
- (id)payloadADDomainAdminGroupList;
- (id)payloadADDomainAdminGroupListFlag;
- (id)payloadADForceHomeLocal;
- (id)payloadADForceHomeLocalFlag;
- (id)payloadADMapGGIDAttribute;
- (id)payloadADMapGGIDAttributeFlag;
- (id)payloadADMapGIDAttribute;
- (id)payloadADMapGIDAttributeFlag;
- (id)payloadADMapUIDAttribute;
- (id)payloadADMapUIDAttributeFlag;
- (id)payloadADMountStyle;
- (id)payloadADNamespace;
- (id)payloadADNamespaceFlag;
- (id)payloadADOrganizationalUnit;
- (id)payloadADPacketEncrypt;
- (id)payloadADPacketEncryptFlag;
- (id)payloadADPacketSign;
- (id)payloadADPacketSignFlag;
- (id)payloadADPreferredDCServer;
- (id)payloadADPreferredDCServerFlag;
- (id)payloadADRestrictDDNS;
- (id)payloadADRestrictDDNSFlag;
- (id)payloadADTrustChangePassIntervalDays;
- (id)payloadADTrustChangePassIntervalDaysFlag;
- (id)payloadADUseWindowsUNCPath;
- (id)payloadADUseWindowsUNCPathFlag;
- (id)payloadADWarnUserBeforeCreatingMA;
- (id)payloadADWarnUserBeforeCreatingMAFlag;
- (id)payloadClientID;
- (id)payloadDescription;
- (id)payloadHostName;
- (id)payloadPassword;
- (id)payloadUserName;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
