/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRoomSuggestionItemProvider : HFItemProvider {
    HMHome * _home;
    unsigned long long  _suggestedRoomLimit;
    NSSet * _suggestionItems;
    <HFRoomSuggestionVendor> * _suggestionVendor;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long suggestedRoomLimit;
@property (nonatomic, retain) NSSet *suggestionItems;
@property (nonatomic, retain) <HFRoomSuggestionVendor> *suggestionVendor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 suggestionVendor:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setSuggestedRoomLimit:(unsigned long long)arg1;
- (void)setSuggestionItems:(id)arg1;
- (void)setSuggestionVendor:(id)arg1;
- (unsigned long long)suggestedRoomLimit;
- (id)suggestionItems;
- (id)suggestionVendor;

@end
