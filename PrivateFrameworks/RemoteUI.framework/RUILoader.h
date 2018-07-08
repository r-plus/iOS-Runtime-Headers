/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate> {
    bool  _allowNonSecureHTTP;
    RUIParser * _parser;
    <RUIParserDelegate> * _parserDelegate;
    _RUILoaderSessionDelegateAdapter * _sessionDelegateAdapter;
    RUIStyle * _style;
    NSURL * _url;
}

@property (nonatomic) bool allowNonSecureHTTP;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <RUIParserDelegate> *parserDelegate;
@property (nonatomic, retain) RUIStyle *style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_finishLoad;
- (void)allWebViewsFinishedLoading;
- (bool)allowNonSecureHTTP;
- (bool)anyWebViewLoading;
- (void)cancel;
- (void)dealloc;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)handleWillLoadRequest:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)parseData:(id)arg1;
- (id)parserDelegate;
- (bool)receivedValidResponse:(id)arg1;
- (id)sessionConfiguration;
- (void)setAllowNonSecureHTTP:(bool)arg1;
- (void)setParserDelegate:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)urlSessionDelegate;
- (void)webViewFinishedLoading;

@end
