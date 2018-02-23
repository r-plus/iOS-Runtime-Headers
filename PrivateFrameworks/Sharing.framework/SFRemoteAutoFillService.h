/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteAutoFillService : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    SFService * _service;
    int  _serviceState;
    id /* block */  _showPINHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ showPINHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleSessionStarted:(id)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runServiceStart;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;
- (void)setShowPINHandler:(id /* block */)arg1;
- (id /* block */)showPINHandler;

@end
