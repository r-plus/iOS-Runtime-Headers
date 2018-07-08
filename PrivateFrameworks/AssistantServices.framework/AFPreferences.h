/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPreferences : NSObject {
    int  _navToken;
    bool  _navTokenIsValid;
    NSObject<OS_dispatch_queue> * _navTokenQueue;
    bool  _registeredForInternalPrefs;
    bool  _registeredForLanguageCode;
    bool  _registeredForOutputVoice;
    bool  _registeredForSupportedLanguages;
}

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(bool*)arg2;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(bool*)arg2;
- (void)_internalPreferencesDidChangeExternally;
- (bool)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2;
- (void)_languageCodeDidChangeExternally;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (void)_ouputVoiceDidChangeExternally;
- (void)_preferencesDidChangeExternally;
- (void)_registerForInteralPrefs;
- (void)_registerForLanguageCodeChangeNotifications;
- (void)_registerForNavStatusIfNeeded;
- (void)_registerForOutputVoice;
- (void)_registerForSupportedLanguageChangeNotifications;
- (void)_setAssistantIsEnabledLocal:(bool)arg1;
- (void)_setDictationIsEnabledLocal:(bool)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)_setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2;
- (void)_setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3;
- (void)_setSuppressDictationOptInLocal:(bool)arg1;
- (id)_supplementalLanguagesDictionary;
- (void)_supportedLanguagesDidChangeExternally;
- (id)activitySummaryReportDate;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(bool*)arg2;
- (bool)applySASToFirstPartyDomains;
- (bool)assistantIsEnabled;
- (bool)assistantLanguageForceRTL;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (bool)cardLoggingEnabled;
- (bool)cloudSyncEnabled;
- (id)cloudSyncEnabledModificationDate;
- (unsigned long long)currentNavigationState;
- (void)dealloc;
- (bool)debugButtonIsEnabled;
- (bool)dictationIsEnabled;
- (bool)disableAssistantWhilePasscodeLocked;
- (bool)fileLoggingIsEnabled;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)arg1;
- (long long)handsFreeMode;
- (id)horsemanSupplementalLanguageDictionary;
- (bool)ignoreServerManualEndpointingThreshold;
- (id)inProgressOutputVoice;
- (id)init;
- (bool)isCurrentLocaleNativelySupported;
- (bool)isLocaleIdentifierNativelySupported:(id)arg1;
- (id)languageCode;
- (bool)legacyLoggingEnabled;
- (bool)limitedAudioLoggingEnabled;
- (id)manualEndpointingThreshold;
- (bool)myriadCoordinationEnabled;
- (id)myriadDeviceGroup;
- (bool)myriadDuckingEnabled;
- (bool)offlineDictationOverride;
- (id)offlineDictationProfileOverridePath;
- (id)outputVoice;
- (void)resetSessionLanguage;
- (bool)respectsSystemMute;
- (void)setActivitySummaryReportDateToNow;
- (void)setApplySASToFirstPartyDomains:(bool)arg1;
- (void)setAssistantIsEnabled:(bool)arg1;
- (void)setAssistantLanguageForceRTL:(bool)arg1;
- (void)setCardLoggingEnabled:(bool)arg1;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setCurrentNavigationState:(unsigned long long)arg1;
- (void)setDebugButtonIsEnabled:(bool)arg1;
- (void)setDictationIsEnabled:(bool)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(bool)arg1;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setHandsFreeMode:(long long)arg1;
- (void)setIgnoreServerManualEndpointingThreshold:(bool)arg1;
- (void)setInProgressOutputVoice:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLimitedAudioLoggingEnabled:(bool)arg1;
- (void)setManualEndpointingThreshold:(id)arg1;
- (void)setMyriadCoordinationEnabled:(bool)arg1;
- (void)setMyriadDeviceGroup:(id)arg1;
- (void)setMyriadDuckingEnabled:(bool)arg1;
- (void)setOfflineDictationOverride:(bool)arg1;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setRespectsSystemMute:(bool)arg1;
- (void)setShowServerOnUI:(bool)arg1;
- (void)setShowsHoldToTalkIndicator:(bool)arg1;
- (void)setSiriDebugUIEnabled:(bool)arg1;
- (void)setSiriKitEnabledForNativeCalling:(bool)arg1;
- (void)setSiriKitEnabledForNativeMessages:(bool)arg1;
- (void)setSiriKitEnabledForNativeNotes:(bool)arg1;
- (void)setStreamingDictationEnabled:(bool)arg1;
- (void)setSuppressAssistantOptIn:(bool)arg1;
- (void)setSuppressDictationOptIn:(bool)arg1;
- (void)setUseDeviceSpeakerForTTS:(long long)arg1;
- (void)setUseSASAutoSelectionFeature:(bool)arg1;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (bool)shouldLogForQA;
- (bool)showServerOnUI;
- (bool)showsHoldToTalkIndicator;
- (bool)siriDebugUIEnabled;
- (bool)siriKitEnabledForNativeCalling;
- (bool)siriKitEnabledForNativeMessages;
- (bool)siriKitEnabledForNativeNotes;
- (bool)streamingDictationEnabled;
- (id)supplementalLanguageDictionaryForProduct:(id)arg1;
- (id)supplementalLanguages;
- (id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2;
- (id)supplementalLanguagesModificationDate;
- (bool)suppressAssistantOptIn;
- (bool)suppressDictationOptIn;
- (void)synchronize;
- (void)synchronizeVoiceServicesLanguageCode;
- (long long)useDeviceSpeakerForTTS;
- (bool)useSASAutoSelectionFeature;
- (id)valueForSessionContextPreferenceKey:(id)arg1;

@end
