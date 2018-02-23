/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDSRCStream : ASDStream {
    long long  _ioReferenceCount;
    bool  _isRunning;
    long long  _maximumFramesPerIOCycle;
    ASDAudioDevice * _owningDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSObject<OS_dispatch_queue> * _srcQueue;
    struct unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper> > { 
        struct __compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper> > { 
            struct ASDSRCStreamHelper {} *__first_; 
        } __ptr_; 
    }  _streamHelper;
    NSArray * _underlyingStreams;
}

@property (nonatomic, readonly) long long maximumFramesPerIOCycle;
@property (nonatomic, retain) NSArray *underlyingStreams;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_allocateStreamingResources;
- (void)_deallocateStreamingResources;
- (void)_updateLatency;
- (void)_updateMaximumFramesPerIOCycle;
- (bool)changePhysicalFormat:(id)arg1;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithOwningDevice:(id)arg1 underlyingStreams:(id)arg2 direction:(unsigned int)arg3 plugin:(id)arg4;
- (long long)maximumFramesPerIOCycle;
- (id /* block */)readInputBlock;
- (void)setUnderlyingStreams:(id)arg1;
- (void)startStream;
- (void)stopStream;
- (id)underlyingStreams;
- (void)updateLatency;
- (id /* block */)writeMixBlock;

@end
