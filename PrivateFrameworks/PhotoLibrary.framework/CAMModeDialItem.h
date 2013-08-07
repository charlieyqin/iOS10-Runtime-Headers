/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, NSString, UIFont;

@interface CAMModeDialItem : UIView  {
    BOOL _selected;
    NSString *_title;
    UIFont *_font;
    UILabel *__titleLabel;
    UILabel *__selectedTitleLabel;
}

@property(getter=isSelected) BOOL selected;
@property(copy) NSString * title;
@property(retain) UIFont * font;
@property(readonly) UILabel * _titleLabel;
@property(readonly) UILabel * _selectedTitleLabel;


- (id)_selectedTitleLabel;
- (void)_commonCAMModeDialItemInitialization;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (void)dealloc;
- (id)_titleLabel;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFont:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end