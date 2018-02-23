/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionPlaybackResponse : NSObject {
    NSDate * _requestDate;
    NSDictionary * _responseDictionary;
    ICURLBag * _urlBag;
}

@property (nonatomic, readonly, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly, copy) NSString *householdID;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSDate *leaseExpirationDate;
@property (nonatomic, readonly, copy) NSData *leaseInfoData;
@property (nonatomic, readonly, copy) NSError *serverError;
@property (nonatomic, readonly, copy) NSData *subscriptionKeyBagData;

- (void).cxx_destruct;
- (id)dialog;
- (id)householdID;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;
- (id)itemWithStoreAdamID:(long long)arg1;
- (id)items;
- (id)leaseExpirationDate;
- (id)leaseInfoData;
- (id)serverError;
- (id)subscriptionKeyBagData;

@end
