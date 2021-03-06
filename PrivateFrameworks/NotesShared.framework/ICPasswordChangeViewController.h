/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate> {
    UIBarButtonItem *_cancelButton;
    id /* block */ _completionHandler;
    NSLayoutConstraint *_disclaimerHeightConstraint;
    ICLearnMoreTextView *_disclaimerLabel;
    UIBarButtonItem *_doneButton;
    UILabel *_headerLabel;
    UILabel *_hintLabel;
    UITextField *_hintTextField;
    int _incorrectPasswordAttempts;
    BOOL _isInSettings;
    BOOL _isSetupForChangePassword;
    BOOL _isSetupForInitialPassword;
    NSLayoutConstraint *_oldPasswordHeightConstraint;
    UILabel *_oldPasswordLabel;
    UITextField *_oldPasswordTextField;
    NSArray *_orderedTextFields;
    UILabel *_passwordLabel;
    UITextField *_passwordTextField;
    ICPasswordUtilities *_passwordUtilities;
    UIScrollView *_scrollView;
    ICScrollViewKeyboardResizer *_scrollViewResizer;
    UIView *_touchIDContainer;
    NSLayoutConstraint *_touchIDZeroHeightConstraint;
    UISwitch *_useTouchIDSwitch;
    UILabel *_verifyLabel;
    UITextField *_verifyTextField;
}

@property (nonatomic) UIBarButtonItem *cancelButton;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSLayoutConstraint *disclaimerHeightConstraint;
@property (nonatomic) ICLearnMoreTextView *disclaimerLabel;
@property (nonatomic) UIBarButtonItem *doneButton;
@property (readonly) unsigned int hash;
@property (nonatomic) UILabel *headerLabel;
@property (nonatomic) UILabel *hintLabel;
@property (nonatomic) UITextField *hintTextField;
@property (nonatomic) int incorrectPasswordAttempts;
@property (nonatomic) BOOL isInSettings;
@property (nonatomic) BOOL isSetupForChangePassword;
@property (nonatomic, readonly) BOOL isSetupForInitialPassword;
@property (nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint;
@property (nonatomic) UILabel *oldPasswordLabel;
@property (nonatomic) UITextField *oldPasswordTextField;
@property (nonatomic, retain) NSArray *orderedTextFields;
@property (nonatomic, readonly) BOOL passwordAndVerifyTextFieldsMatch;
@property (nonatomic) UILabel *passwordLabel;
@property (nonatomic) UITextField *passwordTextField;
@property (nonatomic, retain) ICPasswordUtilities *passwordUtilities;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, retain) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (readonly) Class superclass;
@property (nonatomic) UIView *touchIDContainer;
@property (nonatomic) NSLayoutConstraint *touchIDZeroHeightConstraint;
@property (nonatomic) UISwitch *useTouchIDSwitch;
@property (nonatomic) UILabel *verifyLabel;
@property (nonatomic) UITextField *verifyTextField;

- (void).cxx_destruct;
- (id)cancelButton;
- (void)cancelButtonPressed:(id)arg1;
- (id /* block */)completionHandler;
- (float)consumedBottomAreaForResizer:(id)arg1;
- (void)dealloc;
- (id)disclaimerAttributedString;
- (id)disclaimerHeightConstraint;
- (id)disclaimerLabel;
- (id)doneButton;
- (void)doneButtonPressed:(id)arg1;
- (id)headerLabel;
- (id)hintLabel;
- (id)hintTextField;
- (int)incorrectPasswordAttempts;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isInSettings;
- (BOOL)isSetupForChangePassword;
- (BOOL)isSetupForInitialPassword;
- (id)oldPasswordHeightConstraint;
- (id)oldPasswordLabel;
- (id)oldPasswordTextField;
- (id)orderedTextFields;
- (BOOL)passwordAndVerifyTextFieldsMatch;
- (id)passwordLabel;
- (id)passwordTextField;
- (id)passwordUtilities;
- (void)resetTextFields;
- (id)scrollView;
- (id)scrollViewResizer;
- (void)setCancelButton:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDisclaimerHeightConstraint:(id)arg1;
- (void)setDisclaimerLabel:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHintLabel:(id)arg1;
- (void)setHintTextField:(id)arg1;
- (void)setIncorrectPasswordAttempts:(int)arg1;
- (void)setIsInSettings:(BOOL)arg1;
- (void)setIsSetupForChangePassword:(BOOL)arg1;
- (void)setOldPasswordHeightConstraint:(id)arg1;
- (void)setOldPasswordLabel:(id)arg1;
- (void)setOldPasswordTextField:(id)arg1;
- (void)setOrderedTextFields:(id)arg1;
- (void)setPasswordLabel:(id)arg1;
- (void)setPasswordTextField:(id)arg1;
- (void)setPasswordUtilities:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewResizer:(id)arg1;
- (void)setTouchIDContainer:(id)arg1;
- (void)setTouchIDZeroHeightConstraint:(id)arg1;
- (void)setUpForChangePassword;
- (void)setUpForInitialPassword;
- (void)setUpNavigationBar;
- (void)setUseTouchIDSwitch:(id)arg1;
- (void)setVerifyLabel:(id)arg1;
- (void)setVerifyTextField:(id)arg1;
- (void)setupAccessibility;
- (void)showEnterAPasswordAlert;
- (void)showOldPasswordIsNotCorrectAlert;
- (void)showPasswordsDoNotMatchAlert;
- (void)showSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showUnableToSetPasswordAlert;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (float)topInsetForResizer:(id)arg1;
- (id)touchIDContainer;
- (id)touchIDZeroHeightConstraint;
- (id)useTouchIDSwitch;
- (BOOL)validateInput;
- (id)verifyLabel;
- (id)verifyTextField;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
