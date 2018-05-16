//
//  NSString+StringKit.h
//  TubeBook_iOS
//
//  Created by 柯建芳 on 2018/1/16.
//  Copyright © 2018年 柯建芳. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Foundation/NSString.h>
#import <CoreGraphics/CGGeometry.h>
#import <UIKit/UIKitDefines.h>
#import <UIKit/NSAttributedString.h>


@class NSStringDrawingContext;

@interface NSString (StringKit)

+ (CGRect)sizeWithAttributesCGRect:(UIFont *)font;
+ (CGSize)getSizeWithAttributes:(NSString *)content font:(UIFont *)font;
+ (CGSize)getSizeWithAttributes:(NSString *)content width:(CGFloat)width font:(UIFont *)font;

@end
