/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageSensorSettings : NSObject {
    bool  _autoFocusEnabled;
    AVCaptureSession * _captureSession;
    bool  _mirrorVideoOutput;
    ARVideoFormat * _videoFormat;
}

@property (nonatomic) bool autoFocusEnabled;
@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic) bool mirrorVideoOutput;
@property (nonatomic, readonly) ARVideoFormat *videoFormat;

- (void).cxx_destruct;
- (bool)autoFocusEnabled;
- (id)captureSession;
- (unsigned long long)hash;
- (id)initWithVideoFormat:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)mirrorVideoOutput;
- (void)setAutoFocusEnabled:(bool)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setMirrorVideoOutput:(bool)arg1;
- (id)videoFormat;

@end
