/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {
    UIKeyboardCandidateGridCollectionViewController * _collectionViewController;
    UIKeyboardCandidateSortControl * _scrollViewSortControl;
    unsigned long long  _selectedSortIndex;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, readonly) TIKeyboardCandidateResultSet *candidateResultSet;
@property (nonatomic, retain) UIKeyboardCandidateGridCollectionViewController *collectionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIKeyboardCandidateSortControl *scrollViewSortControl;
@property (nonatomic) unsigned long long selectedSortIndex;
@property (readonly) Class superclass;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

- (void).cxx_destruct;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateList;
- (id)candidateResultSet;
- (void)clearCollectionViewController;
- (id)collectionViewController;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned long long)arg2;
- (bool)hasCandidates;
- (id)headerViewForCandidateSet:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (bool)isTenKey;
- (id)keyboardBehaviors;
- (id)scrollViewSortControl;
- (unsigned long long)selectedSortIndex;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCollectionViewController:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setScrollViewSortControl:(id)arg1;
- (void)setSelectedSortIndex:(unsigned long long)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (void)sortSelectionBarAction:(id)arg1;
- (id)statisticsIdentifier;
- (void)updateCollectionViewController;
- (void)updateCollectionViewController:(bool)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

@end
