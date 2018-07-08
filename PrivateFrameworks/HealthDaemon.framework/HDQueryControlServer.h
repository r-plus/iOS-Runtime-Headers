/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryControlServer : HDSubserver <HDQueryControlServerInterface, HDQueryServerDelegate> {
    NSMutableDictionary * _queryServersByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientSourceIdentifierWithError:(id*)arg1;
- (bool)_queue_hasActiveQueries;
- (void)_startQueryServer:(id)arg1 handler:(id /* block */)arg2;
- (unsigned int)clientSDKVersionForQueryServer:(id)arg1;
- (id)initWithParentServer:(id)arg1;
- (void)invalidate;
- (id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2;
- (bool)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id*)arg3;
- (void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(id /* block */)arg3;
- (bool)queryServerClientHasActiveWorkout:(id)arg1;
- (bool)queryServerClientIsInBackground:(id)arg1;
- (void)queryServerDidFinish:(id)arg1;
- (bool)queryServerShouldObserveInBackground:(id)arg1;
- (id)readAuthorizationStatusForQueryServer:(id)arg1 type:(id)arg2 error:(id*)arg3;
- (void)remote_startActivityStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startAnchoredObjectQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startCorrelationQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startCurrentActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startDateRangeQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startDocumentQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startFitnessFriendsQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 handler:(id /* block */)arg5;
- (void)remote_startHeartRateHistogramQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startHeartRateSummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startLatestSummariesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startLocationSeriesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startObserverQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(id /* block */)arg5;
- (void)remote_startSampleCountQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startSampleQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startSampleTypesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startSourceQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startStatisticsCollectionQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;
- (void)remote_startStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(id /* block */)arg4;

@end
