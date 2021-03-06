/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKPencilAnnotationStorage : TSPObject <TSPCopying> {
    long long  _attachedLocation;
    PKDrawing * _drawingForTextRecognition;
    NSData * _encodedDrawing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _markupOffset;
    struct CGPath { } * _path;
    TSUImage * _rasterizedImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledBoundsOfStrokes;
}

@property (nonatomic) long long attachedLocation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centerOfStrokes;
@property (nonatomic, readonly) PKDrawing *drawingForTextRecognition;
@property (nonatomic, retain) NSData *encodedDrawing;
@property (nonatomic) struct CGPoint { double x1; double x2; } markupOffset;
@property (nonatomic, readonly) bool needsTextRecognition;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic, retain) TSUImage *rasterizedImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledBoundsOfStrokes;

- (void).cxx_destruct;
- (long long)attachedLocation;
- (struct CGPoint { double x1; double x2; })centerOfStrokes;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)drawingForTextRecognition;
- (id)encodedDrawing;
- (id)initWithContext:(id)arg1 markupOffset:(struct CGPoint { double x1; double x2; })arg2 rasterizedImage:(id)arg3 attachedLocation:(long long)arg4 encodedDrawing:(id)arg5 path:(struct CGPath { }*)arg6 unscaledBoundsOfStrokes:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7;
- (void)initializeTextRecognitionIfNeeded;
- (void)loadFromArchive:(const struct PencilAnnotationStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; struct DataReference {} *x6; struct DataReference {} *x7; struct Path {} *x8; struct Point {} *x9; struct Size {} *x10; int x11; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (struct CGPoint { double x1; double x2; })markupOffset;
- (bool)needsTextRecognition;
- (struct CGPath { }*)path;
- (id)rasterizedImage;
- (void)saveToArchiver:(id)arg1;
- (void)setAttachedLocation:(long long)arg1;
- (void)setEncodedDrawing:(id)arg1;
- (void)setMarkupOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setRasterizedImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledBoundsOfStrokes;

@end
