/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _fastOpenRequested;
    BOOL  _multipathRequested;
    NSString * _sourceAppSigningIdentifier;
    NSData * _sourceAppUniqueIdentifier;
}

@property (readonly) BOOL fastOpenRequested;
@property (readonly) BOOL multipathRequested;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppUniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)fastOpenRequested;
- (id)initFromFlow:(struct _NEFlow { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(BOOL)arg3 multipathRequested:(BOOL)arg4;
- (BOOL)multipathRequested;
- (id)sourceAppSigningIdentifier;
- (id)sourceAppUniqueIdentifier;

@end