/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {
    NSAttributedString * _attributedText;
    unsigned int  _audioQueueFlags;
    unsigned int  _audioSessionID;
    bool  _audioSessionIDIsValid;
    NSArray * _channels;
    void * _clientContext;
    <TTSSpeechRequestDelegate> * _delegate;
    double  _dispatchTime;
    long long  _gender;
    double  _handledTime;
    NSString * _languageCode;
    double  _latency;
    bool  _maintainsInput;
    NSString * _originalString;
    NSMutableArray * _originalWordRanges;
    NSURL * _outputPath;
    double  _pitch;
    NSMutableArray * _processedWordRanges;
    double  _rate;
    NSMutableArray * _replacedWords;
    TTSSpeechChannel * _speechChannel;
    bool  _supportsAccurateWordCallbacks;
    NSString * _text;
    bool  _useMonarchStyleRate;
    bool  _useVoiceBooster;
    double  _volume;
    long long  _wordRangeCallbacksDispatched;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) bool audioSessionIDIsValid;
@property (nonatomic, retain) NSArray *channels;
@property (nonatomic) void*clientContext;
@property (nonatomic) double dispatchTime;
@property (nonatomic) long long gender;
@property (nonatomic) double handledTime;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) double latency;
@property (nonatomic) bool maintainsInput;
@property (nonatomic, retain) NSString *originalString;
@property (nonatomic, retain) NSMutableArray *originalWordRanges;
@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic) double pitch;
@property (nonatomic, retain) NSMutableArray *processedWordRanges;
@property (nonatomic) double rate;
@property (nonatomic, retain) NSMutableArray *replacedWords;
@property (nonatomic, retain) TTSSpeechChannel *speechChannel;
@property (nonatomic) bool supportsAccurateWordCallbacks;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool useMonarchStyleRate;
@property (nonatomic) bool useVoiceBooster;
@property (nonatomic) double volume;
@property (nonatomic) long long wordRangeCallbacksDispatched;

+ (bool)supportsSecureCoding;

- (id)attributedText;
- (unsigned int)audioQueueFlags;
- (unsigned int)audioSessionID;
- (bool)audioSessionIDIsValid;
- (id)channels;
- (void*)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (double)dispatchTime;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (double)handledTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechChannel:(id)arg1;
- (id)languageCode;
- (double)latency;
- (bool)maintainsInput;
- (id)originalString;
- (id)originalWordRanges;
- (id)outputPath;
- (double)pitch;
- (id)processedWordRanges;
- (double)rate;
- (id)replacedWords;
- (void)setAttributedText:(id)arg1;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionIDIsValid:(bool)arg1;
- (void)setChannels:(id)arg1;
- (void)setClientContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchTime:(double)arg1;
- (void)setGender:(long long)arg1;
- (void)setHandledTime:(double)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLatency:(double)arg1;
- (void)setMaintainsInput:(bool)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setOriginalWordRanges:(id)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setPitch:(double)arg1;
- (void)setProcessedWordRanges:(id)arg1;
- (void)setRate:(double)arg1;
- (void)setReplacedWords:(id)arg1;
- (void)setSpeechChannel:(id)arg1;
- (void)setSupportsAccurateWordCallbacks:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUseMonarchStyleRate:(bool)arg1;
- (void)setUseVoiceBooster:(bool)arg1;
- (void)setVolume:(double)arg1;
- (void)setWordRangeCallbacksDispatched:(long long)arg1;
- (id)speechChannel;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (void)speechRequestDidStopWithSuccess:(bool)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forService:(id)arg3;
- (bool)supportsAccurateWordCallbacks;
- (id)text;
- (bool)useMonarchStyleRate;
- (bool)useVoiceBooster;
- (long long)vocalizerFootprint;
- (long long)vocalizerGender;
- (double)volume;
- (long long)wordRangeCallbacksDispatched;

@end
