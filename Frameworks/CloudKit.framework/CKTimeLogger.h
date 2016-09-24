/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKTimeLogger : NSObject <NSCoding> {
    NSMutableArray * _childLoggers;
    NSMutableDictionary * _currentSessions;
    NSMutableDictionary * _logs;
    NSString * _observedObjectClassName;
    NSString * _observedObjectDescription;
    CKTimeLogger * _parentLogger;
    NSString * _parentLoggerDescription;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _relationMessage;
    double  _relationTime;
}

@property (readonly) NSArray *childLoggers;
@property (retain) NSMutableDictionary *currentSessions;
@property (readonly) NSDictionary *logs;
@property (nonatomic, retain) NSString *observedObjectClassName;
@property (nonatomic, retain) NSString *observedObjectDescription;
@property (nonatomic) CKTimeLogger *parentLogger;
@property (nonatomic, retain) NSString *parentLoggerDescription;
@property (nonatomic, retain) NSString *relationMessage;
@property (nonatomic) double relationTime;

+ (id)loggerForObject:(id)arg1;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)addChildLogger:(id)arg1;
- (void)addCustomLogOfType:(id)arg1 message:(id)arg2 from:(double)arg3 to:(double)arg4;
- (void)addLog:(id)arg1 forType:(id)arg2;
- (void)appendBriefStatusReportToString:(id)arg1;
- (void)appendStatusReportForType:(id)arg1 toString:(id)arg2 withIndent:(unsigned int)arg3 showingPointers:(BOOL)arg4;
- (void)appendStatusReportToString:(id)arg1 withIndent:(unsigned int)arg2 showingPointers:(BOOL)arg3;
- (void)beginLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (id)childLoggers;
- (id)currentSessions;
- (void)dealloc;
- (id)description;
- (void)dumpLogs;
- (void)dumpLogsForType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (id)init;
- (id)initForObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)intervalLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (id)logs;
- (id)logsForType:(id)arg1;
- (id)observedObjectClassName;
- (id)observedObjectDescription;
- (id)parentLogger;
- (id)parentLoggerDescription;
- (void)relateAsChildToParent:(id)arg1 message:(id)arg2;
- (id)relationMessage;
- (double)relationTime;
- (void)removeChildLogger:(id)arg1;
- (void)setCurrentSessions:(id)arg1;
- (void)setObservedObject:(id)arg1;
- (void)setObservedObjectClassName:(id)arg1;
- (void)setObservedObjectDescription:(id)arg1;
- (void)setParentLogger:(id)arg1;
- (void)setParentLoggerDescription:(id)arg1;
- (void)setRelationMessage:(id)arg1;
- (void)setRelationTime:(double)arg1;
- (void)togglePauseLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)treeTraversalWithBlock:(id /* block */)arg1;

@end