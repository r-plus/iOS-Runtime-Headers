/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceRestartCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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

@end
