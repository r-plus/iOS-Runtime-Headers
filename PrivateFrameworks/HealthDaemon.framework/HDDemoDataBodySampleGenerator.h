/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray * _boysHeight2To20YearsGrowthCurve;
    NSArray * _boysHeightBirthTo36MonthsGrowthCurve;
    NSArray * _boysWeight2To20YearsGrowthCurve;
    NSArray * _boysWeightBirthTo36MonthsGrowthCurve;
    NSArray * _girlsHeight2To20YearsGrowthCurve;
    NSArray * _girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray * _girlsWeight2To20YearsGrowthCurve;
    NSArray * _girlsWeightBirthTo36MonthsGrowthCurve;
    double  _lastHeightInCm;
    double  _lastWeightInKg;
    double  _nextHeightSampleTime;
    double  _nextWeightSampleTime;
    double  _weightAdultStartInKg;
}

@property (nonatomic, copy) NSArray *boysHeight2To20YearsGrowthCurve;
@property (nonatomic, copy) NSArray *boysHeightBirthTo36MonthsGrowthCurve;
@property (nonatomic, copy) NSArray *boysWeight2To20YearsGrowthCurve;
@property (nonatomic, copy) NSArray *boysWeightBirthTo36MonthsGrowthCurve;
@property (nonatomic, copy) NSArray *girlsHeight2To20YearsGrowthCurve;
@property (nonatomic, copy) NSArray *girlsHeightBirthTo36MonthsGrowthCurve;
@property (nonatomic, copy) NSArray *girlsWeight2To20YearsGrowthCurve;
@property (nonatomic, copy) NSArray *girlsWeightBirthTo36MonthsGrowthCurve;
@property (nonatomic) double lastHeightInCm;
@property (nonatomic) double lastWeightInKg;
@property (nonatomic) double nextHeightSampleTime;
@property (nonatomic) double nextWeightSampleTime;
@property (nonatomic) double weightAdultStartInKg;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_heightCurveForAge:(double)arg1 sex:(long long)arg2;
- (id)_weightCurveForAge:(double)arg1 sex:(long long)arg2;
- (double)bodyFatPercentageForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3 leanBodyMass:(double)arg4;
- (double)bodyMassIndexForDemoPerson:(id)arg1 weight:(double)arg2 height:(double)arg3;
- (id)boysHeight2To20YearsGrowthCurve;
- (id)boysHeightBirthTo36MonthsGrowthCurve;
- (id)boysWeight2To20YearsGrowthCurve;
- (id)boysWeightBirthTo36MonthsGrowthCurve;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)girlsHeight2To20YearsGrowthCurve;
- (id)girlsHeightBirthTo36MonthsGrowthCurve;
- (id)girlsWeight2To20YearsGrowthCurve;
- (id)girlsWeightBirthTo36MonthsGrowthCurve;
- (id)heightForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)lastHeightInCm;
- (double)lastWeightInKg;
- (double)leanBodyMassForDemoPerson:(id)arg1 weight:(double)arg2;
- (double)nextHeightSampleTime;
- (double)nextWeightSampleTime;
- (void)setBoysHeight2To20YearsGrowthCurve:(id)arg1;
- (void)setBoysHeightBirthTo36MonthsGrowthCurve:(id)arg1;
- (void)setBoysWeight2To20YearsGrowthCurve:(id)arg1;
- (void)setBoysWeightBirthTo36MonthsGrowthCurve:(id)arg1;
- (void)setGirlsHeight2To20YearsGrowthCurve:(id)arg1;
- (void)setGirlsHeightBirthTo36MonthsGrowthCurve:(id)arg1;
- (void)setGirlsWeight2To20YearsGrowthCurve:(id)arg1;
- (void)setGirlsWeightBirthTo36MonthsGrowthCurve:(id)arg1;
- (void)setLastHeightInCm:(double)arg1;
- (void)setLastWeightInKg:(double)arg1;
- (void)setNextHeightSampleTime:(double)arg1;
- (void)setNextWeightSampleTime:(double)arg1;
- (void)setWeightAdultStartInKg:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (double)weightAdultStartInKg;
- (double)weightChangeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)weightForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
