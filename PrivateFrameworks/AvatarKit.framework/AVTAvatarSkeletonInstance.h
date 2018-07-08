/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTAvatarSkeletonInstance : NSObject {
    NSMapTable * _bindPose;
    SCNNode * _referenceNode;
    SCNNode * _rootNode;
    SCNScene * _scene;
}

@property (readonly) NSMapTable *bindPose;
@property (readonly) SCNNode *referenceNode;
@property (readonly) SCNNode *rootNode;
@property (readonly) SCNScene *scene;

+ (id)skeleton;

- (void).cxx_destruct;
- (float)_getNodeAngle:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })absolutePositionForRigElevation:(double)arg1 spacing:(double)arg2 symmetry:(bool)arg3;
- (id)bindPose;
- (struct SCNVector3 { float x1; float x2; float x3; })bindPoseForNode:(id)arg1;
- (id)bonesForRig:(id)arg1;
- (void)commonInit;
- (void)getRigValues:(id)arg1 symmetry:(bool)arg2 withBone:(id)arg3 spacingOut:(double*)arg4 elevationOut:(double*)arg5 scaleOut:(double*)arg6 rotationOut:(double*)arg7;
- (id)init;
- (id)referenceNode;
- (id)rootNode;
- (id)scene;
- (void)storeBindPose:(id)arg1;
- (void)updateBoneForRig:(id)arg1;
- (void)updateBonesFromRigs:(id)arg1;
- (void)updateRig:(id)arg1 fromBone:(id)arg2 symmetry:(bool)arg3 applyRange:(bool)arg4;

@end