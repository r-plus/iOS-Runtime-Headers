/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSlotResolution : NSObject {
    ATXHistogramData * _hist;
    ATXHistogramBundleIdTable * _intentKeyTable;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSString * _path;
    NSMutableDictionary * _slotTables;
}

+ (id)defaultPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addSlot:(id)arg1 forIntentKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (bool)loadModel;
- (void)loadOrInit;
- (id)slotForIntentKey:(id)arg1 isRequired:(bool)arg2;
- (void)writeModel;

@end