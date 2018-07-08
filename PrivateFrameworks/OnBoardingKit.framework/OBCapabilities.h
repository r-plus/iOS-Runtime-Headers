/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBCapabilities : NSObject {
    bool  _preventOpeningSafari;
    bool  _preventURLDataDetection;
}

@property (nonatomic) bool preventOpeningSafari;
@property (nonatomic) bool preventURLDataDetection;

+ (void)_setSharedCapabilities:(id)arg1;
+ (id)sharedCapabilities;

- (bool)isWAPI;
- (bool)preventOpeningSafari;
- (bool)preventURLDataDetection;
- (void)setPreventOpeningSafari:(bool)arg1;
- (void)setPreventURLDataDetection:(bool)arg1;

@end
