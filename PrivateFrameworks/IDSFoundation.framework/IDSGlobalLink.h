/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSGlobalLink : NSObject <IDSLink, IDSLinkDelegate> {
    unsigned int  _acceptDelayU32;
    NSString * _acceptedRelaySessionID;
    struct IDSSimpleUInt16List { 
        int listSize; 
        int itemCount; 
        unsigned short *items; 
    }  _activeLinkIDList;
    NSObject<OS_dispatch_source> * _activityTimer;
    NSMutableArray * _allocateTimeReportBlocks;
    double  _allocbindEndTime;
    double  _allocbindStartTime;
    <IDSLinkDelegate> * _alternateDelegate;
    NSString * _appName;
    unsigned short  _basebandPacketChannelNumber;
    NSString * _cbuuid;
    struct IDSSimpleUInt16List { 
        int listSize; 
        int itemCount; 
        unsigned short *items; 
    }  _channelNumberList;
    NSMutableDictionary * _channelToCandidatePairs;
    long long  _clientType;
    unsigned char  _clientUUID;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _commnatServer;
    double  _commnatTimeout;
    id /* block */  _connectReadyHandler;
    NSData * _controlMessageKey;
    unsigned short  _defaultChannelNumber;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _defaultDestination;
    <IDSLink> * _defaultLink;
    BOOL  _defaultLinkID;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _defaultSource;
    int  _defaultSourceIfIndex;
    long long  _defaultStunTransport;
    bool  _delaySessionConnected;
    NSMutableArray * _delayedCellInterfaces;
    bool  _delayedConnData;
    <IDSLinkDelegate> * _delegate;
    NSString * _deviceUniqueID;
    bool  _disallowCellular;
    bool  _disallowWiFi;
    id /* block */  _disconnectCompletionHandler;
    NSObject<OS_dispatch_source> * _disconnectTimer;
    bool  _enableSKE;
    double  _firstClientPacketTime;
    bool  _forceQuickRelay;
    bool  _hasPendingAllocation;
    bool  _hasPendingSelfAllocation;
    unsigned long long  _headerOverhead;
    NSString * _idsSessionID;
    NSMutableArray * _interfaceAddressArray;
    double  _inviteRecvTime;
    double  _inviteSentTime;
    bool  _isFaceTimeCall;
    bool  _isInitiator;
    bool  _isMultiway;
    double  _lastIncomingPacket;
    double  _lastOutgoingPacket;
    double  _linkConnectTime;
    BOOL  _linkIDCounter;
    NSMutableDictionary * _linkIDToCandidatePairs;
    NSMutableArray * _localCandidateList;
    int  _localConnDataCounter;
    struct IDSNAT64PrefixCache_ { } * _nat64PrefixCache;
    double  _natMappingTimeout;
    int  _nominateCount;
    NSMutableArray * _nonAcceptedQRSessions;
    NSMutableDictionary * _nonceToCandidates;
    NSMutableDictionary * _nonceToRequest;
    int  _portRange;
    bool  _preferCellularForCallSetup;
    unsigned long long  _previousBytesReceived;
    unsigned long long  _previousBytesSent;
    unsigned long long  _previousPacketsReceived;
    unsigned long long  _previousPacketsSent;
    double  _previousReportTime;
    unsigned char  _protocolVersion;
    IDSGlobalLinkBlocks * _qraBlocks;
    struct IDSSimpleUInt16List { 
        int listSize; 
        int itemCount; 
        unsigned short *items; 
    }  _reallocChannelList;
    bool  _recvRemoteSKEData;
    NSMutableArray * _remoteCandidateList;
    int  _remoteConnDataCounter;
    bool  _remoteUsesLegacyStun;
    NSMutableArray * _selfAllocateRequestIDs;
    bool  _skeComplete;
    NSData * _skeData;
    double  _skeStartTime;
    NSData * _softwareData;
    unsigned short  _startPort;
    unsigned long long  _state;
    struct IDSSimpleUInt16List { 
        int listSize; 
        int itemCount; 
        unsigned short *items; 
    }  _streamIDOptOutList;
    NSMutableDictionary * _stunRequestToID;
    NSMutableArray * _targetedAllocations;
    IDSTCPLink * _tcpLink;
    IDSTCPLink * _tcpSSLLink;
    NSMutableDictionary * _tokenToCandidatePairs;
    NSMutableDictionary * _tokenToReallocBlocks;
    NSMutableDictionary * _tokenToSessionMessages;
    NSMutableDictionary * _tokenToStunCheckPairs;
    unsigned long long  _totalBytesReceived;
    unsigned long long  _totalBytesSent;
    unsigned long long  _totalPacketsReceived;
    unsigned long long  _totalPacketsSent;
    NSMutableDictionary * _transcationIDToToken;
    IDSUDPLink * _udpLink;
    IDSUDPLink * _udpLinkv6;
    bool  _useSecureControlMessage;
}

@property <IDSLinkDelegate> *alternateDelegate;
@property (retain) NSString *cbuuid;
@property (readonly, copy) NSString *debugDescription;
@property <IDSLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead;
@property (getter=linkTypeString, readonly) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_IsExtIPDiscoveryNeeded:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 candidatePairList:(id)arg2;
- (bool)_addCandidate:(id)arg1 isRemoteCandidate:(bool)arg2;
- (void)_addQRAAWDBlock:(id)arg1 allocateRequestTime:(double)arg2 inferredExternalIP:(unsigned int)arg3 stunTransport:(long long)arg4 relayProviderType:(long long)arg5;
- (id)_addSocketAndInterfaceAddress:(unsigned long long)arg1 wantsWiFi:(bool)arg2 wantsCellular:(bool)arg3;
- (void)_addStunCheckPair:(id)arg1 isRemoteCandidate:(bool)arg2;
- (unsigned int)_calculateLocalMTU:(bool)arg1 isCellular:(bool)arg2 isRelay:(bool)arg3;
- (void)_callDisconnectCompletionHandler:(id)arg1;
- (unsigned long long)_cellularRATForExtIPv4:(unsigned int)arg1;
- (id)_commandMessage:(long long)arg1 candidatePairToken:(id)arg2;
- (void)_convergeQRSessionWithCandidatePair:(id)arg1;
- (id)_createCommandData:(long long)arg1 options:(id)arg2 candidatePair:(id)arg3;
- (id)_createInterfaceAddressArray:(unsigned long long)arg1 wantsWiFi:(bool)arg2 wantsCellular:(bool)arg3;
- (id)_delayProcessingCellularInterfaces:(id)arg1;
- (void)_discardAllCandidatePairs;
- (void)_discardCandidatePairsWithOption:(bool)arg1;
- (void)_discardNonAcceptedCandidatePairs;
- (void)_discardSelfAllocateCandidatePairs;
- (void)_getCommNATServerAddress;
- (float)_getCommNATTimeoutValue;
- (id)_getLink:(int)arg1 stunTransport:(long long)arg2;
- (unsigned int)_getLinkInformation:(long long)arg1 linkOK:(bool*)arg2;
- (void)_getNAT64PrefixForInterface:(int)arg1 interfaceName:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_handleActivityTimer;
- (void)_handleDisconnectTimer;
- (void)_handleSelfAllocationTimeout:(id)arg1;
- (bool)_hasConnectedCandidatePair;
- (bool)_hasConnectedRelayCandidatePair;
- (bool)_hasConnectingRelayCandidatePair;
- (id)_interfaceTypeListToString:(unsigned char)arg1;
- (bool)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2;
- (bool)_isExtIPDiscoveryDone;
- (bool)_isInterfaceUsedForRelay:(int)arg1 candidatePairs:(id)arg2;
- (bool)_isReachableInterface:(id)arg1 interfaceIPVersion:(unsigned long long)arg2;
- (id)_linkTypeListToString:(unsigned char)arg1;
- (id)_linkTypeMaskToString:(unsigned char)arg1;
- (unsigned char)_newRelayLinkType:(unsigned char)arg1 localInterface:(unsigned char)arg2 remoteInterface:(unsigned char)arg3;
- (id)_nextConnectedCandidatePair;
- (void)_nominateCandidatePair:(id)arg1;
- (void)_notifyCandidatePairConnected:(id)arg1;
- (void)_notifyCandidatePairDisconnected:(id)arg1;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (void)_notifyLinkDisconnectedWithError:(long long)arg1;
- (void)_notifyQRSessionConnected:(id)arg1;
- (void)_parseClientUUID:(id)arg1;
- (bool)_processAllocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processCommandConnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandConnectionData:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandDisconnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandHeartbeat:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3;
- (void)_processCommandNominate:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommnatResponse:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 arrivalTime:(double)arg2;
- (bool)_processDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processDataOnReallocChannel:(unsigned short)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3;
- (void)_processDelayedCellularInterfaces;
- (bool)_processEchoResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processGoAwayIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processIncomingIndicationData:(char *)arg1 length:(int)arg2 candidatePairToken:(id)arg3 arrivalTime:(double)arg4;
- (void)_processNewLocalAddressList:(id)arg1;
- (void)_processNewRemoteCandidates:(id)arg1;
- (void)_processReallocChannelData:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(double)arg5;
- (bool)_processReallocIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processRemoteCandidates:(id)arg1;
- (void)_processRemoteLinkUUID:(id)arg1 candidatePair:(id)arg2;
- (void)_processRemovedLocalAddressList:(id)arg1;
- (void)_processRemovedRemoteCandidates:(id)arg1;
- (bool)_processStunErrorResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (bool)_processStunPacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(double)arg4;
- (bool)_processUnallocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 remmoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processXORMappedAddress:(id)arg1 arrivalTime:(double)arg2;
- (void)_removePacketNotificationFilter;
- (void)_removeSessionCommandMessage:(long long)arg1 candidatePairToken:(id)arg2;
- (void)_removeStunRequest:(id)arg1;
- (void)_reportAWDActiveLinkRTT:(float)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned long long)arg4;
- (void)_reportAWDAllocateTime;
- (void)_reportAWDClientTimerEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5 resultCode:(long long)arg6;
- (void)_reportAWDExtIPDetectionTime:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 startTime:(double)arg2 arrivalTime:(double)arg3 localRAT:(unsigned long long)arg4 resultCode:(long long)arg5;
- (void)_reportAWDReallocIndicationResult:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned long long)arg4;
- (void)_reportAWDSessionSetupFailure:(long long)arg1 stunTransport:(long long)arg2 localRAT:(unsigned long long)arg3 resultCode:(long long)arg4;
- (void)_reportAWDStunMessageEvent:(long long)arg1 sharedSession:(bool)arg2 duration:(float)arg3 relayProviderType:(long long)arg4 transport:(long long)arg5 localRAT:(unsigned long long)arg6 resultCode:(long long)arg7;
- (void)_reportSessionSetupTime;
- (void)_requestNonUDPRelayAllocation:(long long)arg1 relaySessionID:(id)arg2;
- (bool)_requestSelfAllocationForInterfaceAddress:(id)arg1;
- (void)_saveCommandMessage:(long long)arg1 stunMessage:(id)arg2 candidatePairToken:(id)arg3;
- (void)_saveStunRequest:(id)arg1 token:(id)arg2;
- (void)_selectBetterDefaultCandidatePair:(id)arg1;
- (void)_selectDefaultCandidatePair;
- (id)_selectInterfaceForAllocation:(id)arg1 stunTransport:(long long)arg2;
- (void)_sendAllocbindRequest:(id)arg1 stunMessage:(id)arg2 isRealloc:(bool)arg3;
- (void)_sendAllocbindRequestForExtIPWithSessionID:(id)arg1 sessionToken:(id)arg2 sessionKey:(id)arg3 serverAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 relayProviderType:(long long)arg5 startTime:(double)arg6;
- (void)_sendBindingRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_sendCommandMessage:(long long)arg1 options:(id)arg2 candidatePairToken:(id)arg3;
- (void)_sendCommnatRequest:(id)arg1 candidate:(id)arg2;
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;
- (void)_sendEchoRequest:(id)arg1 stunMessage:(id)arg2;
- (unsigned long long)_sendOnePacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)_sendSKEDataWithSelectedCandidatePair;
- (void)_sendSessionDisconnectedCommand;
- (bool)_sendStunMessage:(id)arg1 sourceIfIndex:(int)arg2 source:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 destination:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg4 stunTransport:(long long)arg5;
- (void)_sendUnallocbindRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_setChannelToCandidatePair:(id)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 channelNumber:(unsigned short)arg4;
- (void)_setupRelayConnectionForNetworkAddressChanges;
- (void)_setupRelayConnectionIfNecessary;
- (bool)_skipCommandMessage:(long long)arg1 candidatePair:(id)arg2 timeNow:(double)arg3;
- (void)_startActivityTimer;
- (void)_startDisconnectTimer;
- (void)_startExtIPDiscovery:(long long)arg1;
- (void)_startStunCheck:(id)arg1;
- (double)_startTimeForStunRequest:(id)arg1;
- (void)_stopActivityTimer;
- (void)_stopDisconnectTimer;
- (long long)_stunErrorTypeToGlobalLinkError:(long long)arg1;
- (long long)_stunTransportWithSessionInfo:(id)arg1;
- (void)_updateDefaultCandidatePair:(id)arg1;
- (void)_updateNominatedCandidatePair:(id)arg1;
- (id)alternateDelegate;
- (id)cbuuid;
- (void)connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)copyLinkStatsDict;
- (void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3;
- (void)dealloc;
- (unsigned long long)defaultLinkType;
- (id)delegate;
- (id)deviceUniqueID;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)dropIPPackets:(BOOL)arg1 payloadArray:(id)arg2;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (void)handleCellularRATChange;
- (void)handleNetworkAddressChanges:(bool)arg1 hasIPv6AddressChange:(bool)arg2;
- (bool)hasReachableInterface:(unsigned long long)arg1;
- (unsigned long long)headerOverhead;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;
- (void)invalidate;
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (bool)link:(id)arg1 didReceivePacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (id)linkTypeString;
- (bool)remoteHostAwake;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; unsigned short x16; unsigned char x17; bool x18; unsigned long long x19; BOOL x20; BOOL x21; int x22; unsigned char x23[0]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)sendSKEData:(id)arg1;
- (void)setAcceptedRelaySession:(id)arg1 options:(id)arg2;
- (void)setAlternateDelegate:(id)arg1;
- (void)setCbuuid:(id)arg1;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setPacketNotificationFilter:(BOOL)arg1 uniqueTag:(unsigned int)arg2 isEnabled:(bool)arg3;
- (void)startWithOptions:(id)arg1;
- (unsigned long long)state;
- (void)stopKeepAlive:(id)arg1;
- (void)updateProtocolQualityOfService:(BOOL)arg1 isGood:(bool)arg2;
- (void)updateStreamIDFilter:(id)arg1 optOut:(bool)arg2;

@end
