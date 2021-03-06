/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVKeyValueObservationControllerProxyObserver : NSObject {
    id /* block */  _changesBlock;
    void * _context;
    bool  _includeInitialValue;
    NSSet * _keyPaths;
    id  _observer;
    NSMutableDictionary * _previousValues;
    NSObject<OS_dispatch_queue> * _proxyObserverIvarAccessQueue;
    id  _retainedObservedObject;
    NSString * _token;
    id  _unsafeUnretainedObservedObject;
}

@property (nonatomic, readonly) id /* block */ changesBlock;
@property (nonatomic, readonly) bool includeInitialValue;
@property (nonatomic, readonly) NSSet *keyPaths;
@property (nonatomic, readonly) id observedObject;
@property (nonatomic, readonly) id observer;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3;
- (id /* block */)changesBlock;
- (bool)includeInitialValue;
- (id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(bool)arg4 includeInitialValue:(bool)arg5 changesBlock:(id /* block */)arg6;
- (id)keyPaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (id)observer;
- (void)startObserving;
- (void)stopObserving;
- (id)token;

@end
