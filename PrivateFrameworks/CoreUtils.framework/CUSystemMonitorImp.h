/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUSystemMonitorImp : NSObject <CXCallObserverDelegate, FMFSessionDelegate> {
    int  _activeCallCount;
    CXCallObserver * _callObserver;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _fmfDevicesChangedToken;
    int  _meDeviceChangedToken;
    NSString * _meDeviceFMFDeviceID;
    NSString * _meDeviceIDSDeviceID;
    NSString * _meDeviceName;
    bool  _meDeviceValid;
    struct NSMutableSet { Class x1; } * _monitors;
    int  _powerSourceToken;
    bool  _powerUnlimited;
    bool  _primaryAppleIDIsHSA2;
    bool  _primaryAppleIDObserving;
    int  _screenBlankedToken;
    bool  _screenLocked;
    int  _screenLockedToken;
    bool  _screenOn;
    bool  _screenSaverActive;
    unsigned int  _wifiFlags;
    CUWiFiManager * _wifiManager;
    int  _wifiState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_activeCallCountUnached;
- (void)_callMonitorStart;
- (void)_callMonitorStop;
- (bool)_hasMonitorPassingTest:(id /* block */)arg1;
- (void)_invokeBlock:(id /* block */)arg1 passingTest:(id /* block */)arg2;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(bool)arg3;
- (void)_meDeviceCheckStart:(bool)arg1;
- (void)_meDeviceMonitorStart;
- (void)_meDeviceMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (void)_primaryAppleIDChanged:(id)arg1;
- (void)_primaryAppleIDMonitorStart;
- (void)_primaryAppleIDMonitorStop;
- (void)_screenChanged:(bool)arg1;
- (void)_screenLockedChanged;
- (void)_screenLockedMonitorStart;
- (void)_screenLockedMonitorStop;
- (void)_screenOnMonitorStart;
- (void)_screenOnMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenSaverMonitorStop;
- (void)_update;
- (void)_wifiMonitorStart;
- (void)_wifiMonitorStateChanged:(bool)arg1;
- (void)_wifiMonitorStop;
- (void)addMonitor:(id)arg1 completion:(id /* block */)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (void)removeMonitor:(id)arg1;
- (void)updateWithQueue:(id)arg1 completion:(id /* block */)arg2;

@end
