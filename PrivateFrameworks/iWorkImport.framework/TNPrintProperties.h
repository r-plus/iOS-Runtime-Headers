/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPrintProperties : NSObject {
    double  _footerInset;
    double  _headerInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _printMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _unscaledPageSize;
}

@property (nonatomic) double footerInset;
@property (nonatomic) double headerInset;
@property (readonly) double pageHeight;
@property (readonly) double pageWidth;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } printMargins;
@property struct CGSize { double x1; double x2; } unscaledPageSize;

+ (id)a4SizePrintProperties;
+ (id)legacyExportPrintProperties;
+ (id)letterSizeLandscapeFormPrintProperties;
+ (id)letterSizePortraitFormPrintProperties;
+ (id)letterSizePrintProperties;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForContentScale:(double)arg1 portraitOrientation:(bool)arg2 headerHeight:(double)arg3 footerHeight:(double)arg4;
- (double)contentScaleForIntegralWidthWithContentScale:(double)arg1 portraitOrientation:(bool)arg2;
- (double)footerInset;
- (double)headerInset;
- (id)initWithPageSize:(struct CGSize { double x1; double x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithPageSize:(struct CGSize { double x1; double x2; })arg1 printMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)initWithPageSize:(struct CGSize { double x1; double x2; })arg1 printMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 headerInset:(double)arg3 footerInset:(double)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForContentScale:(double)arg1 portraitOrientation:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_unscaledContentRectForOrientation:(bool)arg1 headerHeight:(double)arg2 footerHeight:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageHeaderFooterRectForContentScale:(double)arg1 portraitOrientation:(bool)arg2 footer:(bool)arg3 textHeight:(double)arg4;
- (double)pageHeight;
- (struct CGSize { double x1; double x2; })pageSizeForContentScale:(double)arg1 portraitOrientation:(bool)arg2;
- (struct CGSize { double x1; double x2; })pageSizeWithGutterForContentScale:(double)arg1 userViewScale:(double)arg2 portraitOrientation:(bool)arg3;
- (double)pageWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })printMargins;
- (void)setFooterInset:(double)arg1;
- (void)setHeaderInset:(double)arg1;
- (void)setPrintMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUnscaledPageSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledPageRectForDisplayForPortraitOrientation:(bool)arg1 userViewScale:(double)arg2 atPageCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 layoutLeftToRight:(bool)arg4;
- (struct CGSize { double x1; double x2; })unscaledPageSize;

@end
