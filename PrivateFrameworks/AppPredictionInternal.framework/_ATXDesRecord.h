/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDESRecord : NSObject <NSSecureCoding> {
    NSArray * _bundleIds;
    unsigned long long  _consumerType;
    NSString * _launchBundle;
    unsigned long long  _predictionCount;
    struct { double x1[70]; double x2; } * _predictionItems;
    long long  _version;
}

@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) unsigned long long consumerType;
@property (nonatomic, readonly) NSString *launchBundle;
@property (nonatomic, readonly) unsigned long long predictionCount;
@property (nonatomic, readonly) struct { double x1[70]; double x2; }*predictionItems;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIds;
- (unsigned long long)consumerType;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)initWithAppsByRank:(id)arg1 version:(long long)arg2 launchBundle:(id)arg3 consumerType:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithScores:(struct { char *x1; double x2[70]; double x3; }*)arg1 count:(unsigned long long)arg2 version:(long long)arg3 launchBundle:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)launchBundle;
- (unsigned long long)predictionCount;
- (struct { double x1[70]; double x2; }*)predictionItems;
- (long long)version;

@end
