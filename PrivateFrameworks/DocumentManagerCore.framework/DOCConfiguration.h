/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _browserViewContext;
    bool  _capNumberOfItemsDynamically;
    bool  _collectionSupportsDragAndDrop;
    DOCConcreteLocation * _defaultLocation;
    NSArray * _documentTypes;
    bool  _enableThumbnailFadeAnimation;
    NSArray * _excludedDocumentTypes;
    bool  _forPickingDocuments;
    NSArray * _forbiddenActionIdentifiers;
    NSArray * _hiddenSourcesIdentifiers;
    NSString * _hostBundleTitle;
    NSString * _hostIdentifier;
    bool  _inProcess;
    unsigned long long  _interactionMode;
    unsigned long long  _maximumNumberOfItemsToFetch;
    unsigned long long  _maximumNumberOfRows;
    bool  _neverCreateBookmarkForOpenInPlace;
    bool  _observeCollectionControls;
    bool  _onlyShowiCloudDrive;
    bool  _pickingItemsShouldBumpLastOpenDate;
    bool  _preferLastUsedDate;
    bool  _restoreLastVisitedLocation;
    NSString * _roleIdentifier;
    bool  _saveLastVisitedLocation;
    bool  _shouldAdjustContentInset;
    bool  _shouldIgnoreInteractionMode;
    bool  _shouldOpenInApp;
    bool  _showCollectionControls;
    bool  _showListModeButton;
    bool  _showLocationPopover;
    bool  _showSearchInCollection;
    bool  _showSearchInNavBar;
    bool  _singleSourceMode;
    bool  _skipDownload;
    bool  _sourceIsManaged;
    bool  _sourceIsWritableFileProvider;
    bool  _suppressBlackCallout;
    double  _thumbnailFetchingTimeOut;
    NSArray * _urls;
    bool  _useExpandedSourceList;
    bool  _useSharedQuickLook;
}

@property unsigned long long browserViewContext;
@property bool capNumberOfItemsDynamically;
@property bool collectionSupportsDragAndDrop;
@property (retain) DOCConcreteLocation *defaultLocation;
@property (nonatomic, copy) NSArray *documentTypes;
@property bool enableThumbnailFadeAnimation;
@property (nonatomic, copy) NSArray *excludedDocumentTypes;
@property bool forPickingDocuments;
@property (retain) NSArray *forbiddenActionIdentifiers;
@property (nonatomic, copy) NSArray *hiddenSourcesIdentifiers;
@property (nonatomic, copy) NSString *hostBundleTitle;
@property (nonatomic, copy) NSString *hostIdentifier;
@property bool inProcess;
@property unsigned long long interactionMode;
@property (readonly) bool isFilesApp;
@property unsigned long long maximumNumberOfItemsToFetch;
@property unsigned long long maximumNumberOfRows;
@property bool neverCreateBookmarkForOpenInPlace;
@property bool observeCollectionControls;
@property bool onlyShowiCloudDrive;
@property bool pickingItemsShouldBumpLastOpenDate;
@property bool preferLastUsedDate;
@property bool restoreLastVisitedLocation;
@property (nonatomic, copy) NSString *roleIdentifier;
@property bool saveLastVisitedLocation;
@property bool shouldAdjustContentInset;
@property bool shouldIgnoreInteractionMode;
@property bool shouldOpenInApp;
@property bool showCollectionControls;
@property bool showListModeButton;
@property bool showLocationPopover;
@property bool showSearchInCollection;
@property bool showSearchInNavBar;
@property bool singleSourceMode;
@property bool skipDownload;
@property (nonatomic) bool sourceIsManaged;
@property bool sourceIsWritableFileProvider;
@property bool suppressBlackCallout;
@property double thumbnailFetchingTimeOut;
@property (retain) NSArray *urls;
@property bool useExpandedSourceList;
@property bool useSharedQuickLook;

+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)browserViewContext;
- (bool)capNumberOfItemsDynamically;
- (bool)collectionSupportsDragAndDrop;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultLocation;
- (id)documentTypes;
- (bool)enableThumbnailFadeAnimation;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedDocumentTypes;
- (bool)forPickingDocuments;
- (id)forbiddenActionIdentifiers;
- (id)hiddenSourcesIdentifiers;
- (id)hostBundleTitle;
- (id)hostIdentifier;
- (bool)inProcess;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionMode;
- (unsigned long long)interactionModeForPreparing;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (bool)isFilesApp;
- (unsigned long long)maximumNumberOfItemsToFetch;
- (unsigned long long)maximumNumberOfRows;
- (bool)neverCreateBookmarkForOpenInPlace;
- (bool)observeCollectionControls;
- (bool)onlyShowiCloudDrive;
- (bool)pickingItemsShouldBumpLastOpenDate;
- (bool)preferLastUsedDate;
- (bool)restoreLastVisitedLocation;
- (id)roleIdentifier;
- (bool)saveLastVisitedLocation;
- (void)setBrowserViewContext:(unsigned long long)arg1;
- (void)setCapNumberOfItemsDynamically:(bool)arg1;
- (void)setCollectionSupportsDragAndDrop:(bool)arg1;
- (void)setDefaultLocation:(id)arg1;
- (void)setDocumentTypes:(id)arg1;
- (void)setEnableThumbnailFadeAnimation:(bool)arg1;
- (void)setExcludedDocumentTypes:(id)arg1;
- (void)setForPickingDocuments:(bool)arg1;
- (void)setForbiddenActionIdentifiers:(id)arg1;
- (void)setHiddenSourcesIdentifiers:(id)arg1;
- (void)setHostBundleTitle:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setInProcess:(bool)arg1;
- (void)setInteractionMode:(unsigned long long)arg1;
- (void)setMaximumNumberOfItemsToFetch:(unsigned long long)arg1;
- (void)setMaximumNumberOfRows:(unsigned long long)arg1;
- (void)setNeverCreateBookmarkForOpenInPlace:(bool)arg1;
- (void)setObserveCollectionControls:(bool)arg1;
- (void)setOnlyShowiCloudDrive:(bool)arg1;
- (void)setPickingItemsShouldBumpLastOpenDate:(bool)arg1;
- (void)setPreferLastUsedDate:(bool)arg1;
- (void)setRestoreLastVisitedLocation:(bool)arg1;
- (void)setRoleIdentifier:(id)arg1;
- (void)setSaveLastVisitedLocation:(bool)arg1;
- (void)setShouldAdjustContentInset:(bool)arg1;
- (void)setShouldIgnoreInteractionMode:(bool)arg1;
- (void)setShouldOpenInApp:(bool)arg1;
- (void)setShowCollectionControls:(bool)arg1;
- (void)setShowListModeButton:(bool)arg1;
- (void)setShowLocationPopover:(bool)arg1;
- (void)setShowSearchInCollection:(bool)arg1;
- (void)setShowSearchInNavBar:(bool)arg1;
- (void)setSingleSourceMode:(bool)arg1;
- (void)setSkipDownload:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setSourceIsWritableFileProvider:(bool)arg1;
- (void)setSuppressBlackCallout:(bool)arg1;
- (void)setThumbnailFetchingTimeOut:(double)arg1;
- (void)setUrls:(id)arg1;
- (void)setUseExpandedSourceList:(bool)arg1;
- (void)setUseSharedQuickLook:(bool)arg1;
- (bool)shouldAdjustContentInset;
- (bool)shouldIgnoreInteractionMode;
- (bool)shouldOpenInApp;
- (bool)showCollectionControls;
- (bool)showListModeButton;
- (bool)showLocationPopover;
- (bool)showSearchInCollection;
- (bool)showSearchInNavBar;
- (bool)singleSourceMode;
- (bool)skipDownload;
- (bool)sourceIsManaged;
- (bool)sourceIsWritableFileProvider;
- (bool)suppressBlackCallout;
- (double)thumbnailFetchingTimeOut;
- (id)urls;
- (bool)useExpandedSourceList;
- (bool)useSharedQuickLook;

@end