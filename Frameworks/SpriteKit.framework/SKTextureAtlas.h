/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureAtlas : NSObject <NSCoding> {
    NSString * _atlasName;
    bool  _isCUIImageAtlas;
    NSDictionary * _textureDict;
    struct unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > > { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKTexture *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _textureMap;
}

@property (nonatomic, readonly) NSArray *textureNames;

+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2;
+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(bool)arg3;
+ (id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2;
+ (id)atlasNamed:(id)arg1;
+ (id)atlasWithDictionary:(id)arg1;
+ (bool)canUseObjectForAtlas:(id)arg1;
+ (struct CGImage { }*)createCGImageFromCUINamedImage:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)findTextureNamed:(id)arg1;
+ (id)getSupportedPostfixes;
+ (id)lookupCachedTextureNamed:(id)arg1;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_copyImageData;
- (void)_prePopulateCache;
- (void)commonInit;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadTextures;
- (void)loadTexturesFromCUIImageAtlas:(id)arg1;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)preloadWithCompletionHandler:(id /* block */)arg1;
- (id)textureNamed:(id)arg1;
- (id)textureNames;
- (void)unload;

@end
