/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSDictionary;

@interface FTGetDependentRegistrationMessage : FTMessage <NSCopying> {
    NSString *_service;
    NSString *_realm;
    NSDictionary *_authenticationInfo;
    NSString *_userID;
    NSArray *_responseRegistrations;
    NSString *_protocolVersion;
}

@property(copy) NSString * service;
@property(copy) NSString * realm;
@property(copy) NSString * protocolVersion;
@property(copy) NSString * userID;
@property(copy) NSDictionary * authenticationInfo;
@property(copy) NSArray * responseRegistrations;


- (id)responseRegistrations;
- (void)setAuthenticationInfo:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)setRealm:(id)arg1;
- (id)userID;
- (id)bagKey;
- (void)setResponseRegistrations:(id)arg1;
- (id)authenticationInfo;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (BOOL)wantsBinaryPush;
- (void)setProtocolVersion:(id)arg1;
- (id)protocolVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (int)command;
- (id)service;
- (void)setService:(id)arg1;
- (id)messageBody;
- (id)realm;

@end