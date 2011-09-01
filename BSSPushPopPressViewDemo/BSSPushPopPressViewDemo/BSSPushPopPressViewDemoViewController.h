//
//  BSSPushPopPressViewDemoViewController.h
//
//  Copyright 2011 Blacksmith Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BSSPushPopPressView.h"

@interface BSSPushPopPressViewDemoViewController : UIViewController<BSSPushPopPressViewDelegate> {
    BSSPushPopPressView* pushPopPressView;
    UIButton* playPauseButton;
}

@property (nonatomic, retain) UIView* contentView;
@end