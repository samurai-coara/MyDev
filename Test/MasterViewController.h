//
//  MasterViewController.h
//  Test
//
//  Created by Toda Hiroshi on 2012/10/21.
//  Copyright (c) 2012年 Toda Hiroshi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
