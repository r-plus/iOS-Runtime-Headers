/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDEndOfTransactionV2 : NSObject <NFAWDEventProtocol> {
    unsigned int  _avgRSSIValue;
    unsigned int  _command;
    unsigned int  _commandParam1;
    unsigned int  _commandResult;
    unsigned int  _currencyCode;
    unsigned int  _expressType;
    bool  _hasExpiryDate;
    unsigned int  _informative;
    bool  _isBlacklisted;
    unsigned int  _maxRSSIValue;
    AWDNFCHCIEndOfTransactionV2Event * _metric;
    unsigned int  _minRSSIValue;
    unsigned int  _spid;
    unsigned int  _totalRSSISamples;
    unsigned int  _transactionCategory;
    unsigned int  _transactionExtension;
    unsigned int  _transactionInProgress;
    unsigned int  _transactionStatus;
    unsigned int  _transactionType;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned int avgRSSIValue;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) unsigned int commandResult;
@property (nonatomic) unsigned int currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int expressType;
@property (nonatomic) bool hasExpiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int informative;
@property (nonatomic) bool isBlacklisted;
@property (nonatomic) unsigned int maxRSSIValue;
@property (nonatomic, retain) AWDNFCHCIEndOfTransactionV2Event *metric;
@property (nonatomic) unsigned int minRSSIValue;
@property (nonatomic) unsigned int spid;
@property (nonatomic, retain) NSData *stationId;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *terminalIdentifier;
@property (nonatomic) unsigned int totalRSSISamples;
@property (nonatomic) unsigned int transactionCategory;
@property (nonatomic) unsigned int transactionExtension;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned int transactionInProgress;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) unsigned int version;

- (id)aid;
- (unsigned int)avgRSSIValue;
- (unsigned int)command;
- (unsigned int)commandParam1;
- (unsigned int)commandResult;
- (unsigned int)currencyCode;
- (void)dealloc;
- (unsigned int)expressType;
- (id)getMetric;
- (unsigned int)getMetricId;
- (bool)hasExpiryDate;
- (unsigned int)informative;
- (id)init;
- (bool)isBlacklisted;
- (unsigned int)maxRSSIValue;
- (id)metric;
- (unsigned int)minRSSIValue;
- (void)setAid:(id)arg1;
- (void)setAvgRSSIValue:(unsigned int)arg1;
- (void)setCommand:(unsigned int)arg1;
- (void)setCommandParam1:(unsigned int)arg1;
- (void)setCommandResult:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setExpressType:(unsigned int)arg1;
- (void)setHasExpiryDate:(bool)arg1;
- (void)setInformative:(unsigned int)arg1;
- (void)setIsBlackListed:(bool)arg1;
- (void)setIsBlacklisted:(bool)arg1;
- (void)setMaxRSSIValue:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setMinRSSIValue:(unsigned int)arg1;
- (void)setSpid:(unsigned int)arg1;
- (void)setStationId:(id)arg1;
- (void)setTerminalIdentifier:(id)arg1;
- (void)setTotalRSSISamples:(unsigned int)arg1;
- (void)setTransactionCategory:(unsigned int)arg1;
- (void)setTransactionExtension:(unsigned int)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionInProgress:(unsigned int)arg1;
- (void)setTransactionStatus:(unsigned int)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)spid;
- (id)stationId;
- (id)terminalIdentifier;
- (unsigned int)totalRSSISamples;
- (unsigned int)transactionCategory;
- (unsigned int)transactionExtension;
- (id)transactionId;
- (unsigned int)transactionInProgress;
- (unsigned int)transactionStatus;
- (unsigned int)transactionType;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned int)version;

@end
