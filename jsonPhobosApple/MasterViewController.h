//
//  MasterViewController.h
//  jsonPhobosApple
//
//  Created by Omnipresent on 01/04/14.
//  Copyright (c) 2014 Omnipresent. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MasterViewController : UITableViewController{
    NSMutableArray *arrData;
    UITableView *tblView;
}

@property (strong, nonatomic)IBOutlet UITableView *tblView;
@end
