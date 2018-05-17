# UIIndicatorView
这是一个用于viewpage的一个索引指示器

This is an index indicator for the UIViewpage.
## pod install
you can user pod install into your project. as following
``` ruby
target 'Pro' do
pod 'UIIndicatorView'
end

```



## 使用
可用于viewpage索引指标控件，可以参考下以下用法

Can be used index indicator, you can refer to the following usage.
 ### 例一
 eg:
``` oc
    UIIndicatorView *indicator = [[UIIndicatorView alloc] initUIIndicatorViewWithFrame:CGRectMake(10, 20, [UIScreen mainScreen].bounds.size.width - 40, 100) style:UIIndicatorViewDefaultStyle arrays:@[@"KESION", @"WENDYTING", @"TIPO", @"BLOW", @"SUCCESS"]];
    [self.view addSubview:indicator];
    
    
    UIIndicatorView *indicator2 = [[UIIndicatorView alloc] initUIIndicatorViewWithFrame:CGRectMake(10, 150, [UIScreen mainScreen].bounds.size.width - 40, 100) style:UIIndicatorViewLineStyle arrays:@[@"KESION", @"WENDYTING", @"TIPO", @"BLOW", @"SUCCESS"]];
    [self.view addSubview:indicator2];
```

![](https://github.com/Kesion-X/UIIndicatorView/blob/master/IMG_3443.GIF)


### 例二
eg:
``` cpp
{
    [self.indicatorView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self.addNewAttention.mas_bottom).offset(4);
        make.left.equalTo(self).offset(8);
        make.right.equalTo(self).offset(-8);
        make.height.mas_equalTo([self.indicatorView getUIHeight]);
    }];
    [_indicatorView addIndicatorItemByString:@"Tube最新内容"];
    [_indicatorView addIndicatorItemByString:@"推荐"];
    [_indicatorView addIndicatorItemByString:@"关注专题"];
    [_indicatorView addIndicatorItemByString:@"关注连载"];
    [_indicatorView addIndicatorItemByString:@"关注作者"];

    [self.indicatorView setShowIndicatorItem:0];

}
- (UIIndicatorView *)indicatorView
{
    if (!_indicatorView) {
        _indicatorView = [[UIIndicatorView alloc] initUIIndicatorViewWithIndicatorColor:kTUBEBOOK_THEME_NORMAL_COLOR font:Font(12)];
    }
    return _indicatorView;
}
```
如果你想有动画效果那么需要对UIScrollerView进行监听，且在delegate中加下面的代码

If you want to animate, you need to listen to the UIScrollerView and add the following code to the delegate.
``` cpp
#pragma mark - UIScrollViewDelegate
- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
   [self.indicatorView changeIndicatorIndexByScrollerView:scrollView];
}
```
如果你想监听当前索引的点击事件,可以使用UIIndicatorView的代理.

If you want to listen for index indicator click action, you can use the proxy for UIIndicatorView. as following
```
@protocol UIIndicatorViewDelegate <NSObject>

@optional
- (void) indicatorItemsClick:(NSUInteger)index;

@end
@interface ViewController () <UIIndicatorViewDelegate>

@end
- (void)viewDidLoad 
{
   self.indicatorView.indicatorDelegate = self;
}
```

![](https://github.com/Kesion-X/UIIndicatorView/blob/master/image2.gif)


