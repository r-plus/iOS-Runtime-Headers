/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationTextInputView : UIView {
    NCNotificationAction * _action;
    UIButton * _button;
    <NCNotificationTextInputViewDelegate> * _delegate;
    UIStackView * _horizontalStack;
    UITextField * _textField;
}

@property (nonatomic, retain) NCNotificationAction *action;
@property (nonatomic, retain) UIButton *button;
@property (nonatomic) <NCNotificationTextInputViewDelegate> *delegate;
@property (nonatomic, retain) UIStackView *horizontalStack;
@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id)action;
- (bool)becomeFirstResponder;
- (id)button;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)delegate;
- (id)horizontalStack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (void)setAction:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalStack:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;

@end
