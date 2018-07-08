/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPMediaControlSession : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    <RPMessageable> * _messenger;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) <RPMessageable> *messenger;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)mediaCommand:(int)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaGetVolumeFromDestinationID:(id)arg1 completion:(id /* block */)arg2;
- (void)mediaSetVolume:(double)arg1 destinationID:(id)arg2 completion:(id /* block */)arg3;
- (id)messenger;
- (void)setDispatchQueue:(id)arg1;
- (void)setMessenger:(id)arg1;

@end
