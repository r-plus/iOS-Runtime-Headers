/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKVaccinationRecord : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    HKMedicalDate * _administrationDate;
    NSArray * _bodySiteCoding;
    NSString * _doseNumber;
    NSString * _doseQuantity;
    HKMedicalDate * _expirationDate;
    bool  _notGiven;
    bool  _patientReported;
    NSString * _performer;
    NSString * _reaction;
    NSArray * _reasonsCodings;
    NSArray * _reasonsNotGivenCodings;
    NSArray * _routeCodings;
    HKMedicalCoding * _statusCoding;
    NSArray * _vaccinationCodings;
}

@property (nonatomic, readonly, copy) HKMedicalDate *administrationDate;
@property (nonatomic, readonly, copy) NSArray *bodySiteCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *doseNumber;
@property (nonatomic, readonly, copy) NSString *doseQuantity;
@property (nonatomic, readonly, copy) HKMedicalDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool notGiven;
@property (nonatomic, readonly) bool patientReported;
@property (nonatomic, readonly, copy) NSString *performer;
@property (nonatomic, readonly, copy) NSString *reaction;
@property (nonatomic, readonly, copy) NSArray *reasonsCodings;
@property (nonatomic, readonly, copy) NSArray *reasonsNotGivenCodings;
@property (nonatomic, readonly, copy) NSArray *routeCodings;
@property (nonatomic, readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *vaccinationCodings;
@property (nonatomic, readonly) HKVaccinationRecordType *vaccinationRecordType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)bodySiteCodingPreferredSystems;
+ (id)defaultDisplayString;
+ (id)reasonsCodingsPreferredSystems;
+ (id)reasonsNotGivenCodingsPreferredSystems;
+ (id)routeCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)vaccinationCodingsPreferredSystems;
+ (id)vaccinationRecordWithNote:(id)arg1 enteredInError:(bool)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 vaccinationCodings:(id)arg8 expirationDate:(id)arg9 doseNumber:(id)arg10 doseQuantity:(id)arg11 performer:(id)arg12 bodySiteCoding:(id)arg13 reaction:(id)arg14 notGiven:(bool)arg15 administrationDate:(id)arg16 statusCoding:(id)arg17 patientReported:(bool)arg18 routeCodings:(id)arg19 reasonsCodings:(id)arg20 reasonsNotGivenCodings:(id)arg21;

- (void).cxx_destruct;
- (id)_init;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setBodySiteCoding:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setNotGiven:(bool)arg1;
- (void)_setPatientReported:(bool)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setReasonsNotGivenCodings:(id)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setVaccinationCodings:(id)arg1;
- (id)_validateConfiguration;
- (id)administrationDate;
- (id)bodySiteCoding;
- (id)bodySiteCodingTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doseNumber;
- (id)doseQuantity;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (bool)notGiven;
- (bool)patientReported;
- (id)performer;
- (id)reaction;
- (id)reasonsCodings;
- (id)reasonsCodingsTasks;
- (id)reasonsNotGivenCodings;
- (id)reasonsNotGivenCodingsTasks;
- (id)routeCodings;
- (id)routeCodingsTasks;
- (id)statusCoding;
- (id)statusCodingTasks;
- (id)vaccinationCodings;
- (id)vaccinationCodingsTasks;
- (id)vaccinationRecordType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end