/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryCommandBuffer : MTLToolsCommandBuffer {
    struct MTLTelemetryKernelStateRec { 
        int pbAlloc; 
        int spmRenderCount; 
        int tiledSceneBytes; 
        int renderCount; 
    }  _initKernelState;
    MTLTelemetryDevice * _telemetryDevice;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * attachmentCount;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * blitEncoderBlitDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > > { 
        struct __hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  blitMap;
    unsigned int  cbBlits;
    unsigned int  cbDispatches;
    unsigned int  cbDraws;
    unsigned int  cbTextureBarriers;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * computeEncoderDispatchDistribution;
    unsigned int  depthClipModeClampCount;
    struct MTLTelemetryDispatchDistributionRec { unsigned int x1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticUIRec { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned long long x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned long long x_5_1_3; unsigned int x_5_1_4; } x5; struct MTLTelemetryStatisticUIRec { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned long long x_6_1_3; unsigned int x_6_1_4; } x6; struct MTLTelemetryStatisticUIRec { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned long long x_7_1_3; unsigned int x_7_1_4; } x7; struct MTLTelemetryStatisticUIRec { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned long long x_8_1_3; unsigned int x_8_1_4; } x8; struct MTLTelemetryStatisticUIRec { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned long long x_9_1_3; unsigned int x_9_1_4; } x9; } * dispatchDistribution;
    struct MTLTelemetryDrawDistributionRec { struct MTLTelemetryDrawStatRec { unsigned int x_1_1_1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; } x_1_1_2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned long long x_3_2_3; unsigned int x_3_2_4; } x_1_1_3; } x1[5][3][3]; } * drawDistribution;
    struct MTLTelemetryEncoderCountRec { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } * encoderCount;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * parallellRenderEncoderDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * renderEncoderDrawCallDistribution;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * renderTargetArrayLengthDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > { 
        struct __hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  renderTargetMap;
    struct MTLTelemetryStatisticUIRec { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned int x4; } * textureBindCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)blitCommandEncoder;
- (void)commit;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithParallelExecution;
- (void)dealloc;
- (void)initDistributions;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)mergeDistributions;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;

@end
