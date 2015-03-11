/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIHeaderViewElement;

@interface SKUIColumnViewElement : SKUIViewElement {
    int _columnSpan;
}

@property(readonly) int columnSpan;
@property(readonly) SKUIHeaderViewElement * headerElement;

- (id)applyUpdatesWithElement:(id)arg1;
- (int)columnSpan;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (id)headerElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)pageComponentType;

@end