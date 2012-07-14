//
//  MasterViewController.h
//  mixer
//
//  Created by Administrator on 13.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController
{
    NSMutableArray* drinks_;
}

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (nonatomic, retain) NSMutableArray* drinks;

@end
