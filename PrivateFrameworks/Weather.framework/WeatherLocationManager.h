/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {
    NSTimer * _accuracyFallbackTimer;
    int  _authorizationStatus;
    NSTimer * _delayedUpdateTimer;
    <CLLocationManagerDelegate> * _delegate;
    NSString * _effectiveBundleIdentifier;
    bool  _isInternalBuild;
    float  _lastLocationAccuracy;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _lastLocationCoord;
    NSDate * _lastLocationTimeStamp;
    double  _lastLocationUpdateTime;
    CLLocationManager * _locationManager;
    bool  _locationTrackingIsReady;
    bool  _locationUpdatesEnabled;
    double  _nextPlannedUpdate;
    double  _oldestAllowedUpdateTime;
    WeatherPreferences * _preferences;
    unsigned long long  _updateInterval;
}

@property (nonatomic, retain) NSTimer *accuracyFallbackTimer;
@property (nonatomic) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSTimer *delayedUpdateTimer;
@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceFilter;
@property (nonatomic, readonly, copy) NSString *effectiveBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic) float lastLocationAccuracy;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } lastLocationCoord;
@property (nonatomic, copy) NSDate *lastLocationTimeStamp;
@property (nonatomic) double lastLocationUpdateTime;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic) bool locationTrackingIsReady;
@property (nonatomic) bool locationUpdatesEnabled;
@property (nonatomic) double nextPlannedUpdate;
@property (nonatomic) double oldestAllowedUpdateTime;
@property (nonatomic, retain) WeatherPreferences *preferences;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long updateInterval;

+ (void)clearSharedLocationManager;
+ (int)locationManagerAuthorizationWithEffectiveBundleId:(id)arg1;
+ (id)sharedWeatherLocationManager;

- (void).cxx_destruct;
- (id)accuracyFallbackTimer;
- (void)accuracyFallbackTimerDidFire:(id)arg1;
- (void)askForLocationManagerAuthorization;
- (int)authorizationStatus;
- (void)cancelAccuracyFallbackTimer;
- (void)cancelDelayedUpdateTimer;
- (void)clearLastLocationUpdateTime;
- (void)clearLocalWeatherUpdateState;
- (void)dealloc;
- (id)delayedUpdateTimer;
- (void)delayedUpdateTimerDidFire:(id)arg1;
- (id)delegate;
- (double)distanceFilter;
- (id)effectiveBundleIdentifier;
- (int)forceLoadingAuthorizationStatus;
- (void)forceLocationUpdate;
- (bool)hasCrossedHourBoundary;
- (id)init;
- (id)initWithPreferences:(id)arg1;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (bool)isCacheOutOfDate;
- (bool)isInternalBuild;
- (bool)isLocalStaleOrOutOfDate;
- (bool)isLocationWithInRange:(id)arg1;
- (float)lastLocationAccuracy;
- (struct CLLocationCoordinate2D { double x1; double x2; })lastLocationCoord;
- (id)lastLocationTimeStamp;
- (double)lastLocationUpdateTime;
- (bool)localWeatherAuthorized;
- (id)location;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (bool)locationTrackingIsReady;
- (bool)locationUpdatesEnabled;
- (void)monitorLocationAuthorization;
- (double)nextPlannedUpdate;
- (double)oldestAllowedUpdateTime;
- (id)preferences;
- (void)scheduleDelayedUpdate:(double)arg1;
- (void)setAccuracyFallbackTimer:(id)arg1;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setDelayedUpdateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setLastLocationAccuracy:(float)arg1;
- (void)setLastLocationCoord:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLastLocationTimeStamp:(id)arg1;
- (void)setLastLocationUpdateTime:(double)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationTrackingActive:(bool)arg1;
- (void)setLocationTrackingIsReady:(bool)arg1;
- (void)setLocationTrackingReady:(bool)arg1 activelyTracking:(bool)arg2 watchKitExtension:(bool)arg3;
- (void)setLocationTrackingReady:(bool)arg1 activelyTracking:(bool)arg2 watchKitExtension:(bool)arg3 shouldRequestAuthorization:(bool)arg4;
- (void)setLocationUpdatesEnabled:(bool)arg1;
- (void)setNextPlannedUpdate:(double)arg1;
- (void)setOldestAllowedUpdateTime:(double)arg1;
- (void)setPreferences:(id)arg1;
- (void)setUpdateInterval:(unsigned long long)arg1;
- (void)stopLocationUpdate;
- (unsigned long long)updateInterval;
- (void)updateLocation:(id)arg1;
- (void)updateLocationWithNoConditionCheck;

@end
