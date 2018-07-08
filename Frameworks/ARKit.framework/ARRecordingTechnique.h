/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRecordingTechnique : ARTechnique {
    AVAssetWriterInput * _accelInput;
    AVAssetWriterInputMetadataAdaptor * _accelInputAdaptor;
    AVAssetWriter * _assetWriter;
    AVAssetWriterInput * _depthInput;
    AVAssetWriterInputPixelBufferAdaptor * _depthInputAdaptor;
    AVAssetWriterInput * _deviceOrientationInput;
    AVAssetWriterInputMetadataAdaptor * _deviceOrientationInputAdaptor;
    bool  _expectDepthData;
    AVAssetWriterInput * _gyroInput;
    AVAssetWriterInputMetadataAdaptor * _gyroInputAdaptor;
    NSObject<OS_dispatch_semaphore> * _inputIsReadySemaphore;
    bool  _isWaitingUntilInputIsReady;
    NSMutableDictionary * _lastRecordedTimestamps;
    NSMutableArray * _motionDataCache;
    NSURL * _outputFileURL;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSSet * _recordableResultClasses;
    <ARRecordingTechniqueDelegate> * _recordingTechniqueDelegate;
    NSDictionary * _resultAdaptors;
    NSDictionary * _resultInputs;
    unsigned long long  _sensorDataTypes;
    double  _sessionSourceTime;
    bool  _sessionStarted;
    bool  _shouldSaveVideoInPhotosLibrary;
    bool  _stopRecordingRequested;
    AVAssetWriterInput * _videoInput;
    AVAssetWriterInputPixelBufferAdaptor * _videoInputAdaptor;
    AVAssetWriterInput * _videoMetadataInput;
    AVAssetWriterInputMetadataAdaptor * _videoMetadataInputAdaptor;
}

@property (nonatomic) bool expectDepthData;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) NSSet *recordingResultDataClasses;
@property (nonatomic, readonly) unsigned long long recordingSensorDataTypes;
@property (nonatomic) <ARRecordingTechniqueDelegate> *recordingTechniqueDelegate;
@property (nonatomic) bool shouldSaveVideoInPhotosLibrary;

+ (id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)copyVideoToPhotoLibrary;
- (void)createAssetWriter;
- (id)createFileMetadata;
- (void)dealloc;
- (bool)expectDepthData;
- (void)finishRecording;
- (void)initAssetWriterIfRequiredWithImageData:(id)arg1;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (id)initWithTechniques:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputFileURL;
- (id)processData:(id)arg1;
- (id)recordingResultDataClasses;
- (unsigned long long)recordingSensorDataTypes;
- (id)recordingTechniqueDelegate;
- (void)removeTemporaryVideoFile;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)setExpectDepthData:(bool)arg1;
- (void)setRecordingTechniqueDelegate:(id)arg1;
- (void)setShouldSaveVideoInPhotosLibrary:(bool)arg1;
- (void)setupResultTracks;
- (void)setupSensorTracksWithImageData:(id)arg1;
- (bool)shouldSaveVideoInPhotosLibrary;
- (void)startAssetWriterAtTimestamp:(double)arg1;
- (void)writeAccelerometerMetadata:(id)arg1;
- (void)writeData:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4;
- (void)writeDepthMap:(id)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)writeDeviceOrientationMetadata:(id)arg1;
- (void)writeGyroscopeMetadata:(id)arg1;
- (void)writeImageData:(id)arg1;
- (void)writeImageMetadata:(id)arg1;
- (void)writeOutCachedMotionDataIfPresent;
- (void)writePixelBuffer:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
