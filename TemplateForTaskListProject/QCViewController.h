//
//  QCViewController.h
//  TemplateForTaskListProject
//
//  Created by Eliot Arntz on 6/19/13.
//  Copyright (c) 2013 self.edu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QCViewController : UIViewController

<UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

- (IBAction)buttonPressed:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *tasks;

@end
