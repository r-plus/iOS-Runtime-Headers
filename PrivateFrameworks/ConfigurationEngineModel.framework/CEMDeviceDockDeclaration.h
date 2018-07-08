/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceDockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *payloadAllowDockFixupOverride;
@property (nonatomic, readonly) NSNumber *payloadAutohide;
@property (nonatomic, readonly) NSNumber *payloadAutohideImmutable;
@property (nonatomic, readonly) NSNumber *payloadContentsImmutable;
@property (nonatomic, readonly) NSNumber *payloadLargesize;
@property (nonatomic, readonly) NSNumber *payloadLaunchanim;
@property (nonatomic, readonly) NSNumber *payloadLaunchanimImmutable;
@property (nonatomic, readonly) NSArray *payloadMCXDockSpecialFolders;
@property (nonatomic, readonly) NSNumber *payloadMagnification;
@property (nonatomic, readonly) NSNumber *payloadMagnifyImmutable;
@property (nonatomic, readonly) NSNumber *payloadMagsizeImmutable;
@property (nonatomic, readonly) NSString *payloadMineffect;
@property (nonatomic, readonly) NSNumber *payloadMineffectImmutable;
@property (nonatomic, readonly) NSNumber *payloadMinimizeToApplication;
@property (nonatomic, readonly) NSNumber *payloadMinimizeToApplicationImmutable;
@property (nonatomic, readonly) NSString *payloadOrientation;
@property (nonatomic, readonly) NSNumber *payloadPositionImmutable;
@property (nonatomic, readonly) NSNumber *payloadShowProcessIndicators;
@property (nonatomic, readonly) NSNumber *payloadSizeImmutable;
@property (nonatomic, readonly) NSArray *payloadStaticApps;
@property (nonatomic, readonly) NSNumber *payloadStaticOnly;
@property (nonatomic, readonly) NSArray *payloadStaticOthers;
@property (nonatomic, readonly) NSNumber *payloadTilesize;
@property (readonly) Class superclass;

+ (id)StaticItems_TileData_allowedPayloadKeys;
+ (id)StaticItems_allowedPayloadKeys;
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
- (id)payloadAllowDockFixupOverride;
- (id)payloadAutohide;
- (id)payloadAutohideImmutable;
- (id)payloadContentsImmutable;
- (id)payloadLargesize;
- (id)payloadLaunchanim;
- (id)payloadLaunchanimImmutable;
- (id)payloadMCXDockSpecialFolders;
- (id)payloadMagnification;
- (id)payloadMagnifyImmutable;
- (id)payloadMagsizeImmutable;
- (id)payloadMineffect;
- (id)payloadMineffectImmutable;
- (id)payloadMinimizeToApplication;
- (id)payloadMinimizeToApplicationImmutable;
- (id)payloadOrientation;
- (id)payloadPositionImmutable;
- (id)payloadShowProcessIndicators;
- (id)payloadSizeImmutable;
- (id)payloadStaticApps;
- (id)payloadStaticOnly;
- (id)payloadStaticOthers;
- (id)payloadTilesize;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadStaticItems:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadStaticItems_TileData:(id)arg1 withAssetProviders:(id)arg2;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;
- (bool)validPayloadStaticItems_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validPayloadStaticItems_TileData_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3;
- (bool)validStatusDictionary:(id)arg1 error:(id*)arg2;

@end