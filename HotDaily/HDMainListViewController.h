//
//  HDMainListViewController.h
//  HotDaily
//
//  Created by weizhou on 7/20/14.
//  Copyright (c) 2014 fengweizhou. All rights reserved.
//

@import UIKit;
@class HDMainListViewModel;

@interface HDMainListViewController : HDBaseTableViewController

@property (nonatomic, strong) HDMainListViewModel *viewModel;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *refreshButton;

@end
