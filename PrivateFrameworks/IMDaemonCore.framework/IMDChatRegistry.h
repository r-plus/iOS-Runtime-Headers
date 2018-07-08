/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatRegistry : NSObject {
    NSCache * _allChatsByIDCache;
    NSMutableDictionary * _chats;
    NSMutableDictionary * _chatsByGroupID;
    NSRecursiveLock * _chatsLock;
    bool  _doneLoadingAfterMerge;
    bool  _isLoading;
    IMDMessageHistorySyncController * _messageHistorySyncController;
    IMDMessageProcessingController * _messageProcessingController;
}

@property (nonatomic, readonly) NSArray *chats;
@property (nonatomic, readonly) IMDCNPersonAliasResolver *cnaliasResolver;
@property (nonatomic, readonly) IMDMessageHistorySyncController *messageHistorySyncController;
@property (nonatomic, readonly) IMDMessageProcessingController *messageProcessingController;

+ (id)sharedInstance;

- (void)__addChatToGroupIDChatIndex:(id)arg1;
- (void)__removeChatFromGroupIDChatIndex:(id)arg1;
- (id)_aliasToHandlesMap:(id)arg1;
- (id)_allChatInfo;
- (id)_allHandles;
- (bool)_chat:(id)arg1 isDuplicateOfChat:(id)arg2;
- (id)_chatInfoForConnection;
- (id)_chatInfoForNumberOfChats:(long long)arg1;
- (id)_chatInfoForSaving;
- (id)_chatInfoInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct NSArray { Class x1; }*)_createGroupChatsArray;
- (id)_existingChatForCKRecord:(id)arg1;
- (id)_existingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)_findChatWinnerInDuplicateChatArray:(struct NSArray { Class x1; }*)arg1;
- (id)_findLosingChatGUIDsInArrayOfChats:(struct NSArray { Class x1; }*)arg1 withWinner:(id)arg2;
- (void)_forceReloadChats:(bool)arg1;
- (void)_insertChatUsingCKRecord:(id)arg1;
- (bool)_isUsingStingRay;
- (id)_lookupChatUsingID:(id)arg1;
- (void)_makeAllAttachmentsClassC;
- (void)_markForksAsSyncedForChat:(id)arg1;
- (bool)_mergeDuplicateGroupsIfNeeded;
- (void)_populateCNRecordIDForHandles:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_saveChats;
- (bool)_updateDuplicateUnnamedGroupsWithNewGroupIDIfNeeded;
- (void)addChat:(id)arg1;
- (void)addChat:(id)arg1 firstLoad:(bool)arg2;
- (void)addItem:(id)arg1 toChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(bool)arg3;
- (id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7;
- (id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chats;
- (id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1 isUsingStingRay:(bool)arg2;
- (void)clearPendingDeleteTable;
- (id)cnaliasResolver;
- (id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
- (void)dealloc;
- (id)existingChatForID:(id)arg1 account:(id)arg2;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatForRoom:(id)arg1 account:(id)arg2;
- (id)existingChatWithEngramID:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithIdentifier:(id)arg1 account:(id)arg2;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatsWithGroupID:(id)arg1;
- (struct NSArray { Class x1; }*)findDuplicateChats:(struct NSArray { Class x1; }*)arg1;
- (struct NSArray { Class x1; }*)findDuplicateUnnamedGroups:(struct NSArray { Class x1; }*)arg1;
- (id)groupChatsBasedOnIdentity;
- (id)init;
- (bool)isBeingSetup;
- (bool)loadChatsWithCompletionBlock:(id /* block */)arg1;
- (void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg1;
- (void)markDefferredChatsAsNeedingSync;
- (id)messageHistorySyncController;
- (id)messageProcessingController;
- (id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1;
- (id)personCentricGroupedChatsDictionary;
- (void)processMessageUsingCKRecord:(id)arg1;
- (void)processMessageUsingCKRecord:(id)arg1 updatedLastMessageCount:(int)arg2;
- (void)removeChat:(id)arg1;
- (void)removeItem:(id)arg1 fromChat:(id)arg2;
- (void)removeMessage:(id)arg1 fromChat:(id)arg2;
- (bool)repairDuplicateChatsIfNeeded;
- (void)resetChatSyncStateForRecord:(id)arg1;
- (bool)saveChats;
- (void)startHandleIDPopulation;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemDidUnlock;
- (void)updateChatUsingCKRecord:(id)arg1;
- (void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 recordID:(id)arg3;
- (void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 historyQuery:(bool)arg3;
- (bool)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)updateStateForChat:(id)arg1 forcePost:(bool)arg2;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(bool)arg4 hintMessage:(id)arg5;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2;
- (bool)updateUnreadCountForChat:(id)arg1;

@end
