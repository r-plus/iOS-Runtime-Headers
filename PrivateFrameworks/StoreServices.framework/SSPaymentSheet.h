/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPaymentSheet : NSObject <NSCopying, SSXPCCoding> {
    NSString * _accountHeader;
    NSString * _buyParams;
    long long  _confirmationTitleType;
    NSString * _countryCode;
    NSString * _currencyCode;
    NSString * _dialogId;
    NSString * _displayPrice;
    NSAttributedString * _displayPriceLabel;
    NSString * _explanation;
    NSArray * _flexList;
    NSArray * _inlineImages;
    NSLock * _lock;
    NSString * _message;
    long long  _payeeType;
    NSString * _paymentSummary;
    NSNumber * _price;
    NSArray * _priceSectionItems;
    NSString * _ratingHeader;
    NSString * _ratingValue;
    long long  _salableIconType;
    NSURL * _salableIconURL;
    NSString * _salableIconURLString;
    NSArray * _salableInfo;
    NSAttributedString * _salableInfoLabel;
    bool  _shouldUppercaseText;
    NSString * _storeName;
    NSString * _title;
    long long  _titleType;
}

@property (copy) NSString *accountHeader;
@property (readonly, copy) NSString *buyParams;
@property long long confirmationTitleType;
@property (copy) NSString *countryCode;
@property (copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *dialogId;
@property (copy) NSString *displayPrice;
@property (readonly, copy) NSAttributedString *displayPriceLabel;
@property (copy) NSString *explanation;
@property (readonly) NSArray *flexList;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *inlineImages;
@property (copy) NSString *message;
@property long long payeeType;
@property (copy) NSString *paymentSummary;
@property (copy) NSNumber *price;
@property (copy) NSArray *priceSectionItems;
@property (copy) NSString *ratingHeader;
@property (copy) NSString *ratingValue;
@property long long salableIconType;
@property (readonly, copy) NSURL *salableIconURL;
@property (copy) NSString *salableIconURLString;
@property (copy) NSArray *salableInfo;
@property (readonly, copy) NSAttributedString *salableInfoLabel;
@property bool shouldUppercaseText;
@property (copy) NSString *storeName;
@property (readonly) Class superclass;
@property (copy) NSString *title;
@property long long titleType;

+ (id)stringWithFormattedUsernameForString:(id)arg1 username:(id)arg2;

- (void).cxx_destruct;
- (id)_attributedStringForSalableInfoStringArray:(id)arg1;
- (id)_attributedStringForString:(id)arg1;
- (id)_attributedStringForStringArray:(id)arg1 useGrey:(bool)arg2;
- (long long)_confirmationTitleTypeForStringValue:(id)arg1;
- (id)_displayPriceLabelForDisplayPrice:(id)arg1;
- (id)_greyAttributedStringForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)_inferSalableIconTypeWithBuyParams:(id)arg1;
- (void)_init;
- (void)_lock;
- (void)_parseResponse:(id)arg1;
- (long long)_payeeTypeForRequestorValue:(id)arg1;
- (long long)_payeeTypeInferredFromEnumeratedTitle;
- (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)arg1;
- (id)_replaceMarkupForMutableAttributedString:(id)arg1 markupType:(long long)arg2;
- (long long)_salableIconTypeForString:(id)arg1;
- (void)_salableInfoItemsToUppercase;
- (void)_stringValuesToUppercase;
- (void)_unlock;
- (id)accountHeader;
- (id)buyParams;
- (long long)confirmationTitleType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)countryCode;
- (id)currencyCode;
- (id)defaultAuthKitAuthenticationContext;
- (id)dialogId;
- (id)displayPrice;
- (id)displayPriceLabel;
- (id)explanation;
- (id)flexList;
- (id)init;
- (id)initWithServerResponse:(id)arg1;
- (id)initWithServerResponse:(id)arg1 buyParams:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)inlineImages;
- (id)message;
- (long long)payeeType;
- (id)paymentSummary;
- (id)price;
- (id)priceSectionItems;
- (id)ratingHeader;
- (id)ratingValue;
- (long long)salableIconType;
- (id)salableIconURL;
- (id)salableIconURLString;
- (id)salableInfo;
- (id)salableInfoLabel;
- (void)setAccountHeader:(id)arg1;
- (void)setConfirmationTitleType:(long long)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDialogId:(id)arg1;
- (void)setDisplayPrice:(id)arg1;
- (void)setExplanation:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPayeeType:(long long)arg1;
- (void)setPaymentSummary:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setPriceSectionItems:(id)arg1;
- (void)setRatingHeader:(id)arg1;
- (void)setRatingValue:(id)arg1;
- (void)setSalableIconType:(long long)arg1;
- (void)setSalableIconURLString:(id)arg1;
- (void)setSalableInfo:(id)arg1;
- (void)setShouldUppercaseText:(bool)arg1;
- (void)setStoreName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleType:(long long)arg1;
- (bool)shouldUppercaseText;
- (id)storeName;
- (id)title;
- (long long)titleType;

@end
