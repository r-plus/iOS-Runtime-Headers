/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationOrder : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _endedDate;
    NSArray * _medicationCodings;
    long long  _numberOfFills;
    NSString * _prescriber;
    NSArray * _reasonCodings;
    NSArray * _reasonEndedCodings;
    HKMedicalCoding * _statusCoding;
    HKMedicalDate * _writtenDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *dosages;
@property (nonatomic, readonly, copy) HKMedicalDate *earliestDosageDate;
@property (nonatomic, readonly, copy) HKMedicalDate *endedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *medicationCodings;
@property (nonatomic, readonly) HKMedicationOrderType *medicationOrderType;
@property (nonatomic, readonly) long long numberOfFills;
@property (nonatomic, readonly, copy) NSString *prescriber;
@property (nonatomic, readonly, copy) NSArray *reasonCodings;
@property (nonatomic, readonly, copy) NSArray *reasonEndedCodings;
@property (nonatomic, readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKMedicalDate *writtenDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)medicationCodingsPreferredSystems;
+ (id)medicationOrderWithNote:(id)arg1 enteredInError:(bool)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 medicationCodings:(id)arg8 prescriber:(id)arg9 numberOfFills:(long long)arg10 dosages:(id)arg11 earliestDosageDate:(id)arg12 writtenDate:(id)arg13 endedDate:(id)arg14 statusCoding:(id)arg15 reasonCodings:(id)arg16 reasonEndedCodings:(id)arg17;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonEndedCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEndedDate:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setNumberOfFills:(long long)arg1;
- (void)_setPrescriber:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonEndedCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setWrittenDate:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endedDate;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)medicationCodings;
- (id)medicationCodingsTasks;
- (id)medicationOrderType;
- (long long)numberOfFills;
- (id)prescriber;
- (id)reasonCodings;
- (id)reasonCodingsTasks;
- (id)reasonEndedCodings;
- (id)reasonEndedCodingsTasks;
- (id)statusCoding;
- (id)statusCodingTasks;
- (id)writtenDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end