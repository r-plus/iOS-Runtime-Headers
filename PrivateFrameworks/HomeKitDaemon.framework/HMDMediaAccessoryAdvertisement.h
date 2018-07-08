/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement {
    bool  _associated;
    HMDMediaOutputDevice * _outputDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _sessionIdentifier;
}

@property (getter=isAssociated) bool associated;
@property (retain) HMDMediaOutputDevice *outputDevice;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2 name:(id)arg3 category:(id)arg4;
- (id)initWithOutputDevice:(id)arg1 sessionIdentifier:(id)arg2;
- (bool)isAssociated;
- (id)outputDevice;
- (id)propertyQueue;
- (id)sessionIdentifier;
- (void)setAssociated:(bool)arg1;
- (void)setOutputDevice:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
