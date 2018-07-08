/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFUpdateEnqueuedCommandsRequest : CATTaskRequest {
    NSArray * _addCommands;
    NSString * _organizationIdentifier;
    NSArray * _removeCommands;
}

@property (nonatomic, copy) NSArray *addCommands;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, copy) NSArray *removeCommands;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addCommands;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (id)removeCommands;
- (void)setAddCommands:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setRemoveCommands:(id)arg1;

@end
