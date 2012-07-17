//
//  MasterViewController.h
//  mixer
//
//  Created by Administrator on 13.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;
@class AddDrinkViewController;

@interface MasterViewController : UITableViewController
{
    NSMutableArray* drinks_;
    UIBarButtonItem* addButton_;
    AddDrinkViewController* addDrinkViewController_;
    UINavigationController* addNavController_;
}

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (nonatomic, retain) NSMutableArray* drinks;

@property (nonatomic, retain) IBOutlet UIBarButtonItem* addButton;

@property (nonatomic, retain) AddDrinkViewController* addDrinkViewController;
@property (nonatomic, retain) UINavigationController* addNavController;

- (IBAction)addButtonPressed:(id)sender;


@end
