//
//  UIView+TubeFrameMargin.h
//  TubeBook_iOS
//
//  Created by 柯建芳 on 2018/1/16.
//  Copyright © 2018年 柯建芳. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (TubeFrameMargin)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat centerY;
@property (nonatomic, assign, readonly) CGFloat bottomFromSuperView;

@end
