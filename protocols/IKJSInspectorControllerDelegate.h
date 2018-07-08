/* Generated by RuntimeBrowser.
 */

@protocol IKJSInspectorControllerDelegate <NSObject>

@optional

- (bool)cancelHighlightView;
- (bool)highlightViewForElementWithID:(long long)arg1 contentColor:(UIColor *)arg2 paddingColor:(UIColor *)arg3 borderColor:(UIColor *)arg4 marginColor:(UIColor *)arg5;
- (bool)highlightViewsForElementsWithIDs:(NSArray *)arg1 contentColor:(UIColor *)arg2 paddingColor:(UIColor *)arg3 borderColor:(UIColor *)arg4 marginColor:(UIColor *)arg5;
- (void)inspectElementModeChanged:(bool)arg1;

@end
