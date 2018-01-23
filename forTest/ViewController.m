//
//  ViewController.m
//  forTest
//
//  Created by 张玥 on 2018/1/22.
//  Copyright © 2018年 张玥. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIButton *tapButton;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)tap:(id)sender {
    _alertView=[[AlertZ alloc]initWithTitle:@"come on" message:@"welcome to the new land" delegate:self cancelButtonTitle:@"Cancel" otherButtonTitle:@"Ok"];
    [_alertView show];

}
-(void)alertView:(AlertZ *)alertView clickedButtonAtIndex:(NSUInteger)buttonIndex
{
    switch (buttonIndex) {
        case 0:
            NSLog(@"cancel:%ld",buttonIndex);
            break;
        case 1:
            NSLog(@"ok:%ld",buttonIndex);
            break;
        default:
            break;
    }
}


@end
