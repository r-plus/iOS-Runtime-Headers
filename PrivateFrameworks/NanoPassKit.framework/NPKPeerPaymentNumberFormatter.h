/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentNumberFormatter : NSObject {
    NSString * _currencyCode;
    NSNumberFormatter * _decimalNumberFormatter;
    NSNumberFormatter * _nonDecimalNumberFormatter;
}

@property (nonatomic, copy) NSString *currencyCode;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)currencySymbol;
- (id)init;
- (id)initWithCurrencyCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (id)stringFromNumber:(id)arg1;

@end
