/* Generated by RuntimeBrowser.
 */

@protocol HDHealthStoreServerInterface <NSObject>

@required

- (void)_remote_associateSampleUUIDs:(void *)arg1 withSampleUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)_remote_attachDeepBreathingSessionServerWithClient:(void *)arg1 sessionConfiguration:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 10: id, _HKDeepBreathingSessionConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HDDeepBreathingSessionServer> *, bool, NSError *, void*
- (void)remote_addSourceWithBundleIdentifier:(void *)arg1 name:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSource *, NSError *, void*
- (void)remote_allAuthorizationRecordsForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_allAuthorizationRecordsForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_allSourcesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_authorizationStatusForType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSource *, NSError *, void*
- (void)remote_clientResumedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_clientWillSuspendWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_closeTransactionWithDataType:(void *)arg1 anchor:(void *)arg2 ackTime:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HKObjectType *, NSNumber *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_containerAppExtensionEntitlementsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_deleteAllSamplesWithTypes:(void *)arg1 sourceBundleIdentifier:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteDataObjects:(void *)arg1 options:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteDataObjectsOfType:(void *)arg1 matchingFilter:(void *)arg2 options:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 11: HKObjectType *, _HKFilter *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)remote_deleteObjectsWithUUIDs:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_deleteSourceWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_discardWorkoutRoute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKWorkoutRoute *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)remote_fetchCharacteristicWithDataType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 11: HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)remote_fetchDaemonPreferenceForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)remote_fetchDevicesMatchingProperty:(void *)arg1 values:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)remote_fetchDisplayNameWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)remote_fetchUnitPreferencesForTypes:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_finishWorkoutRoute:(void *)arg1 workout:(void *)arg2 metadata:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: HKWorkoutRoute *, HKWorkout *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKWorkoutRoute *, NSError *, void*
- (void)remote_getDefaultForKey:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 11: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_getHealthLiteValueForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_handleAuthorizationForExtensionWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_hasSampleWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_hasSourceWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_obliterateHealthDataWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_orderedSourcesForObjectType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_performMigrationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_proxyForCloudSyncServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDCloudSyncServer *, NSError *, void*
- (void)remote_proxyForHealthServicesServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDHealthServicesServer *, NSError *, void*
- (void)remote_proxyForMedicalIDServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDMedicalIDServer *, NSError *, void*
- (void)remote_proxyForNanoSyncServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDNanoSyncServer *, NSError *, void*
- (void)remote_proxyForNotificationServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDNotificationServer *, NSError *, void*
- (void)remote_proxyForProfileServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDProfileServer *, NSError *, void*
- (void)remote_proxyForQueryControlServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDQueryControlServer *, NSError *, void*
- (void)remote_proxyForUtilityServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDUtilityServer *, NSError *, void*
- (void)remote_proxyForWorkoutServerWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDWorkoutServer *, NSError *, void*
- (void)remote_registerKeepAliveWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_removeDefaultForKey:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_requestAuthorizationToShareTypes:(void *)arg1 readTypes:(void *)arg2 shouldPrompt:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSSet *, NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(void *)arg1 objectType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetObjectAuthorizationStatusForObjects:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_retrieveAllAuthorizationRecordsForDocumentType:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKDocumentType *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_saveDataObjects:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_saveDataObjects:(void *)arg1 transactionIdentifier:(void *)arg2 final:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 11: NSArray *, NSUUID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, bool, NSError *, void*
- (void)remote_saveWorkoutRouteData:(void *)arg1 withRoute:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HKWorkoutRoute *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setAuthorizationStatuses:(void *)arg1 forBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setBackgroundDeliveryFrequency:(void *)arg1 forDataType:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: long long, HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setCharacteristic:(void *)arg1 forDataType:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: id, HKCharacteristicType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setDaemonPreferenceValue:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setDefaultValue:(void *)arg1 forKey:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setHealthLiteValue:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setObjectAuthorizationStatuses:(void *)arg1 forBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setPreferredUnit:(void *)arg1 forType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKUnit *, HKQuantityType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(void *)arg1 shareTypes:(void *)arg2 readTypes:(void *)arg3 prompt:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSSet *, NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_splitTotalCalories:(void *)arg1 timeInterval:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)remote_submitMetricsIgnoringAnchor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_suppressActivityAlertsForIdentifier:(void *)arg1 suppressionReason:(void *)arg2 timeoutUntilDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_unregisterKeepAliveWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_updateOrderedSources:(void *)arg1 forObjectType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_weeklySummaryInfoForDate:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
