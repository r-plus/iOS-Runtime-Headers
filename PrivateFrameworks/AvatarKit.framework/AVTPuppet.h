/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTPuppet : AVTAvatarInstance <NSCopying> {
    SCNNode * _lightingNode;
    bool  _loaded;
    NSString * _name;
    NSDictionary * _options;
}

@property (nonatomic, readonly) SCNNode *lightingNode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *options;

+ (id)pathForPuppetNamed:(id)arg1 options:(id)arg2;
+ (void)preloadPuppet:(id)arg1;
+ (void)preloadPuppetNamed:(id)arg1;
+ (id)puppetNamed:(id)arg1 options:(id)arg2;
+ (id)puppetNames;
+ (struct UIImage { Class x1; }*)thumbnailForPuppetNamed:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (void)_load;
- (id)avatarNode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)lightingNode;
- (id)name;
- (id)options;
- (void)setAvatarNode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(id)arg1;

@end
