/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTask : NSURLSessionTask {
    NSDictionary * _DuetActivityProperties;
    unsigned short  _TLSNegotiatedCipherSuite;
    NSData * __TCPConnectionMetadata;
    long long  __countOfBytesReceivedEncoded;
    long long  __countOfPendingBytesReceivedEncoded;
    unsigned long long  _allowedProtocolTypes;
    bool  _allowsCellular;
    bool  _allowsQUIC;
    <NSURLSessionAppleIDContext> * _appleIDContext;
    NSURLSessionTaskHTTPAuthenticator * _authenticator;
    bool  _authenticatorConfiguredViaTaskProperty;
    NSURL * _backgroundPublishingURL;
    NSDictionary * _backgroundTaskTimingData;
    NSString * _boundInterfaceIdentifier;
    long long  _bytesPerSecondLimitValue;
    bool  _cacheOnly;
    int  _cachePolicy;
    struct __CFDictionary { } * _cachedSocketStreamProperties;
    struct _CFURLCache { } * _cfCache;
    struct OpaqueCFHTTPCookieStorage { } * _cfCookies;
    struct _CFURLCredentialStorage { } * _cfCreds;
    struct _CFHSTSPolicy { } * _cfHSTS;
    NSURLSessionConfiguration * _configuration;
    bool  _connectionIsCellular;
    NSArray * _contentDispositionFallbackArray;
    int  _cookieAcceptPolicy;
    long long  _countOfBytesClientExpectsToReceive;
    long long  _countOfBytesClientExpectsToSend;
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesExpectedToSend;
    long long  _countOfBytesReceived;
    long long  _countOfBytesSent;
    struct _CFURLRequest { } * _currentCFURLRequest;
    NSURLRequest * _currentRequest;
    unsigned int  _darkWakePowerAssertion;
    NSDictionary * _dependencyInfo;
    NSURLSessionTaskDependencyTree * _dependencyTree;
    bool  _disallowCellular;
    bool  _doesSZExtractorConsumeExtractedData;
    NSProgress * _downloadProgress;
    NSDate * _earliestBeginDate;
    NSError * _error;
    long long  _expectedWorkload;
    <SZExtractor> * _extractor;
    bool  _extractorFinishedDecoding;
    bool  _extractorPreparedForExtraction;
    bool  _hasSZExtractor;
    NSURLSessionTaskMetrics * _incompleteTaskMetrics;
    bool  _isInUpload;
    NSURL * _ledBellyFallbackURL;
    NSString * _ledBellyServiceIdentifier;
    NSDictionary * _legacySocketStreamProperties;
    double  _loadingPriorityValue;
    int  _networkServiceType;
    NSURLRequest * _originalRequest;
    NSString * _pathToDownloadTaskFile;
    struct __PerformanceTiming { } * _performanceTiming;
    unsigned int  _powerAssertion;
    bool  _preconnect;
    bool  _preventsIdleSystemSleep;
    bool  _preventsSystemHTTPProxyAuthentication;
    float  _priorityHint;
    long long  _priorityValue;
    NSProgress * _progress;
    bool  _progressReportingFinished;
    bool  _prohibitAuthUI;
    id  _protocolForTask;
    NSDictionary * _proxySettings;
    NSURL * _publishingURL;
    long long  _requestPriority;
    NSURLResponse * _response;
    NSURLSession * _session;
    bool  _shouldHandleCookies;
    bool  _shouldPipelineHTTP;
    bool  _shouldReportTimingDataToAWD;
    bool  _shouldSkipPipelineProbe;
    bool  _shouldSkipPreferredClientCertificateLookup;
    bool  _shouldUsePipelineHeuristics;
    NSDictionary * _sslSettings;
    double  _startTime;
    long long  _state;
    NSString * _storagePartitionIdentifier;
    bool  _strictContentLength;
    long long  _suspensionThreshhold;
    NSURLSessionTaskDependency * _taskDependency;
    NSString * _taskDescription;
    unsigned long long  _taskIdentifier;
    double  _timeWindowDelay;
    double  _timeWindowDuration;
    double  _timeoutInterval;
    double  _timeoutIntervalForResource;
    NSDictionary * _trailers;
    NSMutableArray * _transactionMetrics;
    bool  _undeterminedDownloadProgressState;
    bool  _undeterminedUploadProgressState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfair_lock;
    NSString * _uniqueIdentifier;
    NSProgress * _uploadProgress;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (bool)supportsSecureCoding;

- (id)_DuetActivityProperties;
- (id)_TCPConnectionMetadata;
- (unsigned short)_TLSNegotiatedCipherSuite;
- (unsigned long long)_allowedProtocolTypes;
- (bool)_allowsCellular;
- (bool)_allowsQUIC;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (id)_appleIDContext;
- (bool)_authenticatorConfiguredViaTaskProperty;
- (id)_backgroundPublishingURL;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (long long)_bytesPerSecondLimit;
- (bool)_cacheOnly;
- (int)_cachePolicy;
- (struct _CFURLCache { }*)_cfCache;
- (struct OpaqueCFHTTPCookieStorage { }*)_cfCookies;
- (struct _CFURLCredentialStorage { }*)_cfCreds;
- (struct _CFHSTSPolicy { }*)_cfHSTS;
- (void)_completeUploadProgress;
- (bool)_connectionIsCellular;
- (void)_consumePendingBytesReceivedEncoded;
- (id)_contentDispositionFallbackArray;
- (int)_cookieAcceptPolicy;
- (struct __CFDictionary { }*)_copyATSState;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (long long)_countOfBytesReceivedEncoded;
- (long long)_countOfPendingBytesReceivedEncoded;
- (int)_createAssertionWithType:(struct __CFString { }*)arg1 name:(struct __CFString { }*)arg2 assertion:(unsigned int*)arg3;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (struct _CFURLRequest { }*)_currentCFURLRequest;
- (unsigned int)_darkWakePowerAssertion;
- (id)_dependencyInfo;
- (bool)_disallowCellular;
- (bool)_doesSZExtractorConsumeExtractedData;
- (long long)_expectedWorkload;
- (id)_extractor;
- (bool)_extractorFinishedDecoding;
- (bool)_extractorPreparedForExtraction;
- (void)_finishProgressReporting;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse { }*)arg1 completionHandler:(id /* block */)arg2;
- (struct __CFSet { }*)_getAuthenticatorStatusCodes;
- (bool)_hasSZExtractor;
- (id)_incompleteTaskMetrics;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_ledBellyFallbackURL;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (double)_loadingPriority;
- (double)_loadingPriorityValue;
- (int)_networkServiceType;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (id)_pathToDownloadTaskFile;
- (struct __PerformanceTiming { }*)_performanceTiming;
- (unsigned int)_powerAssertion;
- (bool)_preconnect;
- (void)_prepareNewTimingDataContainer;
- (bool)_preventsIdleSystemSleep;
- (bool)_preventsSystemHTTPProxyAuthentication;
- (long long)_priority;
- (long long)_priorityValue;
- (bool)_prohibitAuthUI;
- (id)_protocolForTask;
- (id)_proxySettings;
- (id)_publishingURL;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_reportTimingDataToAWD:(id)arg1;
- (long long)_requestPriority;
- (void)_setAppleIDContext:(id)arg1;
- (void)_setConnectionIsCellular:(bool)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (bool)_shouldHandleCookies;
- (bool)_shouldPipelineHTTP;
- (bool)_shouldReportTimingDataToAWD;
- (bool)_shouldSkipPipelineProbe;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (bool)_shouldUsePipelineHeuristics;
- (id)_sslSettings;
- (id)_storagePartitionIdentifier;
- (bool)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (double)_timeoutInterval;
- (double)_timeoutIntervalForResource;
- (id)_timingData;
- (id)_trailers;
- (id)_transactionMetrics;
- (id)_uniqueIdentifier;
- (void)addAdditionalHeadersToRequest:(struct _CFURLRequest { }*)arg1;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary { }*)arg1;
- (id)authenticator;
- (void)cancel;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesClientExpectsToReceive;
- (long long)countOfBytesClientExpectsToSend;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (id)currentRequest_URL;
- (id)currentRequest_mainDocumentURL;
- (void)dealloc;
- (id)dependencyTree;
- (id)description;
- (id)earliestBeginDate;
- (id)error;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)originalRequest;
- (float)priority;
- (id)progress;
- (id)response;
- (void)resume;
- (id)session;
- (void)setAuthenticator:(id)arg1;
- (void)setCountOfBytesClientExpectsToReceive:(long long)arg1;
- (void)setCountOfBytesClientExpectsToSend:(long long)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDependencyTree:(id)arg1;
- (void)setEarliestBeginDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDependency:(id)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (void)set_DuetActivityProperties:(id)arg1;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;
- (void)set_allowedProtocolTypes:(unsigned long long)arg1;
- (void)set_allowsCellular:(bool)arg1;
- (void)set_allowsQUIC:(bool)arg1;
- (void)set_authenticatorConfiguredViaTaskProperty:(bool)arg1;
- (void)set_backgroundPublishingURL:(id)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_bytesPerSecondLimit:(long long)arg1;
- (void)set_cacheOnly:(bool)arg1;
- (void)set_cachePolicy:(int)arg1;
- (void)set_cfCache:(struct _CFURLCache { }*)arg1;
- (void)set_cfCookies:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)set_cfCreds:(struct _CFURLCredentialStorage { }*)arg1;
- (void)set_cfHSTS:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_contentDispositionFallbackArray:(id)arg1;
- (void)set_cookieAcceptPolicy:(int)arg1;
- (void)set_countOfBytesReceivedEncoded:(long long)arg1;
- (void)set_countOfPendingBytesReceivedEncoded:(long long)arg1;
- (void)set_currentCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (void)set_darkWakePowerAssertion:(unsigned int)arg1;
- (void)set_dependencyInfo:(id)arg1;
- (void)set_disallowCellular:(bool)arg1;
- (void)set_doesSZExtractorConsumeExtractedData:(bool)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_extractor:(id)arg1;
- (void)set_extractorFinishedDecoding:(bool)arg1;
- (void)set_extractorPreparedForExtraction:(bool)arg1;
- (void)set_hasSZExtractor:(bool)arg1;
- (void)set_incompleteTaskMetrics:(id)arg1;
- (void)set_ledBellyFallbackURL:(id)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_loadingPriority:(double)arg1;
- (void)set_loadingPriorityValue:(double)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_pathToDownloadTaskFile:(id)arg1;
- (void)set_performanceTiming:(struct __PerformanceTiming { }*)arg1;
- (void)set_powerAssertion:(unsigned int)arg1;
- (void)set_preconnect:(bool)arg1;
- (void)set_preventsIdleSystemSleep:(bool)arg1;
- (void)set_preventsSystemHTTPProxyAuthentication:(bool)arg1;
- (void)set_priority:(long long)arg1;
- (void)set_priorityValue:(long long)arg1;
- (void)set_prohibitAuthUI:(bool)arg1;
- (void)set_protocolForTask:(id)arg1;
- (void)set_proxySettings:(id)arg1;
- (void)set_publishingURL:(id)arg1;
- (void)set_requestPriority:(long long)arg1;
- (void)set_shouldHandleCookies:(bool)arg1;
- (void)set_shouldPipelineHTTP:(bool)arg1;
- (void)set_shouldReportTimingDataToAWD:(bool)arg1;
- (void)set_shouldSkipPipelineProbe:(bool)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(bool)arg1;
- (void)set_shouldUsePipelineHeuristics:(bool)arg1;
- (void)set_sslSettings:(id)arg1;
- (void)set_storagePartitionIdentifier:(id)arg1;
- (void)set_strictContentLength:(bool)arg1;
- (void)set_suspensionThreshhold:(long long)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)set_timeoutInterval:(double)arg1;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (void)set_trailers:(id)arg1;
- (void)set_uniqueIdentifier:(id)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (double)startTime;
- (long long)state;
- (void)suspend;
- (id)taskDependency;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end
