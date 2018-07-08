/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface AWDProactiveAppPredictionIntentPredictionSession : PBCodable <NSCopying> {
    NSString * _consumerType;
    long long  _engagedItem;
    struct { 
        unsigned int engagedItem : 1; 
        unsigned int outcome : 1; 
        unsigned int sessionLogversion : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalAirplaneModeLaunches : 1; 
        unsigned int totalCurrentDayOfWeekLaunched : 1; 
        unsigned int totalDayOfWeekLaunches : 1; 
        unsigned int totalLaunches : 1; 
        unsigned int totalSSIDLaunches : 1; 
        unsigned int totalTimeOfDayLaunches : 1; 
        unsigned int totalTrendingLaunches : 1; 
        unsigned int totalWifiLaunches : 1; 
        unsigned int inAirplaneMode : 1; 
        unsigned int isInternalBuild : 1; 
    }  _has;
    bool  _inAirplaneMode;
    NSMutableArray * _intentDatas;
    NSString * _intentType;
    bool  _isInternalBuild;
    unsigned long long  _outcome;
    long long  _sessionLogversion;
    NSString * _source;
    unsigned long long  _timestamp;
    unsigned long long  _totalAirplaneModeLaunches;
    unsigned long long  _totalCurrentDayOfWeekLaunched;
    unsigned long long  _totalDayOfWeekLaunches;
    unsigned long long  _totalLaunches;
    unsigned long long  _totalSSIDLaunches;
    unsigned long long  _totalTimeOfDayLaunches;
    unsigned long long  _totalTrendingLaunches;
    unsigned long long  _totalWifiLaunches;
}

@property (nonatomic, retain) NSString *consumerType;
@property (nonatomic) long long engagedItem;
@property (nonatomic, readonly) bool hasConsumerType;
@property (nonatomic) bool hasEngagedItem;
@property (nonatomic) bool hasInAirplaneMode;
@property (nonatomic, readonly) bool hasIntentType;
@property (nonatomic) bool hasIsInternalBuild;
@property (nonatomic) bool hasOutcome;
@property (nonatomic) bool hasSessionLogversion;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalAirplaneModeLaunches;
@property (nonatomic) bool hasTotalCurrentDayOfWeekLaunched;
@property (nonatomic) bool hasTotalDayOfWeekLaunches;
@property (nonatomic) bool hasTotalLaunches;
@property (nonatomic) bool hasTotalSSIDLaunches;
@property (nonatomic) bool hasTotalTimeOfDayLaunches;
@property (nonatomic) bool hasTotalTrendingLaunches;
@property (nonatomic) bool hasTotalWifiLaunches;
@property (nonatomic) bool inAirplaneMode;
@property (nonatomic, retain) NSMutableArray *intentDatas;
@property (nonatomic, retain) NSString *intentType;
@property (nonatomic) bool isInternalBuild;
@property (nonatomic) unsigned long long outcome;
@property (nonatomic) long long sessionLogversion;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalAirplaneModeLaunches;
@property (nonatomic) unsigned long long totalCurrentDayOfWeekLaunched;
@property (nonatomic) unsigned long long totalDayOfWeekLaunches;
@property (nonatomic) unsigned long long totalLaunches;
@property (nonatomic) unsigned long long totalSSIDLaunches;
@property (nonatomic) unsigned long long totalTimeOfDayLaunches;
@property (nonatomic) unsigned long long totalTrendingLaunches;
@property (nonatomic) unsigned long long totalWifiLaunches;

+ (Class)intentDataType;

- (void).cxx_destruct;
- (void)addIntentData:(id)arg1;
- (void)clearIntentDatas;
- (id)consumerType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)engagedItem;
- (bool)hasConsumerType;
- (bool)hasEngagedItem;
- (bool)hasInAirplaneMode;
- (bool)hasIntentType;
- (bool)hasIsInternalBuild;
- (bool)hasOutcome;
- (bool)hasSessionLogversion;
- (bool)hasSource;
- (bool)hasTimestamp;
- (bool)hasTotalAirplaneModeLaunches;
- (bool)hasTotalCurrentDayOfWeekLaunched;
- (bool)hasTotalDayOfWeekLaunches;
- (bool)hasTotalLaunches;
- (bool)hasTotalSSIDLaunches;
- (bool)hasTotalTimeOfDayLaunches;
- (bool)hasTotalTrendingLaunches;
- (bool)hasTotalWifiLaunches;
- (unsigned long long)hash;
- (bool)inAirplaneMode;
- (id)intentDataAtIndex:(unsigned long long)arg1;
- (id)intentDatas;
- (unsigned long long)intentDatasCount;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (bool)isInternalBuild;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)outcome;
- (bool)readFrom:(id)arg1;
- (long long)sessionLogversion;
- (void)setConsumerType:(id)arg1;
- (void)setEngagedItem:(long long)arg1;
- (void)setHasEngagedItem:(bool)arg1;
- (void)setHasInAirplaneMode:(bool)arg1;
- (void)setHasIsInternalBuild:(bool)arg1;
- (void)setHasOutcome:(bool)arg1;
- (void)setHasSessionLogversion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalAirplaneModeLaunches:(bool)arg1;
- (void)setHasTotalCurrentDayOfWeekLaunched:(bool)arg1;
- (void)setHasTotalDayOfWeekLaunches:(bool)arg1;
- (void)setHasTotalLaunches:(bool)arg1;
- (void)setHasTotalSSIDLaunches:(bool)arg1;
- (void)setHasTotalTimeOfDayLaunches:(bool)arg1;
- (void)setHasTotalTrendingLaunches:(bool)arg1;
- (void)setHasTotalWifiLaunches:(bool)arg1;
- (void)setInAirplaneMode:(bool)arg1;
- (void)setIntentDatas:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setIsInternalBuild:(bool)arg1;
- (void)setOutcome:(unsigned long long)arg1;
- (void)setSessionLogversion:(long long)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalAirplaneModeLaunches:(unsigned long long)arg1;
- (void)setTotalCurrentDayOfWeekLaunched:(unsigned long long)arg1;
- (void)setTotalDayOfWeekLaunches:(unsigned long long)arg1;
- (void)setTotalLaunches:(unsigned long long)arg1;
- (void)setTotalSSIDLaunches:(unsigned long long)arg1;
- (void)setTotalTimeOfDayLaunches:(unsigned long long)arg1;
- (void)setTotalTrendingLaunches:(unsigned long long)arg1;
- (void)setTotalWifiLaunches:(unsigned long long)arg1;
- (id)source;
- (unsigned long long)timestamp;
- (unsigned long long)totalAirplaneModeLaunches;
- (unsigned long long)totalCurrentDayOfWeekLaunched;
- (unsigned long long)totalDayOfWeekLaunches;
- (unsigned long long)totalLaunches;
- (unsigned long long)totalSSIDLaunches;
- (unsigned long long)totalTimeOfDayLaunches;
- (unsigned long long)totalTrendingLaunches;
- (unsigned long long)totalWifiLaunches;
- (void)writeTo:(id)arg1;

@end