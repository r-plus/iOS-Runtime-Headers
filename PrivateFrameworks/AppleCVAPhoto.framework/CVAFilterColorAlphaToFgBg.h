/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAFilterColorAlphaToFgBg : NSObject {
    NSString * _label;
    <MTLComputePipelineState> * _splitFgBgKernel_rgba;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4 dstBackgroundTex:(id)arg5;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)label;

@end
