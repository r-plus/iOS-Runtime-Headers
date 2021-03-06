/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase {
    NSDictionary * _declarationPayload;
}

@property (readonly, retain) NSDictionary *declarationPayload;
@property (nonatomic, readonly) NSData *payloadCertificate;

+ (id)allowedPayloadKeys;

- (void).cxx_destruct;
- (id)declarationPayload;
- (id)payloadCertificate;
- (id)serializePayload:(id)arg1;
- (bool)validPayloadDictionary:(id)arg1 error:(id*)arg2;

@end
