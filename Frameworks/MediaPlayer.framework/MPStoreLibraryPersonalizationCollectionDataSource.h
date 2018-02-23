/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    struct vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > > { 
        struct shared_ptr<mlcore::EntityCache> {} *__begin_; 
        struct shared_ptr<mlcore::EntityCache> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<mlcore::EntityCache> *, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache> > > { 
            struct shared_ptr<mlcore::EntityCache> {} *__first_; 
        } __end_cap_; 
    }  _entityCaches;
    MPMediaLibraryView * _libraryView;
    NSMapTable * _relativeModelClassToMappingResponse;
    NSMutableDictionary * _sectionToLibraryAddedOverride;
    MPMediaLibraryEntityTranslationContext * _translatingContext;
    MPSectionedCollection * _unpersonalizedContentDescriptors;
    MPModelRequest * _unpersonalizedRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPMediaLibraryView *libraryView;
@property (nonatomic, copy) NSMapTable *relativeModelClassToMappingResponse;
@property (nonatomic, copy) NSMutableDictionary *sectionToLibraryAddedOverride;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPMediaLibraryEntityTranslationContext *translatingContext;
@property (nonatomic, retain) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (nonatomic, copy) MPModelRequest *unpersonalizedRequest;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(long long)arg3;
+ (id)_identifiersByCombiningPersonalizedIdentifiers:(id)arg1 unpersonalizedIdentifiers:(id)arg2;
+ (id)_intersectingLightweightPersonalizationPropertiesForModelClass:(Class)arg1;
+ (id)_intersectingPlaybackPositionLightweightPersonalizationProperties;
+ (id)_intersectingStoreAssetLightweightPersonalizationProperties;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 identifiers:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 libraryPlaybackPosition:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)arg1 libraryAsset:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)arg1 requestedProperties:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::EntityCache> { struct EntityCache {} *x1; struct __shared_weak_count {} *x2; })_entityCacheForEntityClass:(struct EntityClass { int (**x1)(); struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct unordered_map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)arg1 propertiesToFetch:(struct vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *> > { struct ModelPropertyBase {} **x1; struct ModelPropertyBase {} **x2; struct __compressed_pair<mlcore::ModelPropertyBase **, std::__1::allocator<mlcore::ModelPropertyBase *> > { struct ModelPropertyBase {} **x_3_1_1; } x3; })arg2;
- (id)_libraryObjectWithRelativeModelClass:(Class)arg1 identifierSet:(id)arg2 propertySet:(id)arg3;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)libraryView;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)relativeModelClassToMappingResponse;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionToLibraryAddedOverride;
- (void)setLibraryView:(id)arg1;
- (void)setRelativeModelClassToMappingResponse:(id)arg1;
- (void)setSectionToLibraryAddedOverride:(id)arg1;
- (void)setTranslatingContext:(id)arg1;
- (void)setUnpersonalizedContentDescriptors:(id)arg1;
- (void)setUnpersonalizedRequest:(id)arg1;
- (id)translatingContext;
- (id)unpersonalizedContentDescriptors;
- (id)unpersonalizedRequest;

@end
