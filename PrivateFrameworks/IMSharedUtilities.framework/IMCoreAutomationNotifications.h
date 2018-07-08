/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMCoreAutomationNotifications : NSObject {
    long long  _attachmentsWrittenCount;
    long long  _chatsWrittenCount;
    long long  _messagesWrittenCount;
}

@property (readonly) long long attachmentsWrittenCount;
@property (readonly) long long chatsWrittenCount;
@property (readonly) long long messagesWrittenCount;

+ (id)sharedInstance;

- (void)addNewAttachmentsSyncedCount:(long long)arg1;
- (void)addNewChatsSyncedCount:(long long)arg1;
- (void)addNewMessagesSyncedCount:(long long)arg1;
- (long long)attachmentsWrittenCount;
- (long long)chatsWrittenCount;
- (void)clearSyncCounts;
- (id)init;
- (long long)messagesWrittenCount;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(bool)arg2 messagesDidSync:(bool)arg3 attachmentsDidSync:(bool)arg4;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(bool)arg2;
- (void)postCoreAutomationNotificationWithAction:(id)arg1;
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(bool)arg2;

@end