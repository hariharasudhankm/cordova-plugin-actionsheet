#import <Cordova/CDVPlugin.h>

@interface ActionSheet :CDVPlugin<UIActionSheetDelegate>

@property (nonatomic, copy) NSString *callbackId;
// TODO remove one day, as it's deprecated since iOS 8
@property (nonatomic, retain) UIActionSheet *actionSheet;
// make alertController local instance and don't dealloc explictly.
//@property (nonatomic, retain) UIAlertController *alertController;

- (void) show:(CDVInvokedUrlCommand*)command;
- (void) hide:(CDVInvokedUrlCommand*)command;

@end
