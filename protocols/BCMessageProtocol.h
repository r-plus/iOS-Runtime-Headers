/* Generated by RuntimeBrowser.
 */

@protocol BCMessageProtocol

@required

- (NSString *)accessibilityLabel;
- (NSData *)data;
- (UIImage *)image;
- (id)initWithData:(NSData *)arg1 url:(NSURL *)arg2 messageGUID:(NSString *)arg3 isFromMe:(bool)arg4;
- (bool)isFromMe;
- (NSString *)messageGUID;
- (void)setAccessibilityLabel:(NSString *)arg1;
- (void)setSubcaption:(NSString *)arg1;
- (void)setSubtitle:(NSAttributedString *)arg1;
- (void)setSummaryText:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (long long)style;
- (NSString *)subcaption;
- (NSAttributedString *)subtitle;
- (NSString *)summaryText;
- (NSString *)title;
- (long long)type;
- (NSURL *)url;

@end
