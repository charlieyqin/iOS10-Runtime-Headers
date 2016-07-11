/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKMainEventHandler : UIResponder <AKFormFeatureDetectorDelegate> {
    AKAnnotationEventHandler * _annotationEventHandler;
    AKAnnotation * _annotationToBeginEditingOnDragEnd;
    AKController * _controller;
    unsigned long long  _currentModifierFlags;
    AKAlignmentGuideController * _dragAlignmentGuideController;
    bool  _dragDidCopySelectedAnnotations;
    AKPageController * _dragPageController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstDragPoint;
    AKHighlightColorEditorController * _highlightColorEditor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragActualLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragActualLocationInWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragPoint;
    UIEvent * _lastEventWithValidLocationForAutoscroll;
    UIEvent * _lastLeftMouseDownEvent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftMouseDownPoint;
    bool  _mainEventHandlerIsInDoodleTrackingLoop;
    bool  _mainEventHandlerIsInRotationLoop;
    bool  _mainEventHandlerIsInTrackingLoop;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panGestureStartPointInWindow;
    bool  _shouldEatNextLeftMouseUp;
    bool  _shouldEatNextRightMouseUp;
    bool  _undoManagerWasGroupingByEvent;
    bool  _wasSelectedByLongPressRecognizer;
}

@property (retain) AKAnnotationEventHandler *annotationEventHandler;
@property AKAnnotation *annotationToBeginEditingOnDragEnd;
@property AKController *controller;
@property unsigned long long currentModifierFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) AKAlignmentGuideController *dragAlignmentGuideController;
@property bool dragDidCopySelectedAnnotations;
@property (retain) AKPageController *dragPageController;
@property struct CGPoint { double x1; double x2; } firstDragPoint;
@property (readonly) unsigned long long hash;
@property (retain) AKHighlightColorEditorController *highlightColorEditor;
@property struct CGPoint { double x1; double x2; } lastDragActualLocation;
@property struct CGPoint { double x1; double x2; } lastDragActualLocationInWindow;
@property struct CGPoint { double x1; double x2; } lastDragPoint;
@property (retain) UIEvent *lastEventWithValidLocationForAutoscroll;
@property (retain) UIEvent *lastLeftMouseDownEvent;
@property struct CGPoint { double x1; double x2; } leftMouseDownPoint;
@property bool mainEventHandlerIsInDoodleTrackingLoop;
@property bool mainEventHandlerIsInRotationLoop;
@property bool mainEventHandlerIsInTrackingLoop;
@property struct CGPoint { double x1; double x2; } panGestureStartPointInWindow;
@property bool shouldEatNextLeftMouseUp;
@property bool shouldEatNextRightMouseUp;
@property (readonly) Class superclass;
@property bool undoManagerWasGroupingByEvent;
@property bool wasSelectedByLongPressRecognizer;

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_alignedAnnotationDragPointForPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (bool)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint { double x1; double x2; })arg1 withStartingPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_didNotHandleEventSoDeselect;
- (void)_setCurrentPageBasedOnPageController:(id)arg1;
- (void)_updateSelectionWithAnnotation:(id)arg1 onPageController:(id)arg2;
- (id)annotationEventHandler;
- (id)annotationToBeginEditingOnDragEnd;
- (id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint { double x1; double x2; })arg1 onPageController:(id)arg2;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint { double x1; double x2; })arg1;
- (bool)continueDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)continueRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (id)controller;
- (unsigned long long)currentModifierFlags;
- (id)dragAlignmentGuideController;
- (bool)dragDidCopySelectedAnnotations;
- (id)dragPageController;
- (bool)enterDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)enterRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)finishTranslationOfAllSelectedAnnotations;
- (struct CGPoint { double x1; double x2; })firstDragPoint;
- (bool)handleDoubleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)handleKeyboardEvent:(id)arg1;
- (bool)handleRightDownEvent:(id)arg1;
- (bool)handleRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (id)highlightColorEditor;
- (bool)hitTestPointsOfInterestsAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPageController:(id)arg2 inAnnotations:(id)arg3 event:(id)arg4 recognizer:(id)arg5 cursorUpdateOnly:(bool)arg6;
- (id)initWithController:(id)arg1;
- (struct CGPoint { double x1; double x2; })lastDragActualLocation;
- (struct CGPoint { double x1; double x2; })lastDragActualLocationInWindow;
- (struct CGPoint { double x1; double x2; })lastDragPoint;
- (id)lastEventWithValidLocationForAutoscroll;
- (id)lastLeftMouseDownEvent;
- (struct CGPoint { double x1; double x2; })leftMouseDownPoint;
- (bool)mainEventHandlerIsInDoodleTrackingLoop;
- (bool)mainEventHandlerIsInRotationLoop;
- (bool)mainEventHandlerIsInTrackingLoop;
- (bool)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint { double x1; double x2; })modelPointFromEvent:(id)arg1 orRecognizer:(id)arg2 onPageController:(id*)arg3;
- (struct CGPoint { double x1; double x2; })modelPointFromWindowPoint:(struct CGPoint { double x1; double x2; })arg1 foundOnPageController:(id*)arg2;
- (struct CGPoint { double x1; double x2; })panGestureStartPointInWindow;
- (void)setAnnotationEventHandler:(id)arg1;
- (void)setAnnotationToBeginEditingOnDragEnd:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentModifierFlags:(unsigned long long)arg1;
- (void)setDragAlignmentGuideController:(id)arg1;
- (void)setDragDidCopySelectedAnnotations:(bool)arg1;
- (void)setDragPageController:(id)arg1;
- (void)setFirstDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHighlightColorEditor:(id)arg1;
- (void)setLastDragActualLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastDragActualLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastEventWithValidLocationForAutoscroll:(id)arg1;
- (void)setLastLeftMouseDownEvent:(id)arg1;
- (void)setLeftMouseDownPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMainEventHandlerIsInDoodleTrackingLoop:(bool)arg1;
- (void)setMainEventHandlerIsInRotationLoop:(bool)arg1;
- (void)setMainEventHandlerIsInTrackingLoop:(bool)arg1;
- (void)setPanGestureStartPointInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldEatNextLeftMouseUp:(bool)arg1;
- (void)setShouldEatNextRightMouseUp:(bool)arg1;
- (void)setUndoManagerWasGroupingByEvent:(bool)arg1;
- (void)setWasSelectedByLongPressRecognizer:(bool)arg1;
- (bool)shouldEatNextLeftMouseUp;
- (bool)shouldEatNextRightMouseUp;
- (void)teardown;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint { double x1; double x2; })arg1 inAnnotations:(id)arg2 onPageController:(id)arg3 wasOnBorder:(bool*)arg4 wasOnText:(bool*)arg5;
- (bool)undoManagerWasGroupingByEvent;
- (void)updateCropHandleVisibilityForEvent:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (bool)wasSelectedByLongPressRecognizer;
- (struct CGPoint { double x1; double x2; })windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;

@end