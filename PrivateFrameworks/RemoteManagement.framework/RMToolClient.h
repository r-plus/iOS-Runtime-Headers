/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMToolClient : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

+ (id)client;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithServiceName:(id)arg1;
- (void)setConnection:(id)arg1;

@end
