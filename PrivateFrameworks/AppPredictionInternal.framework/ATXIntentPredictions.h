/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXIntentPredictions : NSObject {
    ATXIntentResponse * _atxIntentResponse;
    NSError * _error;
}

@property (nonatomic, readonly) ATXIntentResponse *atxIntentResponse;
@property (nonatomic, readonly) NSError *error;

+ (id)getIntentForIntentKey:(id)arg1;
+ (id)rankScoredBundleIdsByAppThenIntent:(id)arg1;
+ (id)useBestScoredBundleIdForEachApp:(id)arg1;

- (void).cxx_destruct;
- (id)atxIntentResponse;
- (id)error;
- (id)init;
- (id)initWithCandidateBundleIdentifiers:(id)arg1 candidateIntenttypes:(id)arg2 limit:(int)arg3;

@end
