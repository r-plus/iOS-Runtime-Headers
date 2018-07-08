/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXIntentResponse : NSObject <NSSecureCoding> {
    NSString * _abGroup;
    NSArray * _data;
    NSString * _engagedIntentId;
    unsigned long long  _engagementType;
    unsigned long long  _feedbackSource;
    NSArray * _intentsInIntentUI;
    NSArray * _intentsInLockScreen;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) NSArray *data;
@property (nonatomic, readonly) NSString *engagedIntentId;
@property (nonatomic, readonly) unsigned long long engagementType;
@property (nonatomic, readonly) unsigned long long feedbackSource;
@property (nonatomic, retain) NSArray *intentsInIntentUI;
@property (nonatomic, retain) NSArray *intentsInLockScreen;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abGroup;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedIntentId;
- (unsigned long long)engagementType;
- (unsigned long long)feedbackSource;
- (id)initWithAbGroup:(id)arg1 intentsInIntentUI:(id)arg2 intentsInLockScreen:(id)arg3 data:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intentsInIntentUI;
- (id)intentsInLockScreen;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)jsonData;
- (id)jsonDescription;
- (id)sessionId;
- (void)setIntentsInIntentUI:(id)arg1;
- (void)setIntentsInLockScreen:(id)arg1;
- (void)updateFeedbackSource:(unsigned long long)arg1 engagementType:(unsigned long long)arg2 engagedIntentId:(id)arg3;
- (id)uuid;

@end