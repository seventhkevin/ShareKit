//
//  SHKFacebookForm.h
//  ShareKit
//

#import <UIKit/UIKit.h>


@interface SHKFacebookForm : UIViewController <UITextViewDelegate>
{
	id delegate;
	UITextView *textView;
}

@property (nonatomic, retain) id delegate;
@property (nonatomic, retain) UITextView *textView;

- (void)save;
- (void)keyboardWillShow:(NSNotification *)notification;

@end
