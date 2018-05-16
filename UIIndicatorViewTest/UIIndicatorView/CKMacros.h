//
//  CKMacros.h
//  TubeBook_iOS
//
//  Created by 柯建芳 on 2018/1/13.
//  Copyright © 2018年 柯建芳. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef SCREEN_WIDTH
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#endif

#ifndef IPHONE
#define IPHONE_4_4S_SCREEN_WIDTH 320.0f
#define IPHONE_4_4S_SCREEN_HEIGHT 480.0f
#define IPHONE_5_5S_5C_SCREEN_WIDTH 320.0f
#define IPHONE_5_5S_5C_SCREEN_HEIGHT 568.0f
#define IPHONE_6_6S_7_SCREEN_WIDTH 375.0f
#define IPHONE_6_6S_7_SCREEN_HEIGHT 667.0f
#define IPHONE_6P_6SP_7P_SCREEN_WIDTH 414.0f
#define IPHONE_6P_6SP_7P_SCREEN_HEIGHT 736.0f
#define IPHONE_X_SCREEN_HEIGHT 812.0f
#endif

#ifndef CK_WIDTH
#define CK_WIDTH(w) SCREEN_WIDTH/IPHONE_6_6S_7_SCREEN_WIDTH*w
#endif

#ifndef CK_HEIGHT
#define CK_HEIGHT(h) SCREEN_HEIGHT/IPHONE_6_6S_7_SCREEN_HEIGHT*h
#endif

#define Font(x) [UIFont systemFontOfSize:x]
#define FontBold(x)  [UIFont fontWithName:@"Helvetica-Bold" size:x]
#define FontOblique(x)  [UIFont fontWithName:@"Helvetica-Oblique" size:x]

#define CKFontLarge [UIFont systemFontOfSize: 17]
#define CKTextViewFont [UIFont systemFontOfSize: 16]
#define CKFontMedium [UIFont systemFontOfSize: 15]
#define CKFontSmall [UIFont systemFontOfSize: 14]
#define CKFontSmaller [UIFont systemFontOfSize:12]
#define CKFontSmallest [UIFont systemFontOfSize:10]
#define CKTextFullScreenFont [UIFont systemFontOfSize:27]

#ifndef RGBCOLOR
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define HEXCOLOR(hexValue) [UIColor colorWithRed:((CGFloat)((hexValue & 0xFF0000) >> 16))/255.0 green:((CGFloat)((hexValue & 0xFF00) >> 8))/255.0 blue:((CGFloat)(hexValue & 0xFF))/255.0 alpha:1.0]
#define HEXACOLOR(hexValue, alphaValue) [UIColor colorWithRed:((CGFloat)((hexValue & 0xFF0000) >> 16))/255.0 green:((CGFloat)((hexValue & 0xFF00) >> 8))/255.0 blue:((CGFloat)(hexValue & 0xFF))/255.0 alpha:(alphaValue)]
#endif

#define kTEXTCOLOR HEXCOLOR(0x47525E)
#define kTEXT_ALPHA_COLOR HEXACOLOR(0x47525E,0.8)
#define kTUBEBOOK_THEME_NORMAL_COLOR HEXCOLOR(0xe74c3c)
#define kTUBEBOOK_THEME_ALPHA_COLOR HEXACOLOR(0xe74c3c,0.8)
#define kTAB_TEXT_COLOR HEXCOLOR(0xbfbfbf)
#define kNAVIGATION_COLOR HEXCOLOR(0xf8f9f9)
#define kTAG_COLOR HEXCOLOR(0xFF7043)

#define kCELL_MARGIN 16

#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define IOS8 SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")
#define IOS7 SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")
#define IOS6 SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"6.0")

#define TUBE_IS_SCREEN_5_5 (MIN(SCREEN_WIDTH, SCREEN_HEIGHT) == 414)
#define TUBE_IS_SCREEN_5_8 (MAX(SCREEN_WIDTH, SCREEN_HEIGHT) == 812)
#define TUBE_IPHONE_X_FOOTER_HEIGHT 34.0
#define TUBE_FOOTER_BAR_HEIGHT (TUBE_IS_SCREEN_5_8 ? TUBE_IPHONE_X_FOOTER_HEIGHT : 0)

@interface CKMacros : NSObject

+ (UIImage *)createImageWithColor:(UIColor*)color;

@end
