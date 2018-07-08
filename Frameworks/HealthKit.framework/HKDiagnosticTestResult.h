/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDiagnosticTestResult : HKMedicalRecord <HDCoding, NSCopying, NSSecureCoding> {
    NSArray * _bodySiteCodings;
    NSString * _category;
    NSString * _comments;
    NSArray * _diagnosticTestCodings;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    NSArray * _interpretationCodings;
    HKMedicalDate * _issueDate;
    NSArray * _methodCodings;
    NSArray * _performers;
    NSArray * _referenceRanges;
    HKMedicalCoding * _statusCoding;
    HKInspectableValueCollection * _value;
}

@property (nonatomic, readonly, copy) NSArray *bodySiteCodings;
@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly, copy) NSString *comments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *diagnosticTestCodings;
@property (nonatomic, readonly) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (nonatomic, readonly, copy) HKMedicalDate *effectiveEndDate;
@property (nonatomic, readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *interpretationCodings;
@property (nonatomic, readonly, copy) HKMedicalDate *issueDate;
@property (nonatomic, readonly, copy) NSArray *methodCodings;
@property (nonatomic, readonly, copy) NSArray *performers;
@property (nonatomic, readonly, copy) NSArray *referenceRanges;
@property (nonatomic, readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKInspectableValueCollection *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)bodySiteCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestResultWithNote:(id)arg1 enteredInError:(bool)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 diagnosticTestCodings:(id)arg8 value:(id)arg9 referenceRanges:(id)arg10 effectiveStartDate:(id)arg11 category:(id)arg12 issueDate:(id)arg13 effectiveEndDate:(id)arg14 statusCoding:(id)arg15 interpretationCodings:(id)arg16 comments:(id)arg17 bodySiteCodings:(id)arg18 methodCodings:(id)arg19 performers:(id)arg20;
+ (id)interpretationCodingsPreferredSystems;
+ (id)methodCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setComments:(id)arg1;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setInterpretationCodings:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setMethodCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setReferenceRanges:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setValue:(id)arg1;
- (id)_validateConfiguration;
- (id)bodySiteCodings;
- (id)bodySiteCodingsTasks;
- (id)category;
- (id)comments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTestCodings;
- (id)diagnosticTestCodingsTasks;
- (id)diagnosticTestResultType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interpretationCodings;
- (id)interpretationCodingsTasks;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)methodCodings;
- (id)methodCodingsTasks;
- (id)performers;
- (id)referenceRanges;
- (id)statusCoding;
- (id)statusCodingTasks;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end