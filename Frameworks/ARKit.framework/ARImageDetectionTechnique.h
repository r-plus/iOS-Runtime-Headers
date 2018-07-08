/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageDetectionTechnique : ARTechnique {
    bool  _continousDetection;
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    NSMutableDictionary * _detectionCountByImageID;
    NSObject<OS_dispatch_semaphore> * _detectionSemaphore;
    bool  _estimateScale;
    unsigned long long  _estimateScaleCount;
    bool  _finishedLoadingImages;
    struct __CVPixelBufferPool { } * _grayPixelBufferPool;
    ARImageDetectionResultData * _latestResultData;
    NSObject<OS_dispatch_semaphore> * _loadingSemaphore;
    unsigned long long  _numberOfFramesBetweenDetectionCalls;
    unsigned long long  _numberOfSkippedFrames;
    struct CV3DODTContext { } * _odtHandle;
    NSObject<OS_dispatch_queue> * _processDataQueue;
    bool  _redetectOnSignificantEvent;
    ARImageDetectionResultData * _referenceImageData;
    NSDictionary * _referenceImageMap;
    NSArray * _referenceImages;
    struct OpaqueVTPixelTransferSession { } * _vtPixelTransferSession;
}

@property (nonatomic, readonly, copy) ARImageDetectionResultData *currentDetectionResultData;
@property (nonatomic, readonly) bool finishedLoadingImages;
@property (retain) NSDictionary *referenceImageMap;

+ (bool)_redetectionRequiredForContext:(id)arg1;

- (void).cxx_destruct;
- (id)_loadReferenceImages;
- (id)_processImageDataAndPose:(id)arg1 worldTrackingPose:(id)arg2;
- (id)currentDetectionResultData;
- (void)dealloc;
- (bool)finishedLoadingImages;
- (id)initWithReferenceImages:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)referenceImageMap;
- (void)releaseODTHandle;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (void)setReferenceImageMap:(id)arg1;

@end
