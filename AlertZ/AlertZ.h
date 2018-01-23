//
//  AlertZ.h
//  forTest
//
//  Created by 张玥 on 2018/1/22.
//  Copyright © 2018年 张玥. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AlertZ;

@protocol AlertZDelegate <NSObject>
-(void)alertView:(AlertZ *)alertView clickedButtonAtIndex:(NSUInteger)buttonIndex;

@end

@interface AlertZ : UIView

@property (weak,nonatomic) id<AlertZDelegate>delegate;

-(instancetype)initWithTitle:title message:messge delegate:delegate cancelButtonTitle:cancelTitle otherButtonTitle:otherTitle;

-(void)show;

@end
