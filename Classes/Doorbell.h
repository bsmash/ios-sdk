#import <UIKit/UIKit.h>

@class DoorbellDialog;

typedef void (^DoorbellCompletionBlock)(NSError *error, BOOL isCancelled);

@interface Doorbell : NSObject

@property (strong, nonatomic)   NSString *apiKey;
@property (strong, nonatomic)   NSString *appID;
@property (strong, nonatomic)   NSString *email;
@property (strong, nonatomic)   NSString *name;
@property (assign, nonatomic)   BOOL showEmail;
@property (assign, nonatomic)   BOOL showPoweredBy;
@property (assign, nonatomic)   CGFloat verticleOffset;
@property (assign, nonatomic)   NSInteger viewTag;
@property (strong, nonatomic)   UIColor *brandColor;
@property (strong, nonatomic)   DoorbellDialog *dialog;

- (id)initWithApiKey:(NSString *)apiKey appId:(NSString *)appID;

+ (Doorbell*)doorbellWithApiKey:(NSString *)apiKey appId:(NSString *)appID;

- (void)showFeedbackDialogInViewController:(UIViewController *)vc completion:(DoorbellCompletionBlock)completion;

- (void)addPropertyWithName:(NSString*)name AndValue:(id)value;

- (void)addImage:(UIImage *)image WithName:(NSString *)name;

@end
