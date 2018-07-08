/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingPoseData : NSObject <ARResultData, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    NSArray * _synchronizedResultData;
    double  _timestamp;
    struct { 
        long long state; 
        long long reason; 
        bool relocalized; 
        bool poseGraphUpdated; 
        int vioTrackingState; 
    }  _trackingState;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionCameraTransform;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *synchronizedResultData;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) struct { long long x1; long long x2; bool x3; bool x4; int x5; } trackingState;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionCameraTransform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSynchronizedResultData:(id)arg1;
- (void)setTrackingState:(struct { long long x1; long long x2; bool x3; bool x4; int x5; })arg1;
- (void)setVisionCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)synchronizedResultData;
- (double)timestamp;
- (struct { long long x1; long long x2; bool x3; bool x4; int x5; })trackingState;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionCameraTransform;

@end