/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *payloadAllowAllAppsAccess;
@property (nonatomic, readonly) NSString *payloadCertServer;
@property (nonatomic, readonly) NSString *payloadCertTemplate;
@property (nonatomic, readonly) NSString *payloadCertificateAcquisitionMechanism;
@property (nonatomic, readonly) NSString *payloadCertificateAuthority;
@property (nonatomic, readonly) NSNumber *payloadCertificateRenewalTimeInterval;
@property (nonatomic, readonly) NSString *payloadDescription;
@property (nonatomic, readonly) NSNumber *payloadKeyIsExtractable;
@property (nonatomic, readonly) NSNumber *payloadKeysize;
@property (nonatomic, readonly) NSNumber *payloadPromptForCredentials;
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
- (id)payloadAllowAllAppsAccess;
- (id)payloadCertServer;
- (id)payloadCertTemplate;
- (id)payloadCertificateAcquisitionMechanism;
- (id)payloadCertificateAuthority;
- (id)payloadCertificateRenewalTimeInterval;
- (id)payloadDescription;
- (id)payloadKeyIsExtractable;
- (id)payloadKeysize;
- (id)payloadPromptForCredentials;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
