/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
    id * _additionalPrivateIvars;
    id * _cachedObsInfoByEntity;
    int  _cd_rc;
    NSMutableSet * _changedObjects;
    NSString * _contextLabel;
    NSMutableSet * _deletedObjects;
    void * _dispatchQueue;
    double  _fetchTimestamp;
    struct _managedObjectContextFlags { 
        unsigned int _registeredForCallback : 1; 
        unsigned int _propagatesDeletesAtEndOfEvent : 1; 
        unsigned int _exhaustiveValidation : 1; 
        unsigned int _processingChanges : 1; 
        unsigned int _useCommittedSnapshot : 1; 
        unsigned int _registeredUndoTransactionID : 1; 
        unsigned int _retainsAllRegisteredObjects : 1; 
        unsigned int _savingInProgress : 1; 
        unsigned int _wasDisposed : 1; 
        unsigned int _unprocessedChangesPending : 1; 
        unsigned int _isDirty : 1; 
        unsigned int _ignoreUndoCheckpoints : 1; 
        unsigned int _propagatingDeletes : 1; 
        unsigned int _isNSEditorEditing : 1; 
        unsigned int _isMainThreadBlessed : 1; 
        unsigned int _isImportContext : 1; 
        unsigned int _preflightSaveInProgress : 1; 
        unsigned int _disableDiscardEditing : 1; 
        unsigned int _isParentStoreContext : 1; 
        unsigned int _postSaveNotifications : 1; 
        unsigned int _isMerging : 1; 
        unsigned int _concurrencyType : 1; 
        unsigned int _deleteInaccessible : 1; 
        unsigned int _priority : 2; 
        unsigned int _autoMerge : 1; 
        unsigned int _isXPCServerContext : 1; 
        unsigned int _pushSecureDelete : 1; 
        unsigned int _refreshAfterSave : 1; 
        unsigned int _reservedFlags : 3; 
    }  _flags;
    int  _ignoreChangeNotification;
    id  _infoByGID;
    NSMutableSet * _insertedObjects;
    id  _lock;
    long long  _lockCount;
    NSMutableSet * _lockedObjects;
    long long  _objectStoreLockCount;
    id  _parentObjectStore;
    id  _queueOwner;
    long long  _referenceCallbackRegistration;
    id  _referenceQueue;
    NSMutableSet * _refreshedObjects;
    void * _reserved1;
    id  _reserved3;
    id  _reserved4;
    id  _reserved6;
    int  _spinLock;
    short  _undoTransactionID;
    NSMutableSet * _unprocessedChanges;
    NSMutableSet * _unprocessedDeletes;
    NSMutableSet * _unprocessedInserts;
}

@property (nonatomic) bool automaticallyMergesChangesFromParent;
@property (readonly) unsigned long long concurrencyType;
@property (nonatomic, retain) NSString *debugName;
@property (nonatomic, readonly) NSSet *deletedObjects;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) NSSet *insertedObjects;
@property (retain) id mergePolicy;
@property (copy) NSString *name;
@property (retain) NSManagedObjectContext *parentContext;
@property (retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic) bool propagatesDeletesAtEndOfEvent;
@property (nonatomic, readonly) NSQueryGenerationToken *queryGenerationToken;
@property (nonatomic, readonly) NSSet *registeredObjects;
@property (nonatomic) bool retainsRegisteredObjects;
@property bool shouldDeleteInaccessibleFaults;
@property (nonatomic) bool shouldPerformSecureOperation;
@property (nonatomic) bool shouldRefreshAfterSave;
@property double stalenessInterval;
@property (copy) NSString *transactionAuthor;
@property (nonatomic, retain) NSUndoManager *undoManager;
@property (nonatomic, readonly) NSSet *updatedObjects;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (bool)_handleError:(id)arg1 withError:(id*)arg2;
+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)new;

- (void)_addObjectIDsUpdatedByTriggers:(id)arg1;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (bool)_attemptCoalesceChangesForFetch;
- (void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1;
- (unsigned int)_batchRetainedObjects:(id*)arg1 forCount:(unsigned int)arg2 withIDs:(id*)arg3 optionalHandler:(id)arg4 withInlineStorage:(bool)arg5;
- (void)_changeIDsForManagedObjects:(id)arg1 toIDs:(id)arg2;
- (id)_changeTrackingToken__;
- (bool)_checkObjectForExistenceAndCacheRow:(id)arg1;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_clearDeletions;
- (void)_clearInsertions;
- (void)_clearLockedObjects;
- (void)_clearOriginalSnapshotAndInitializeRec:(id)arg1;
- (void)_clearOriginalSnapshotForObject:(id)arg1;
- (void)_clearRefreshedObjects;
- (void)_clearUnprocessedDeletions;
- (void)_clearUnprocessedInsertions;
- (void)_clearUnprocessedUpdates;
- (void)_clearUpdates;
- (id)_committedSnapshotForObject:(id)arg1;
- (void)_copyChildObject:(id)arg1 toParentObject:(id)arg2 fromChildContext:(id)arg3;
- (unsigned long long)_countWithMergedChangesForRequest:(id)arg1 possibleChanges:(id)arg2 possibleDeletes:(id)arg3 error:(id*)arg4;
- (unsigned long long)_countWithNoChangesForRequest:(id)arg1 error:(id*)arg2;
- (void)_createAndPostChangeNotification:(id)arg1 deletions:(id)arg2 updates:(id)arg3 refreshes:(id)arg4 deferrals:(id)arg5 wasMerge:(bool)arg6;
- (id)_createStoreFetchRequestForFetchRequest:(id)arg1;
- (id)_currentEventSnapshotForObject:(id)arg1;
- (void)_dealloc__;
- (id)_debuggingOnly_localObjectForGlobalID:(id)arg1;
- (id)_delegate;
- (void)_didSaveChanges;
- (void)_disableChangeNotifications;
- (bool)_disableDiscardEditing;
- (void)_dispose:(bool)arg1;
- (void)_disposeObjects:(id*)arg1 count:(unsigned long long)arg2 notifyParent:(bool)arg3;
- (bool)_doPreSaveConstraintChecksForObjects:(id)arg1 error:(id*)arg2;
- (void)_enableChangeNotifications;
- (void)_enqueueEndOfEventNotification;
- (void)_establishEventSnapshotsForObject:(id)arg1;
- (id)_executeAsynchronousFetchRequest:(id)arg1;
- (unsigned long long)_fetchLimitForRequest:(id)arg1;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_forceRegisterLostFault:(id)arg1;
- (void)_forceRemoveFromDeletedObjects:(id)arg1;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(bool)arg2;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(bool)arg2 removeFromRegistry:(bool)arg3;
- (id)_generateOptLockExceptionForConstraintFailure:(id)arg1;
- (id)_globalIDForObject:(id)arg1;
- (id)_globalIDsForObjects:(id)arg1;
- (void)_growRegistrationCollectionForEntitySlot:(unsigned int)arg1 toSize:(unsigned long long)arg2;
- (bool)_handleError:(id)arg1 withError:(id*)arg2;
- (bool)_hasIDMappings;
- (bool)_ignoringChangeNotifications;
- (id)_implicitObservationInfoForEntity:(id)arg1 forResultingClass:(Class*)arg2;
- (void)_incrementUndoTransactionID;
- (void)_informParentStore:(id)arg1 noLongerInterestedInObjects:(id)arg2;
- (void)_informParentStore:(id)arg1 ofInterestInObjects:(id)arg2;
- (void)_informParentStoreNoLongerInterestedInObjectIDs:(id)arg1 generation:(id)arg2;
- (void)_informParentStoreOfInterestInObjectIDs:(id)arg1 generation:(id)arg2;
- (id)_initWithParentObjectStore:(unsigned long long)arg1;
- (void)_insertObjectWithGlobalID:(id)arg1 globalID:(id)arg2;
- (bool)_isDeallocating;
- (bool)_isImportContext;
- (bool)_isPreflightSaveInProgress;
- (bool)_isXPCServerContext;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(bool)arg2 contextInfo:(struct { id x1; void *x2; }*)arg3;
- (id)_mappedForParentStoreID:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
- (void)_mergeRefreshEpilogueForObject:(id)arg1 mergeChanges:(bool)arg2;
- (bool)_mergeRefreshObject:(id)arg1 mergeChanges:(bool)arg2 withPersistentSnapshot:(id)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)_newSaveRequestForCurrentState;
- (id)_newUnchangedLockedObjects;
- (void)_noop:(id)arg1;
- (void)_objectsChangedInStore:(id)arg1;
- (id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (id)_parentObjectsForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_parentProcessSaveRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)_parentStore;
- (void)_performCoordinatorActionAndWait:(id /* block */)arg1;
- (void)_persistentStoreDidUpdateAdditionalRowsWithNewVersions:(id)arg1;
- (void)_postContextDidMergeChangesNotificationWithUserInfo:(id)arg1;
- (void)_postContextDidSaveNotificationWithUserInfo:(id)arg1;
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)arg1;
- (void)_postRefreshedObjectsNotificationAndClearList;
- (bool)_postSaveNotifications;
- (void)_prefetchObjectsForDeletePropagation:(id)arg1;
- (bool)_prepareForPushChanges:(id*)arg1;
- (void)_prepareUnprocessedDeletionAfterRefresh:(id)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (bool)_processDeletedObjects:(id*)arg1;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_processNotificationQueue;
- (void)_processObjectStoreChanges:(id)arg1;
- (id)_processPendingDeletions:(id)arg1 withInsertions:(id)arg2 withUpdates:(id)arg3 withNewlyForgottenList:(id)arg4 withRemovedChangedObjects:(id)arg5;
- (id)_processPendingInsertions:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (id)_processPendingUpdates:(id)arg1;
- (bool)_processRecentChanges:(id*)arg1;
- (void)_processRecentlyForgottenObjects:(id)arg1;
- (void)_processReferenceQueue:(bool)arg1;
- (void)_propagateDeletesUsingTable:(id)arg1;
- (bool)_propagatePendingDeletesAtEndOfEvent:(id*)arg1;
- (id)_queryGenerationToken__;
- (void)_refaultObject:(id)arg1 globalID:(id)arg2 boolean:(bool)arg3;
- (void)_registerAsyncReferenceCallback;
- (void)_registerClearStateWithUndoManager;
- (void)_registerForNotificationsWithCoordinator:(id)arg1;
- (void)_registerObject:(id)arg1 withID:(id)arg2;
- (void)_registerUndoForDeletedObjects:(id)arg1 withDeletedChanges:(id)arg2;
- (void)_registerUndoForInsertedObjects:(id)arg1;
- (void)_registerUndoForModifiedObjects:(id)arg1;
- (void)_registerUndoForOperation:(SEL)arg1 withObjects:(id)arg2 withExtraArguments:(id)arg3;
- (void)_resetAllChanges;
- (id)_retainedCurrentQueryGeneration;
- (id)_retainedObjectWithID:(id)arg1;
- (id)_retainedObjectWithID:(id)arg1 error:(id*)arg2;
- (id)_retainedObjectWithID:(id)arg1 optionalHandler:(id)arg2 withInlineStorage:(bool)arg3;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (id)_retainedRegisteredObjects;
- (void)_sendCommitEditingSelectorToTarget:(id)arg1 sender:(id)arg2 selector:(SEL)arg3 flag:(bool)arg4 contextInfo:(void*)arg5 delayed:(bool)arg6;
- (void)_sendOrEnqueueNotification:(id)arg1 selector:(SEL)arg2;
- (void)_setAutomaticallyMergesChangesFromParent:(bool)arg1;
- (bool)_setChangeTrackingTokenFromToken:(id)arg1 error:(id*)arg2;
- (void)_setDelegate:(id)arg1;
- (void)_setDisableDiscardEditing:(bool)arg1;
- (void)_setIsUbiquityImportContext:(bool)arg1;
- (void)_setParentContext:(id)arg1;
- (void)_setPersistentStoreCoordinator:(id)arg1;
- (void)_setPostSaveNotifications:(bool)arg1;
- (bool)_setQueryGenerationFromToken:(id)arg1 error:(id*)arg2;
- (void)_setRetainsRegisteredObjects:(bool)arg1;
- (void)_setStalenessInterval:(double)arg1;
- (void)_setStopsValidationAfterFirstError:(bool)arg1;
- (void)_setUndoManager:(id)arg1;
- (void)_setXPCServerContext:(bool)arg1;
- (void)_startObservingUndoManagerNotifications;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (void)_stopObservingUndoManagerNotifications;
- (bool)_stopsValidationAfterFirstError;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_thereIsNoSadnessLikeTheDeathOfOptimism;
- (bool)_tryRetain;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)_unlimitRequest:(id)arg1;
- (void)_unregisterForNotifications;
- (id)_unsafeName;
- (id)_unsafeTransactionAuthor;
- (bool)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id*)arg4;
- (void)_updateUndoTransactionForThisEvent:(id)arg1 withDeletions:(id)arg2 withUpdates:(id)arg3;
- (void)_updateUnprocessedOwnDestinations:(id)arg1;
- (bool)_validateChangesForSave:(id*)arg1;
- (bool)_validateDeletesUsingTable:(id)arg1 withError:(id*)arg2;
- (bool)_validateObjects:(id)arg1 forOperation:(unsigned int)arg2 error:(id*)arg3 exhaustive:(bool)arg4 forSave:(bool)arg5;
- (void)_youcreatedanNSManagedObjectContextOnthemainthreadandillegallypassedittoabackgroundthread;
- (void)assertOnImproperDealloc;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (bool)automaticallyMergesChangesFromParent;
- (id)changeTrackingToken;
- (bool)commitEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void*)arg3;
- (unsigned long long)concurrencyType;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (id)deletedObjects;
- (id)description;
- (void)detectConflictsForObject:(id)arg1;
- (void)discardEditing;
- (void)encodeWithCoder:(id)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)finalize;
- (bool)hasChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (void)insertObject:(id)arg1;
- (id)insertedObjects;
- (bool)isEditing;
- (void)lock;
- (void)lockObjectStore;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (id)mergePolicy;
- (id)name;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (id)objectRegisteredForID:(id)arg1;
- (void)objectWillChange:(id)arg1;
- (id)objectWithID:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)parentContext;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)performBlockWithResult:(id /* block */)arg1;
- (id)performFetch:(id)arg1 error:(id*)arg2;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(id /* block */)arg2;
- (id)persistentStoreCoordinator;
- (void)processPendingChanges;
- (bool)propagatesDeletesAtEndOfEvent;
- (id)queryGenerationToken;
- (void)redo;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (id)registeredObjects;
- (oneway void)release;
- (void)reset;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainsRegisteredObjects;
- (void)rollback;
- (bool)save:(id*)arg1;
- (void)setAutomaticallyMergesChangesFromParent:(bool)arg1;
- (void)setMergePolicy:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentContext:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPropagatesDeletesAtEndOfEvent:(bool)arg1;
- (bool)setQueryGenerationFromToken:(id)arg1 error:(id*)arg2;
- (void)setRetainsRegisteredObjects:(bool)arg1;
- (void)setShouldDeleteInaccessibleFaults:(bool)arg1;
- (void)setShouldPerformSecureOperation:(bool)arg1;
- (void)setShouldRefreshAfterSave:(bool)arg1;
- (void)setStalenessInterval:(double)arg1;
- (void)setTransactionAuthor:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (bool)shouldDeleteInaccessibleFaults;
- (bool)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3;
- (bool)shouldPerformSecureOperation;
- (bool)shouldRefreshAfterSave;
- (double)stalenessInterval;
- (id)transactionAuthor;
- (bool)tryLock;
- (void)undo;
- (id)undoManager;
- (void)unlock;
- (void)unlockObjectStore;
- (id)updatedObjects;
- (id)userInfo;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (void)vs_removeAllPersistentStores;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)debugName;
- (bool)ic_save;
- (bool)ic_saveWithLogDescription:(id)arg1;
- (void)setDebugName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)deleteObjectsWithIncrementalSave:(id)arg1;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long*)arg2 batchSize:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long*)arg2 usingDefaultBatchSizeWithBlock:(id /* block */)arg3;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)isUserInterfaceContext;
- (id)photoLibrary;
- (void)pl_refresh;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)objectWithURI:(id)arg1;

@end
