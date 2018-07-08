/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAllergyRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _allergyCodings;
    NSString * _asserter;
    HKMedicalCoding * _criticalityCoding;
    HKMedicalDate * _lastOccurenceDate;
    HKMedicalDate * _onsetDate;
    NSArray * _reactions;
    HKMedicalDate * _recordedDate;
}

@property (nonatomic, readonly, copy) NSArray *allergyCodings;
@property (nonatomic, readonly) HKAllergyRecordType *allergyRecordType;
@property (nonatomic, readonly, copy) NSString *asserter;
@property (nonatomic, readonly, copy) HKMedicalCoding *criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKMedicalDate *lastOccurenceDate;
@property (nonatomic, readonly, copy) HKMedicalDate *onsetDate;
@property (nonatomic, readonly, copy) NSArray *reactions;
@property (nonatomic, readonly, copy) HKMedicalDate *recordedDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)allergyCodingsPreferredSystems;
+ (id)allergyRecordWithNote:(id)arg1 enteredInError:(bool)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 allergyCodings:(id)arg8 onsetDate:(id)arg9 asserter:(id)arg10 reactions:(id)arg11 criticalityCoding:(id)arg12 lastOccurenceDate:(id)arg13 recordedDate:(id)arg14;
+ (id)criticalityCodingPreferredSystems;
+ (id)defaultDisplayString;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)_setAllergyCodings:(id)arg1;
- (void)_setAsserter:(id)arg1;
- (void)_setCriticalityCoding:(id)arg1;
- (void)_setLastOccurenceDate:(id)arg1;
- (void)_setOnsetDate:(id)arg1;
- (void)_setReactions:(id)arg1;
- (void)_setRecordedDate:(id)arg1;
- (id)_validateConfiguration;
- (id)allergyCodings;
- (id)allergyCodingsTasks;
- (id)allergyRecordType;
- (id)asserter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criticalityCoding;
- (id)criticalityCodingTasks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)lastOccurenceDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)onsetDate;
- (id)reactions;
- (id)recordedDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end