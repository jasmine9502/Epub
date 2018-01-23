//
//  ViewController.h
//  forTest
//
//  Created by 张玥 on 2018/1/22.
//  Copyright © 2018年 张玥. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AlertZ.h"
@interface ViewController : UIViewController<AlertZDelegate>

@property (nonatomic, strong)AlertZ *alertView;
@end

