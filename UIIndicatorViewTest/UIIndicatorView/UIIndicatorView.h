//
//  UIIndicatorView.h
//  TubeBook_iOS
//
//  Created by 柯建芳 on 2018/1/16.
//  Copyright © 2018年 柯建芳. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, UIIndicatorViewStyle) {
    UIIndicatorViewDefaultStyle,
    UIIndicatorViewLineStyle,
};
@protocol UIIndicatorViewDelegate <NSObject>

@optional
- (void) indicatorItemsClick:(NSUInteger)index;

@end

@interface UIIndicatorView : UIScrollView

@property (nonatomic, strong) UIView *indicatorView; // 滑块
@property (nonatomic, strong) UIColor *indicatorColor; // 滑块背景
@property (nonatomic) NSUInteger currentIndicator; // 当前滑块位置
@property (nonatomic,strong) NSMutableArray *itemArrays;
@property (nonatomic) UIIndicatorViewStyle style;
@property (nonatomic, strong) id<UIIndicatorViewDelegate> indicatorDelegate;




/**
 * @brief 使用默认颜色，默认样式，建立一个indicator，可以使用自定布局改变布局大小
 * @param font 字体大小
 */
- (instancetype)initUIIndicatorViewWithIndicatorColor:(UIColor *)indicatorColor font:(UIFont *)font;

/**
 * @brief 使用默认颜色，建立一个indicator，可以使用自定布局改变布局大小
 * @param frame 布局
 * @param style 样式
 * @param arrays 字符串数组
 */
- (instancetype)initUIIndicatorViewWithFrame:(CGRect)frame style:(UIIndicatorViewStyle)style arrays:(NSArray *)arrays;

- (instancetype)initUIIndicatorViewWithIndicatorColor:(UIColor *)indicatorColor
                                                style:(UIIndicatorViewStyle)style
                                               arrays:(NSArray *)arrays
                                                 font:(UIFont *)font
                                      textNormalColor:(UIColor *)textNormalColor
                                       textLightColor:(UIColor *)textLightColor
                                   isEnableAutoScroll:(BOOL)isEnableAutoScroll;

- (instancetype)initUIIndicatorViewWithFrame:(CGRect)frame
                              indicatorColor:(UIColor *)indicatorColor
                                       style:(UIIndicatorViewStyle)style
                                      arrays:(NSArray *)arrays
                                        font:(UIFont *)font
                             textNormalColor:(UIColor *)textNormalColor
                              textLightColor:(UIColor *)textLightColor
                          isEnableAutoScroll:(BOOL)isEnableAutoScroll;

/**
 * @brief 获取以当前字体为准的ui高
 */
- (CGFloat)getUIHeight;

/**
 * @brief 获取当前控件的内容宽度
 */
- (CGFloat)getUIWidth;

/**
 * @brief 添加一个tab
 * @param item indicator名
 */
- (void)addIndicatorItemByString:(NSString *)item;

/**
 * @brief 展现某个位置的indicator
 * @param index 索引位置
 */
- (void)setShowIndicatorItem:(NSUInteger)index;

/**
 * @brief 如果你使用UIViewPage,可以将此方法放在 delegate的 scrollViewDidScroll:(UIScrollView *)scrollView 中进行监听
 * @param scrollView scrollViewDidScroll:(UIScrollView *)scrollView
 */
- (void)changeIndicatorIndexByScrollerView:(UIScrollView *)scrollView;


- (void)changeIndicatorViewSize:(BOOL)isRight scale:(CGFloat)scale;

@end
