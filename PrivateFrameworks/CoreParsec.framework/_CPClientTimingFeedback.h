/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPClientTimingFeedback : PBCodable <NSSecureCoding, _CPClientTimingFeedback, _CPProcessableFeedback> {
    NSString * _eventName;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int queryId : 1; 
        unsigned int nanosecondInterval : 1; 
    }  _has;
    NSString * _input;
    unsigned long long  _nanosecondInterval;
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasEventName;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasNanosecondInterval;
@property (nonatomic, readonly) bool hasQueryId;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long nanosecondInterval;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)eventName;
- (bool)hasEventName;
- (bool)hasInput;
- (bool)hasNanosecondInterval;
- (bool)hasQueryId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)nanosecondInterval;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setEventName:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setNanosecondInterval:(unsigned long long)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
