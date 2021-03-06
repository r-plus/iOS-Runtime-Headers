/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDExtension : NSObject <DEDSecureArchiving> {
    NSString * _identifier;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)arg1;
+ (id)extensionWithDicionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)name;
- (id)serialize;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
