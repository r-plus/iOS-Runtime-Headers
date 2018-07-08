/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attentionLostTimeoutDictionary;
    NSSet * _attentionLostTimeouts;
    unsigned long long  _eventMask;
    NSString * _identifier;
    double  _samplingDelay;
    bool  _samplingDelayExplicitlySet;
    double  _samplingInterval;
    <NSCopying> * _tag;
    unsigned long long  _tagIndex;
}

@property (nonatomic, copy) NSDictionary *attentionLostTimeoutDictionary;
@property (nonatomic, copy) NSSet *attentionLostTimeouts;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double samplingDelay;
@property (nonatomic) double samplingInterval;
@property (nonatomic, retain) <NSCopying> *tag;

+ (void)cancelNotification:(struct AWNotification_s { }*)arg1;
+ (void)initialize;
+ (struct AWNotification_s { }*)notifySupportedEventsChangedWithQueue:(id)arg1 block:(id /* block */)arg2;
+ (unsigned long long)supportedEvents;
+ (id)supportedEventsString;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attentionLostTimeoutDictionary;
- (id)attentionLostTimeouts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventMask;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)samplingDelay;
- (double)samplingInterval;
- (void)setAttentionLostTimeout:(double)arg1;
- (void)setAttentionLostTimeoutDictionary:(id)arg1;
- (void)setAttentionLostTimeouts:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSamplingDelay:(double)arg1;
- (void)setSamplingInterval:(double)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (unsigned long long)tagIndex;

@end
