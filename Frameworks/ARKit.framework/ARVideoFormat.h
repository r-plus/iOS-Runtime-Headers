/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARVideoFormat : NSObject <NSCopying> {
    AVCaptureDevice * _device;
    AVCaptureDeviceFormat * _deviceFormat;
    long long  _framesPerSecond;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageResolution;
}

@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic, readonly) AVCaptureDeviceFormat *deviceFormat;
@property (nonatomic) long long framesPerSecond;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageResolution;

+ (id)bestVideoFormatForDevice:(id)arg1 resolution:(struct { int x1; int x2; })arg2 frameRate:(double)arg3 videoBinned:(bool)arg4;
+ (id)supportedVideoFormatsForDevicePosition:(long long)arg1 deviceType:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (id)deviceFormat;
- (long long)framesPerSecond;
- (unsigned long long)hash;
- (struct CGSize { double x1; double x2; })imageResolution;
- (id)initWithCaptureDevice:(id)arg1 format:(id)arg2;
- (id)initWithImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setFramesPerSecond:(long long)arg1;

@end