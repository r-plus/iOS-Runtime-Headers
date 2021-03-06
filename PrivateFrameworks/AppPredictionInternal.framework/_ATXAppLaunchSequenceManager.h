/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchSequenceManager : NSObject {
    NSMapTable * _appIntentLaunchSequence;
    NSMapTable * _appLaunchSequence;
    _ATXDataStore * _datastore;
    NSString * _lastAppIntentLaunch;
    NSDate * _lastAppIntentLaunchDate;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) NSString *lastAppIntentLaunch;
@property (nonatomic, readonly) NSDate *lastAppIntentLaunchDate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addBundleIdToLaunchSequence:(id)arg1 date:(id)arg2;
- (void)addLaunchForAppIntent:(id)arg1 date:(id)arg2;
- (void)decayAllAppIntentLaunchSequencesWithHalfLife:(double)arg1;
- (void)decayAllLaunchSequencesWithHalfLife:(double)arg1;
- (void)deleteAllLaunchesForAppIntents:(id)arg1;
- (void)deleteAllLaunchesForBundles:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)lastAppIntentLaunch;
- (id)lastAppIntentLaunchDate;
- (id)launchSequence;
- (id)launchSequenceForAppIntent:(id)arg1;
- (id)launchSequenceForBundle:(id)arg1;
- (id)syncQueue;

@end
