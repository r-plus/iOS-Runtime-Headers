/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCallback : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)callbackWithQueue:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)invoke:(id)arg1;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
