/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTMaterial : NSObject <AVTLossilyEquatable> {
    struct UIColor { Class x1; } * baseColor;
    NSString * diffuse;
    NSString * gradient;
    NSString * normal;
    double  opacity;
    NSString * specular;
}

@property (retain) UIColor *baseColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *diffuse;
@property (retain) NSString *gradient;
@property (readonly) unsigned long long hash;
@property (retain) NSString *normal;
@property double opacity;
@property (retain) NSString *specular;
@property (readonly) Class superclass;

+ (id)fabricsBaseMaterials;
+ (id)materialWithColor:(struct UIColor { Class x1; }*)arg1;

- (void).cxx_destruct;
- (struct UIColor { Class x1; }*)baseColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diffuse;
- (id)gradient;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualExceptBaseColor:(id)arg1;
- (bool)isLossilyEqual:(id)arg1;
- (id)normal;
- (double)opacity;
- (id)secondaryTintMaterial;
- (void)setBaseColor:(struct UIColor { Class x1; }*)arg1;
- (void)setDiffuse:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setNormal:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setSpecular:(id)arg1;
- (id)specular;

@end
