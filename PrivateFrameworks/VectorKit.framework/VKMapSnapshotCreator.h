/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKImageCanvasDelegate> {
    id /* block */  _completion;
    bool  _didBecomeFullyDrawn;
    bool  _didSoftDealloc;
    unsigned char  _emphasis;
    VKGlobeImageCanvas * _globeCanvas;
    bool  _hasFailedTiles;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapImageCanvas * _mapCanvas;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine> > { 
        struct __compressed_pair<md::MapEngine *, std::__1::default_delete<md::MapEngine> > { 
            struct MapEngine {} *__value_; 
        } __ptr_; 
    }  _mapEngine;
    long long  _mapType;
    VKMemoryObserver * _memoryObserver;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char emphasis;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic) long long mapType;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsPointsOfInterest;
@property (nonatomic) bool showsVenues;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (bool)supportsSharingThumbnails;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (id)activeCanvas;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)cancel;
- (void)cancelFlushingTileDecodes:(bool)arg1;
- (void)dealloc;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(id)arg1;
- (unsigned char)emphasis;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (bool)isRoadClassDisabled:(int)arg1;
- (long long)labelScaleFactor;
- (bool)localizeLabels;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (long long)mapType;
- (void)nearestVenueDidChange:(const struct Venue { unsigned long long x1; unsigned long long x2; struct vector<md::VenueBuilding, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_1_1; struct VenueBuilding {} *x_3_1_2; struct __compressed_pair<md::VenueBuilding *, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_2_1; } x_3_1_3; } x3; struct Polygon2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)arg1 building:(const struct VenueBuilding { struct vector<md::VenueLevel, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_1_1_1; struct VenueLevel {} *x_1_1_2; struct __compressed_pair<md::VenueLevel *, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; short x6; struct Matrix<double, 2, 1> { double x_7_1_1[2]; } x7; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; }*)arg2;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)renderSnapshot:(id /* block */)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (bool)showsVenues;
- (struct CGSize { double x1; double x2; })size;
- (void)softDealloc;
- (bool)wantsTimerTick;
- (void)willLayoutWithTimestamp:(double)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults;
- (void)_mapkit_configureWithOptions:(id)arg1;

@end
