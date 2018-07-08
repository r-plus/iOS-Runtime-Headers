/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBSwitchRecord : PBCodable <NSCopying> {
    double  _dateTimeInterval;
    NSData * _deviceIDBytes;
    struct { 
        unsigned int dateTimeInterval : 1; 
        unsigned int switchIndex : 1; 
    }  _has;
    int  _switchIndex;
}

@property (nonatomic) double dateTimeInterval;
@property (nonatomic, retain) NSData *deviceIDBytes;
@property (nonatomic) bool hasDateTimeInterval;
@property (nonatomic, readonly) bool hasDeviceIDBytes;
@property (nonatomic) bool hasSwitchIndex;
@property (nonatomic) int switchIndex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateTimeInterval;
- (id)description;
- (id)deviceIDBytes;
- (id)dictionaryRepresentation;
- (bool)hasDateTimeInterval;
- (bool)hasDeviceIDBytes;
- (bool)hasSwitchIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateTimeInterval:(double)arg1;
- (void)setDeviceIDBytes:(id)arg1;
- (void)setHasDateTimeInterval:(bool)arg1;
- (void)setHasSwitchIndex:(bool)arg1;
- (void)setSwitchIndex:(int)arg1;
- (int)switchIndex;
- (void)writeTo:(id)arg1;

@end
