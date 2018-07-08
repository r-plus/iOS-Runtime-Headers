/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry {
    NSString * _detailString;
    double  _displayStartDate;
    long long  _type;
}

@property (nonatomic, copy) NSString *detailString;
@property (nonatomic) double displayStartDate;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailString;
- (double)displayStartDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDetailString:(id)arg1;
- (void)setDisplayStartDate:(double)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end