/* Generated by RuntimeBrowser.
 */

@protocol UIWKInteractionViewProtocol

@required

- (void)_cancelLongPressGestureRecognizer;
- (void)applyAutocorrection:(void *)arg1 toString:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionRects *, void*
- (void)changeSelectionWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(int)arg2 withState:(int)arg3;
- (void)changeSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(int)arg2 baseIsStart:(BOOL)arg3;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 withGesture:(int)arg3 withState:(int)arg4;
- (BOOL)hasMarkedText;
- (BOOL)hasSelectablePositionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSString *)markedText;
- (BOOL)pointIsInAssistedNode:(struct CGPoint { double x1; double x2; })arg1;
- (void)requestAutocorrectionContextWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionContext *, void*
- (void)requestAutocorrectionRectsForString:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionRects *, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFirstRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textLastRect;
- (NSArray *)webSelectionRects;

@optional

- (void)beginSelectionInDirection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)changeBlockSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(int)arg2 forHandle:(int)arg3;
- (void)changeSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(int)arg2 baseIsStart:(BOOL)arg3 withFlags:(int)arg4;
- (void)clearSelection;
- (float)inverseScale;
- (BOOL)isReplaceAllowed;
- (void)moveByOffset:(int)arg1;
- (void)moveSelectionAtBoundary:(void *)arg1 inDirection:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: id, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (BOOL)pointIsNearMarkedText:(struct CGPoint { double x1; double x2; })arg1;
- (void)replaceDictatedText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)replaceText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)requestDictationContext:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, void*
- (void)selectPositionAtBoundary:(void *)arg1 inDirection:(void *)arg2 fromPoint:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: int, int, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectPositionAtPoint:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectTextWithGranularity:(void *)arg1 atPoint:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: int, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectWordBackward;
- (void)selectWordForReplacement;
- (NSString *)selectedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredContentRect;
- (UIView *)unscaledView;
- (void)updateSelectionWithExtentPoint:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)updateSelectionWithExtentPoint:(void *)arg1 withBoundary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: struct CGPoint { double x1; double x2; }, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*

@end