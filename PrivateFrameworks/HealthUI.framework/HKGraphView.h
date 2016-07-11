/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphView : UIView <HKGraphRenderDelegate, HKScrollPerformanceTestable, HKSeriesDelegate, UIScrollViewDelegate> {
    HKPropertyAnimationApplier * _animationApplier;
    NSArray * _axesToShowSimultaneously;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _axisInset;
    HKValueRange * _axisRange;
    UIImage * _bottomFeatheringImage;
    HKValueRange * _chartableDateRange;
    NSMutableArray * _currentSeries;
    <HKGraphViewDelegate> * _delegate;
    unsigned long long  _featheringOptions;
    bool  _haveRescaledSinceRender;
    UIImage * _leftFeatheringImage;
    long long  _maximumDateZoom;
    long long  _minimumDateZoom;
    bool  _needsUpdateGraphViewConfiguration;
    UIColor * _outlineColor;
    unsigned long long  _outlineOptions;
    UIView<HKGraphRenderer> * _renderView;
    UIImage * _rightFeatheringImage;
    UIScrollView * _scrollView;
    UIView * _scrollViewContent;
    _HKGraphViewSelectionContext * _selectionContext;
    HKGraphViewSelectionStyle * _selectionStyle;
    bool  _shouldInformDelegateOfUpdates;
    bool  _shouldListenToScrollViewDelegate;
    UIImage * _topFeatheringImage;
    UIColor * _topMarginColor;
    HKValueRange * _visibleDateRange;
    HKDateAxis * _xAxis;
    long long  _xAxisDateZoom;
    NSMutableDictionary * _zoomToSeriesMapping;
}

@property (nonatomic, readonly) NSArray *allSeries;
@property (nonatomic, retain) NSArray *axesToShowSimultaneously;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } axisInset;
@property (nonatomic, retain) HKValueRange *axisRange;
@property (nonatomic, retain) HKValueRange *chartableDateRange;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKGraphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long featheringOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumDateZoom;
@property (nonatomic) long long minimumDateZoom;
@property (nonatomic, copy) UIColor *outlineColor;
@property (nonatomic) unsigned long long outlineOptions;
@property (nonatomic, retain) HKGraphViewSelectionStyle *selectionStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *topMarginColor;
@property (nonatomic, retain) HKValueRange *visibleDateRange;
@property (nonatomic, copy) HKDateAxis *xAxis;
@property (nonatomic, readonly) long long xAxisDateZoom;
@property (nonatomic) double zoomScale;

- (void).cxx_destruct;
- (void)_addPointSelectionRecognizerToView:(id)arg1;
- (void)_addTapGestureRecognizerToView:(id)arg1;
- (void)_autoScaleXAxis;
- (void)_autoScaleYAxisIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_axisRect;
- (void)_clearRenderViewIfNecessary;
- (id)_closestSeriesToPoint:(struct CGPoint { double x1; double x2; })arg1 allSeries:(id)arg2;
- (long long)_currentSelectionState;
- (id)_dateForXAxisLocation:(double)arg1;
- (id)_defaultXAxisValueRange;
- (void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2;
- (void)_enumerateSeriesSelectionRegionsWithBlock:(id /* block */)arg1;
- (void)_fitVisibleDateRangeToAxisRange;
- (id)_graphSeriesForZoom:(long long)arg1;
- (void)_loadFeatheringImages;
- (void)_loadScrollView;
- (double)_maxTimeThreshold;
- (void)_moveSeriesToFront:(id)arg1;
- (id)_mutableAllSeries;
- (void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_notifyDelegateOfVisibleDateRange:(id)arg1;
- (void)_notifyDidBeginSelection;
- (void)_notifyDidEndSelection;
- (void)_notifyDidUpdateSelectionWithPointContext:(id)arg1;
- (long long)_numSelectionAreas;
- (void)_pauseChartInteraction;
- (void)_pointSelectionGestureRecognizerDidFinish:(id)arg1;
- (void)_pointSelectionGestureRecognizerDidMove:(id)arg1;
- (void)_pointSelectionRecognizerDidBegin:(id)arg1;
- (void)_pointSelectionRecognizerDidUpdate:(id)arg1;
- (void)_reloadViewScope;
- (void)_renderAxisLabels;
- (void)_renderDividersAndFeatheringWithContext:(struct CGContext { }*)arg1;
- (void)_renderGridlines;
- (void)_renderSelectionLineWithContext:(struct CGContext { }*)arg1;
- (void)_renderSeriesWithContext:(struct CGContext { }*)arg1 secondaryRenderContext:(id)arg2;
- (void)_resumeChartInteraction;
- (void)_scrollToDateRange:(id)arg1;
- (void)_scrollToNowAnimated:(bool)arg1;
- (id)_selectedRegionForTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_selectionAreaHeight;
- (id)_seriesForCommonAxes;
- (void)_setNeedsUpdateGraphViewConfiguration;
- (void)_setVisibleXAxisRange:(struct HKRange { double x1; double x2; })arg1 animated:(bool)arg2;
- (bool)_simultaneousAxesAreEqual;
- (void)_tapGestureRecognizerFired:(id)arg1;
- (double)_timeIntervalFromDateRange:(id)arg1;
- (void)_updateAxisDateZoomScaleValueRange;
- (void)_updateDateZoomIfNecessary;
- (void)_updateGraphViewConfiguration;
- (void)_updateGraphViewConfigurationIfNecessary;
- (void)_updateScene;
- (void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(id /* block */)arg1;
- (void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateZoomForParameters;
- (id)_visibleYAxis;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_xAxisCoordinateTransform;
- (id)allSeries;
- (id)axesToShowSimultaneously;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })axisInset;
- (id)axisRange;
- (id)chartableDateRange;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)delegate;
- (unsigned long long)featheringOptions;
- (void)forceYAxisAutoScaleAnimated:(bool)arg1;
- (void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(struct CGContext { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)maximumDateZoom;
- (long long)minimumDateZoom;
- (id)outlineColor;
- (unsigned long long)outlineOptions;
- (void)removeSeries;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectionStyle;
- (void)seriesDidInvalidatePaths:(id)arg1;
- (void)setAxesToShowSimultaneously:(id)arg1;
- (void)setAxisInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAxisRange:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setChartableDateRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeatheringOptions:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumDateZoom:(long long)arg1;
- (void)setMinimumDateZoom:(long long)arg1;
- (void)setNeedsReloadSeries;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineOptions:(unsigned long long)arg1;
- (void)setRenderView:(id)arg1;
- (void)setSelectionStyle:(id)arg1;
- (void)setTopMarginColor:(id)arg1;
- (void)setVisibleDateRange:(id)arg1;
- (void)setXAxis:(id)arg1;
- (void)setXAxisDateZoom:(long long)arg1 animated:(bool)arg2;
- (void)setZoomScale:(double)arg1;
- (bool)stillAnimating:(id)arg1;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;
- (id)topMarginColor;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)visibleDateRange;
- (id)xAxis;
- (long long)xAxisDateZoom;
- (double)zoomScale;

@end