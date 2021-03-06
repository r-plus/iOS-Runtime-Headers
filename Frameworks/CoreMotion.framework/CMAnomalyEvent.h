/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAnomalyEvent : NSObject {
    double  _absTimestamp;
    unsigned long long  _aopTimestamp;
}

@property (nonatomic, readonly) NSDate *timestamp;

- (unsigned long long)aopTimestamp;
- (id)description;
- (id)initWithAbsTimestamp:(double)arg1 aopTimestamp:(unsigned long long)arg2;
- (id)timestamp;

@end
