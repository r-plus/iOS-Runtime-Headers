/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    unsigned int  _connectionSeed;
    unsigned int  _displayID;
    bool  _external;
    int  _pid;
    FBSDisplayIdentity * _rootIdentity;
    bool  _secure;
    long long  _type;
    NSString * _uniqueIdentifier;
}

@property (getter=isCarDisplay, nonatomic, readonly) bool carDisplay;
@property (nonatomic, readonly) unsigned int connectionSeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int displayID;
@property (getter=isExternal, nonatomic, readonly) bool external;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRootIdentity;
@property (getter=isMainDisplay, nonatomic, readonly) bool mainDisplay;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *rootIdentity;
@property (getter=isSecure, nonatomic, readonly) bool secure;
@property (readonly) Class superclass;
@property (getter=isTatlDisplay, nonatomic, readonly) bool tatlDisplay;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (bool)supportsSecureCoding;

- (id)_initWithType:(long long)arg1 displayID:(unsigned int)arg2 connectionSeed:(unsigned int)arg3 pid:(int)arg4 external:(bool)arg5 uniqueIdentifier:(id)arg6 secure:(bool)arg7 root:(id)arg8;
- (unsigned int)connectionSeed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)displayID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)expectsSecureRendering;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isAirPlayDisplay;
- (bool)isCarDisplay;
- (bool)isEqual:(id)arg1;
- (bool)isExternal;
- (bool)isMainDisplay;
- (bool)isMusicOnlyDisplay;
- (bool)isRestrictedAirPlayDisplay;
- (bool)isRootIdentity;
- (bool)isSecure;
- (bool)isTatlDisplay;
- (bool)isiPodOnlyDisplay;
- (int)pid;
- (id)rootIdentity;
- (long long)type;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (id)UIScreen;
- (id)currentConfiguration;
- (bool)isMainRootDisplay;

@end