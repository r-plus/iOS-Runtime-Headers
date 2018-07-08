/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBBundleManager : NSObject

+ (void)_setSharedManager:(id)arg1;
+ (id)sharedManager;

- (id)_allPrivacyBundles;
- (id)_bundleSearchPath;
- (id)allBundles;
- (id)bundleWithIdentifier:(id)arg1;
- (id)bundlesWithIdentifiers:(id)arg1;
- (id)orderedPrivacyBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(bool)arg1;

@end