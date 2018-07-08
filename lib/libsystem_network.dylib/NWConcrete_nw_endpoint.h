/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libsystem_network.dylib
 */

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    unsigned short  alternate_port;
    char * description;
    NSObject<OS_nw_interface> * interface;
    bool  is_local_domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    char * parent_endpoint_domain;
    NWConcrete_nw_endpoint * proxy_original_endpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const char *domainForPolicy;
@property (nonatomic, readonly) const char *getDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned short port;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;

// Image: /usr/lib/system/libsystem_network.dylib

- (void).cxx_destruct;
- (id)copyDictionary;
- (void)dealloc;
- (const char *)domainForPolicy;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2;
- (unsigned short)port;
- (unsigned int)type;

// Image: /usr/lib/libnetwork.dylib

- (id)description;

@end
