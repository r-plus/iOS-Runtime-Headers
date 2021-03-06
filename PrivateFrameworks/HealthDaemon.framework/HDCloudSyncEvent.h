/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncEvent : NSObject {
    NSString * _build;
    NSString * _containerIdentifier;
    NSDate * _eventTime;
    bool  _isInternal;
    long long  _operation;
    NSUUID * _operationID;
    unsigned long long  _options;
    HDProfile * _profile;
    long long  _reason;
    NSString * _syncCirclePrefix;
    NSUUID * _syncID;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *build;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly, copy) NSDate *eventTime;
@property (nonatomic, readonly) bool isInternal;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly, copy) NSUUID *operationID;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly, copy) NSString *syncCirclePrefix;
@property (nonatomic, readonly, copy) NSUUID *syncID;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)build;
- (id)containerIdentifier;
- (id)description;
- (id)eventTime;
- (id)initWithProfile:(id)arg1 build:(id)arg2 internal:(bool)arg3 operation:(long long)arg4 reason:(long long)arg5 options:(unsigned long long)arg6 type:(long long)arg7 syncCirclePrefix:(id)arg8 containerID:(id)arg9 syncID:(id)arg10 operationID:(id)arg11;
- (bool)isInternal;
- (long long)operation;
- (id)operationID;
- (unsigned long long)options;
- (id)profile;
- (long long)reason;
- (id)syncCirclePrefix;
- (id)syncID;
- (long long)type;

@end
