/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMBookEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *payloadAuthor;
@property (nonatomic, readonly) NSDictionary *payloadDescriptor;
@property (nonatomic, readonly) NSString *payloadKind;
@property (nonatomic, readonly) NSDictionary *payloadReference;
@property (nonatomic, readonly) NSString *payloadTitle;
@property (nonatomic, readonly) NSString *payloadVersion;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)registeredClass;
+ (id)registeredType;

- (id)payloadAuthor;
- (id)payloadDescriptor;
- (id)payloadKind;
- (id)payloadReference;
- (id)payloadTitle;
- (id)payloadVersion;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end
