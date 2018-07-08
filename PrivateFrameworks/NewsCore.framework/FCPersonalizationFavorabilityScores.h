/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding> {
    NTPBPublisherFavorabilityScores * _pbFavorabilityScores;
    NSDictionary * _tagIDToScores;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSDictionary *tagIDToScores;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBFavorabilityScores:(id)arg1;
- (id)scoreForTagID:(id)arg1;
- (void)setTagIDToScores:(id)arg1;
- (id)tagIDToScores;

@end
