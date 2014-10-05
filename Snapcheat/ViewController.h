//
//  ViewController.h
//  Snapcheat
//
//  Created by Ángel Pérez on 10/4/14.
//  Copyright (c) 2014 Angel Perez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
@interface ViewController : UIViewController

@property (strong, nonatomic) AppDelegate *delegate;

- (IBAction)loginToDropbox;
- (UIImage *)takePic;


@end
