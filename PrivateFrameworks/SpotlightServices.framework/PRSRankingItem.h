/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItem : NSObject <SSDataCollectible> {
    PRSL2FeatureVector * _L2FeatureVector;
    PRSL3FeatureVector * _L3FeatureVector;
    NSMapTable * _attributes;
    double  _closestUpComingDate;
    bool  _eligibleForDemotion;
    NSArray * _emailAddresses;
    float  _feedbackScore;
    NSString * _identifier;
    unsigned long long  _importantPropertiesPrefixMatched;
    unsigned long long  _importantPropertiesWordMatched;
    struct ranking_index_score_t { 
        unsigned long long lsb; 
        unsigned long long msb; 
    }  _indexScore;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _inputToModelScore;
    bool  _isPrepared;
    NSMutableArray * _matchedRecipients;
    NSMutableArray * _matchedSenders;
    NSMutableArray * _matchedVipSenders;
    double  _mostRecentUsedDate;
    bool  _needsDemotion;
    unsigned long long  _playCount;
    float  _quality_score;
    float  _rawScore;
    float  _score;
    NSString * _sectionBundleIdentifier;
    NSDictionary * _serverFeatures;
    PRSRankingSpanCalculator * _spanCalculator;
}

@property (nonatomic, retain) PRSL2FeatureVector *L2FeatureVector;
@property (nonatomic, retain) PRSL3FeatureVector *L3FeatureVector;
@property (nonatomic, retain) NSMapTable *attributes;
@property (nonatomic) double closestUpComingDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eligibleForDemotion;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic) float feedbackScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long importantPropertiesPrefixMatched;
@property (nonatomic) unsigned long long importantPropertiesWordMatched;
@property (nonatomic) struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; } indexScore;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*inputToModelScore;
@property (nonatomic) bool isPrepared;
@property (nonatomic, retain) NSMutableArray *matchedRecipients;
@property (nonatomic, retain) NSMutableArray *matchedSenders;
@property (nonatomic, retain) NSMutableArray *matchedVipSenders;
@property (nonatomic) double mostRecentUsedDate;
@property (nonatomic) bool needsDemotion;
@property (nonatomic) unsigned long long playCount;
@property (nonatomic) float quality_score;
@property (nonatomic) float rawScore;
@property (nonatomic) float score;
@property (nonatomic, retain) NSString *sectionBundleIdentifier;
@property (nonatomic, retain) NSDictionary *serverFeatures;
@property (nonatomic, retain) PRSRankingSpanCalculator *spanCalculator;
@property (readonly) Class superclass;

+ (id)defaultArrForBundleFeature:(unsigned long long)arg1;
+ (id)defaultBundleFeatureArrValues;
+ (id)deviceClass;
+ (unsigned long long)featureFromVirtualIdx:(unsigned long long)arg1;
+ (void)initialize;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;
+ (id)requiredAttributes;
+ (id)requiredContactAttributes;
+ (id)requiredMailAttributes;
+ (id)requiredOtherAttributes;
+ (id)requiredTextFeatureAttributes;

- (void).cxx_destruct;
- (id)L2FeatureVector;
- (id)L3FeatureVector;
- (id)attributes;
- (double)closestUpComingDate;
- (long long)compare:(id)arg1;
- (long long)compareWithDates:(id)arg1;
- (id)dataCollectionBundle;
- (id)dataCollectionRepresentation;
- (void)dealloc;
- (id)dedupeIdentifier;
- (id)description;
- (bool)didMatchRankingDescriptor:(id)arg1;
- (bool)eligibleForDemotion;
- (id)emailAddresses;
- (float)feedbackScore;
- (id)identifier;
- (unsigned long long)importantPropertiesPrefixMatched;
- (unsigned long long)importantPropertiesWordMatched;
- (struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })indexScore;
- (void)inferDateBinsFromDates:(id)arg1 intoBins:(int*)arg2;
- (id)initWithAttributes:(id)arg1;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)inputToModelScore;
- (id)interestingDate;
- (bool)isPrepared;
- (id)likelyDisplayTitle;
- (id)matchedRecipients;
- (id)matchedSenders;
- (id)matchedVipSenders;
- (id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2;
- (double)mostRecentUsedDate;
- (bool)needsDemotion;
- (long long)passesRecencyTest;
- (unsigned long long)playCount;
- (void)populateBundleSpecificFeatures;
- (void)populateContactFeatures;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg1;
- (void)populateFeaturesWithEvaluator:(id)arg1 updatingBundleFeatures:(float*)arg2 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg3 fuzzyEvaluator:(id)arg4;
- (void)populateMailFeatures;
- (void)populateOtherFeatures;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(id)arg2 withEvaluator:(id)arg3 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg4 fuzzyEvaluator:(id)arg5 propertyCanFuzzyMatch:(bool)arg6;
- (float)quality_score;
- (float)rawScore;
- (float)score;
- (id)sectionBundleIdentifier;
- (id)serverFeatures;
- (void)setAttributes:(id)arg1;
- (void)setClosestUpComingDate:(double)arg1;
- (void)setEligibleForDemotion:(bool)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFeedbackScore:(float)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImportantPropertiesPrefixMatched:(unsigned long long)arg1;
- (void)setImportantPropertiesWordMatched:(unsigned long long)arg1;
- (void)setIndexScore:(struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInputToModelScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setIsPrepared:(bool)arg1;
- (void)setL2FeatureVector:(id)arg1;
- (void)setL3FeatureVector:(id)arg1;
- (void)setMatchedRecipients:(id)arg1;
- (void)setMatchedSenders:(id)arg1;
- (void)setMatchedVipSenders:(id)arg1;
- (void)setMostRecentUsedDate:(double)arg1;
- (void)setNeedsDemotion:(bool)arg1;
- (void)setPlayCount:(unsigned long long)arg1;
- (void)setQuality_score:(float)arg1;
- (void)setRawScore:(float)arg1;
- (void)setScore:(float)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setSpanCalculator:(id)arg1;
- (id)spanCalculator;
- (void)updateAccumulatedBundleFeatures:(float*)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)updateBundleFeatures:(float*)arg1 withArrValues:(id)arg2;
- (void)updateNumScoreDescriptorBundleFeatures:(float*)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)updateScoreDescriptorBundleFeatures:(float*)arg1 values:(id)arg2 feature:(unsigned long long)arg3;

@end
