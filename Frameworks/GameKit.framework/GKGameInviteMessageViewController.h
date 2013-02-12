/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKGameInviteMessageViewControllerDelegate>, NSArray;

@interface GKGameInviteMessageViewController : GKAbstractComposeController {
    BOOL _alreadySetUp;
    <GKGameInviteMessageViewControllerDelegate> *_delegate;
    BOOL _lockedToPortrait;
    NSArray *_players;
}

@property <GKGameInviteMessageViewControllerDelegate> *delegate;
@property(retain) NSArray *players;
@property(getter=isLockedToPortrait) BOOL lockedToPortrait;

- (void)dealloc;
- (id)delegate;
- (void)done;
- (BOOL)isLockedToPortrait;
- (void)loadView;
- (id)players;
- (void)setDelegate:(id)arg1;
- (void)setLockedToPortrait:(BOOL)arg1;
- (void)setPlayers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end