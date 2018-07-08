/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLOpenGLESLayer : CAEAGLLayer <GGLLayer> {
    struct CGSize { 
        double width; 
        double height; 
    }  _backingSize;
    struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { 
        struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { 
            struct OESContext {} *__value_; 
        } __ptr_; 
    }  _context;
    <GGLLayerDelegate> * _delegate;
    struct shared_ptr<ggl::OESDevice> { 
        struct OESDevice {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__value_; 
        } __ptr_; 
    }  _texture;
}

@property (readonly) int backingFormat;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } backingSize;
@property <GGLLayerDelegate> *renderDelegate;
@property (nonatomic, readonly) struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*texture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_createLayerRenderBuffer;
- (void)_deleteLayerRenderBuffer;
- (int)backingFormat;
- (struct CGSize { double x1; double x2; })backingSize;
- (void)dealloc;
- (void)didEnterBackground;
- (id)initWithDevice:(struct shared_ptr<ggl::OESDevice> { struct OESDevice {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)layoutSublayers;
- (void)onTimerFired:(double)arg1;
- (id)renderDelegate;
- (void)setContentsScale:(double)arg1;
- (void)setRenderDelegate:(id)arg1;
- (struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)texture;

@end
