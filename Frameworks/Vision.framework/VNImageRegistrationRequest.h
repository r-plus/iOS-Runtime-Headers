/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer * _cachedFloatingImageBuffer;
    VNImageRegistrationSignature * _cachedFloatingImageSignature;
}

+ (id)optionNameForTargetedImageSpecifyingObject;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)cachedFloatingImageBufferReturningError:(id*)arg1;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id*)arg1;
- (bool)getReferenceImageBuffer:(id*)arg1 registrationSignature:(id*)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (bool)wantsSequencedRequestObservationsRecording;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
