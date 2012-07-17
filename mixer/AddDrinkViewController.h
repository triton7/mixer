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
-(IBAction)save22:(id)sender;
-(IBAction)cancel:(id)sender;
- (void) keyboardDidShow: (NSNotification*) info;
- (void) keyboardDidHide: (NSNotification*) info;
@end
