//
//  AddDrinkViewController.h
//  mixer
//
//  Created by Administrator on 16.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface AddDrinkViewController : DetailViewController
{
    BOOL _keyboardShown;
}

-(IBAction)save:(id)sender;
-(IBAction)cancel:(id)sender;
- (void) keyboardDidShow: (NSNotification*) notif;
- (void) keyboardDidHide: (NSNotification*) notif;
@end
