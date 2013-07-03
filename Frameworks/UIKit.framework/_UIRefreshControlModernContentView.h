/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel, CAReplicatorLayer, CALayer;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView  {
    BOOL _animationsAreValid;
    CALayer *_replicatorContainer;
    CAReplicatorLayer *_replicatorLayer;
    CALayer *_seed;
    BOOL _hasFinishedRevealing;
    UILabel *_textLabel;
    BOOL _areAnimationsValid;
    float _currentPopStiffness;
}

@property(readonly) UILabel * textLabel;
@property float currentPopStiffness;
@property BOOL areAnimationsValid;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)style;
- (void)dealloc;
- (float)currentPopStiffness;
- (id)_springAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)_goAway;
- (id)_goingAwayAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 beginTime:(double)arg4 duration:(double)arg5;
- (id)_tickAnimation;
- (void)_tick;
- (id)_instanceAlphaOffsetAnimation;
- (id)_spinningAnimation;
- (id)_revealingFadeAnimation;
- (id)_revealingAnimation;
- (void)_reveal;
- (id)_effectiveTintColorWithAlpha:(float)arg1;
- (void)_spin;
- (void)_resetToRevealingState;
- (void)_updateTimeOffsetOfRelevantLayers;
- (BOOL)areAnimationsValid;
- (double)_currentTimeOffset;
- (void)_snappingMagic;
- (void)setAreAnimationsValid:(BOOL)arg1;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setCurrentPopStiffness:(float)arg1;
- (float)maximumSnappingHeight;
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (id)attributedTitle;
- (id)_effectiveTintColor;
- (id)textLabel;
- (void)setTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)layoutSubviews;

@end