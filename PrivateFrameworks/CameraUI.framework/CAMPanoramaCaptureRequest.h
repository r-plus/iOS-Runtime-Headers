/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    <CAMPanoramaCaptureRequestDelegate> * _delegate;
}

@property (nonatomic, readonly) <CAMPanoramaCaptureRequestDelegate> *delegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
