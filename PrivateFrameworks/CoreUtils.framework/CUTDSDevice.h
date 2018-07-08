/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTDSDevice : NSObject {
    NSData * _bloomFilterData;
    NSData * _deviceAddress;
    NSUUID * _identifier;
    unsigned long long  _lastSeenTicks;
    bool  _paired;
}

@property (nonatomic, copy) NSData *bloomFilterData;
@property (nonatomic, copy) NSData *deviceAddress;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) unsigned long long lastSeenTicks;
@property (nonatomic) bool paired;

- (void).cxx_destruct;
- (id)bloomFilterData;
- (id)deviceAddress;
- (id)identifier;
- (unsigned long long)lastSeenTicks;
- (bool)paired;
- (void)setBloomFilterData:(id)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSeenTicks:(unsigned long long)arg1;
- (void)setPaired:(bool)arg1;

@end