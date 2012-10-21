//
//  DetailViewController.h
//  Test
//
//  Created by Toda Hiroshi on 2012/10/21.
//  Copyright (c) 2012年 Toda Hiroshi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
