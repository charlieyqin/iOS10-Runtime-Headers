/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView * _focusedFloatingContentView;
}

- (void).cxx_destruct;
- (id)_currentImage;
- (void)_ensureFocusedFloatingContentView;
- (bool)_shouldHandlePressEvent:(id)arg1;
- (void)_updateFloatingViewForCurrentTraits;
- (void)focusedViewDidChange;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsImageShadow;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end