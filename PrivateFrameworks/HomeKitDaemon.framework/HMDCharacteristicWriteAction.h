/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicWriteAction : HMFObject <HMDBackingStoreObjectProtocol, NSSecureCoding> {
    HMDActionSet * _actionSet;
    HMDCharacteristic * _characteristic;
    id  _targetValue;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMDActionSet *actionSet;
@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (nonatomic, copy) id targetValue;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2;
- (id)actionInformation;
- (id)actionSet;
- (id)characteristic;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4;
- (bool)isSecureAction;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)replaceCharacteristic:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)targetValue;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)uuid;

@end
