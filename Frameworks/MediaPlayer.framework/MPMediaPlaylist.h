/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray * _representativeArtists;
    MPMediaQuery * _seedTracksQuery;
}

@property (nonatomic, readonly) NSString *authorDisplayName;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned long long playlistAttributes;
@property (nonatomic, readonly) NSArray *seedItems;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)_createFilterableDictionary;
+ (bool)_isValidPlaylistProperty:(id)arg1;
+ (bool)canFilterByProperty:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addItemWithProductID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)artworkCatalog;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1;
- (id)authorDisplayName;
- (bool)canPlayUsingNetworkType:(long long)arg1;
- (unsigned long long)count;
- (id)descriptionText;
- (void)encodeWithCoder:(id)arg1;
- (bool)existsInLibrary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (bool)isCloudMix;
- (bool)isEqual:(id)arg1;
- (id)items;
- (unsigned long long)mediaTypes;
- (id)multiverseIdentifier;
- (id)name;
- (unsigned long long)persistentID;
- (unsigned long long)playlistAttributes;
- (void)removeFirstItem;
- (id)representativeArtists;
- (id)representativeItem;
- (id)seedItems;
- (id)seedTracksQuery;
- (void)setUserSelectedArtworkImage:(id)arg1;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (id)customPropertyHandlersCollection;
+ (void)registerSupportedCustomPropertiesWithHandlersCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
