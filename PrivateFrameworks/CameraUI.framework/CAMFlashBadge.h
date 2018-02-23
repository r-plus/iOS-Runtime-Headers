/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFlashBadge : CAMBadgeView {
    UIImage * __contentImage;
    NSString * __contentSizeCategory;
}

@property (nonatomic, retain) UIImage *_contentImage;
@property (nonatomic, copy) NSString *_contentSizeCategory;

- (void).cxx_destruct;
- (id)_contentImage;
- (id)_contentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsets;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)_maskImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)set_contentImage:(id)arg1;
- (void)set_contentSizeCategory:(id)arg1;
- (void)updateToContentSize:(id)arg1;

@end
