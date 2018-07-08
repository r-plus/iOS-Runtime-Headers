/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTSnapshotBuilder : NSObject {
    AVTAvatarInstance * _avatarInstance;
    SCNRenderer * _renderer;
}

+ (struct CGImage { }*)copyRescaledCGImage:(struct CGImage { }*)arg1 by:(float)arg2;
+ (id)snapshotBuilderWithAvatar:(id)arg1;

- (void).cxx_destruct;
- (void)_applyOptions:(id)arg1;
- (struct UIImage { Class x1; }*)animatedImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (struct UIImage { Class x1; }*)imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(id)arg3;
- (id)initWithAvatarInstance:(id)arg1;

@end
