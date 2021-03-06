/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneGeometry : NSObject <NSSecureCoding> {
    unsigned long long  _boundaryVertexCount;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__value_"^ {}  _textureCoordinates;
    struct vector<short, std::__1::allocator<short> > { 
        short *__begin_; 
        short *__end_; 
        struct __compressed_pair<short *, std::__1::allocator<short> > { 
            short *__value_; 
        } __end_cap_; 
    }  _triangleIndices;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__value_"^ {}  _vertices;
}

@property (nonatomic, readonly) unsigned long long boundaryVertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**boundaryVertices;
@property (nonatomic, readonly) unsigned long long textureCoordinateCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**textureCoordinates;
@property (nonatomic, readonly) unsigned long long triangleCount;
@property (nonatomic, readonly) const short*triangleIndices;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)boundaryVertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)boundaryVertices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBoundaryVertices:(void *)arg1 center:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 1: const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^ {}*
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^ {}*)arg1 textureCoordinates:(const struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {}*)arg2 triangleIndices:(const struct vector<short, std::__1::allocator<short> > { short *x1; short *x2; struct __compressed_pair<short *, std::__1::allocator<short> > { short *x_3_1_1; } x3; }*)arg3 boundaryVertexCount:(unsigned long long)arg4;
- (unsigned long long)textureCoordinateCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)textureCoordinates;
- (unsigned long long)triangleCount;
- (const short*)triangleIndices;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
