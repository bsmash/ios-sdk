#import <UIKit/UIKit.h>

@interface DoorbellDialog : UIView <UITextViewDelegate, UITextFieldDelegate>

@property (readonly, nonatomic) NSString *bodyText;
@property (strong, nonatomic) NSString *email;
@property (assign, nonatomic)   BOOL showEmail;
@property (assign, nonatomic)   BOOL showPoweredBy;
@property (assign, nonatomic)   BOOL sending;
@property (assign, nonatomic)   CGFloat verticleOffset;

@property (strong, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) UIView *boxView;
@property (strong, nonatomic) UITextView *bodyView;
@property (strong, nonatomic) UITextField *emailField;
@property (strong, nonatomic) UIButton *cancelButton;
@property (strong, nonatomic) UIButton *sendButton;
@property (strong, nonatomic) UIView *poweredBy;
@property (strong, nonatomic) UILabel *bodyPlaceHolderLabel;
@property (strong, nonatomic) UILabel *sendingLabel;

@property (strong, nonatomic) id delegate;

- (id)initWithViewController:(UIViewController *)vc;

- (void)highlightEmailEmpty;
- (void)highlightEmailInvalid;
- (void)highlightMessageEmpty;

@end


@protocol DoorbellDialogDelegate <NSObject>

- (void)dialogDidCancel:(DoorbellDialog*)dialog;
- (void)dialogDidSend:(DoorbellDialog*)dialog;

@end
