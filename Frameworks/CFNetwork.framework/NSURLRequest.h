/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLRequest : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSURLRequestInternal * _internal;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) bool HTTPShouldHandleCookies;
@property (readonly) bool HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (getter=_gkSAPSession, setter=_gkSetSAPSession:, nonatomic, retain) GKFairPlaySAPSession *_gkSAPSession;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) bool allowsCellularAccess;
@property (readonly) unsigned long long cachePolicy;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned long long networkServiceType;
@property (readonly) double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (double)defaultTimeoutInterval;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsAnyHTTPSCertificate:(bool)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPReferrer;
- (bool)HTTPShouldHandleCookies;
- (bool)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (bool)_URLHasScheme:(id)arg1;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (bool)_ignoreHSTS;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (bool)_isSafeRequestForBackgroundDownload;
- (double)_payloadTransmissionTimeout;
- (bool)_preventHSTSStorage;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (bool)_requiresShortConnectionTimeout;
- (bool)_schemeWasUpgradedDueToDynamicHSTS;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)allHTTPHeaderFields;
- (bool)allowsCellularAccess;
- (id)boundInterfaceIdentifier;
- (unsigned long long)cachePolicy;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedWorkload;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)networkServiceType;
- (double)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /Library/TweakInject/Activator.dylib

- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (bool)ak_usesHTTPSScheme;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDictionaryKey;
- (id)_gkSAPSession;
- (void)_gkSetSAPSession:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)frRequestWithURL:(id)arg1;
+ (id)frRequestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (id)overrideUserAgent;
+ (void)setupFeldsparUserAgent;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (id)HTTPBodyString;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)ic_valueForHTTPHeaderField:(id)arg1;
- (id)ic_valuesForCookieWithName:(id)arg1;

@end
