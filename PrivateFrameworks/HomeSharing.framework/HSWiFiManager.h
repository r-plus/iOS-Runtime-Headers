/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSWiFiManager : NSObject {
    bool  _wiFiAssociated;
    bool  _wiFiEnabled;
    struct __SCPreferences { } * _wifiPreferences;
}

@property (getter=isWiFiAssociated, nonatomic) bool wiFiAssociated;
@property (getter=isWiFiEnabled, nonatomic) bool wiFiEnabled;

+ (id)sharedWiFiManager;

- (bool)_getWiFiAssociated;
- (bool)_getWiFiEnabledFromPrefs;
- (id)_processIdentifier;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (bool)isWiFiAssociated;
- (bool)isWiFiEnabled;
- (void)setWiFiAssociated:(bool)arg1;
- (void)setWiFiEnabled:(bool)arg1;

@end
