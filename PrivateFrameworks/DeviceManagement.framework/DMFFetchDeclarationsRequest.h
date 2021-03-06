/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchDeclarationsRequest : CATTaskRequest {
    NSString * _organizationIdentifier;
}

@property (nonatomic, copy) NSString *organizationIdentifier;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (void)setOrganizationIdentifier:(id)arg1;

@end
