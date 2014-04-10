//
//  LTHDemoViewController.h
//  LTHPasscodeViewController
//
//  Created by Roland Leth on 9/6/13.
//  Copyright (c) 2013 Roland Leth. All rights reserved.
//

#import "LTHPasscodeViewController.h"
#import <UIKit/UIKit.h>

@interface LTHDemoViewController : UIViewController <LTHPasscodeViewControllerDelegate> {
	UIButton *_changePasscode;
	UIButton *_enablePasscode;
	UIButton *_testPasscode;
	UIButton *_turnOffPasscode;
    UILabel *_typeLabel;
    UISwitch *_typeSwitch;
}

@end
