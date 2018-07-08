/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteDatabase : NSObject {
    NSString * _databasePath;
    struct sqlite3 { } * _db;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _isInTransaction;
    NSString * _protectionType;
    bool  _readOnly;
    id /* block */  _setupBlock;
    struct __CFDictionary { } * _statementCache;
    bool  _takesTaskCompletionAssertions;
    BKSProcessAssertion * _taskAssertion;
    long long  _taskAssertionCount;
}

@property (nonatomic, copy) id /* block */ setupBlock;
@property bool takesTaskCompletionAssertions;

+ (void)_setTakesTaskCompletionAssertions:(bool)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 didFinish:(bool*)arg3 isCorrupt:(bool*)arg4;
+ (bool)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (bool)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;

- (void)_accessDatabaseUsingBlock:(id /* block */)arg1;
- (void)_beginTaskCompletionAssertion;
- (void)_endTaskCompletionAssertion;
- (void)_expireBackgroundTask;
- (int)_openDatabase;
- (int)_openFlags;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (void)_resetCorruptDatabase;
- (void)_resetDatabaseWithPath:(id)arg1;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(bool)arg2;
- (void)accessDatabaseUsingBlock:(id /* block */)arg1;
- (void)beginTaskCompletionAssertion;
- (bool)columnName:(id)arg1 existsInTable:(id)arg2;
- (long long)countChanges;
- (void)dealloc;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchBlockAsync:(id /* block */)arg1;
- (void)dispatchBlockSync:(id /* block */)arg1;
- (void)endTaskCompletionAssertion;
- (bool)executeSQL:(id)arg1;
- (void)expireBackgroundTask;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(bool)arg2;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(bool)arg2 protectionType:(id)arg3;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { }*)arg1;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)setSetupBlock:(id /* block */)arg1;
- (void)setTakesTaskCompletionAssertions:(bool)arg1;
- (bool)setUserVersion:(long long)arg1;
- (bool)setUserVersion:(long long)arg1 forDatabase:(id)arg2;
- (id /* block */)setupBlock;
- (bool)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (bool)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (bool)takesTaskCompletionAssertions;
- (long long)userVersion;
- (long long)userVersionForDatabase:(id)arg1;

@end
