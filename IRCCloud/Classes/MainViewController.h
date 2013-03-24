//
//  MainViewController.h
//  IRCCloud
//
//  Created by Sam Steele on 2/25/13.
//  Copyright (c) 2013 IRCCloud, Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BuffersTableView.h"
#import "UsersTableView.h"
#import "EventsTableView.h"

@interface MainViewController : UIViewController<BuffersTableViewDelegate, UIScrollViewDelegate,EventsTableViewDelegate> {
    IBOutlet BuffersTableView *_buffersView;
    IBOutlet UsersTableView *_usersView;
    IBOutlet EventsTableView *_eventsView;
    IBOutlet UIView *_contentView;
    IBOutlet UITextField *_message;
    IBOutlet UIView *_connectingView;
    IBOutlet UIProgressView *_connectingProgress;
    IBOutlet UILabel *_connectingStatus;
    IBOutlet UILabel *_connectingError;
    IBOutlet UIActivityIndicatorView *_connectingActivity;
    IBOutlet UINavigationItem *_navItem;
    Buffer *_buffer;
}
-(IBAction)sendButtonPressed:(id)sender;
-(IBAction)usersButtonPressed:(id)sender;
-(IBAction)listButtonPressed:(id)sender;
@end
