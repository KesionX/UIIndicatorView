# UIIndicatorView

## pod install
``` ruby
target 'Pro' do
pod 'UIIndicatorView'
end

```



## 使用
可用于viewpage索引指标控件，可以参考下以下用法
 ### 例一
``` oc
    UIIndicatorView *indicator = [[UIIndicatorView alloc] initUIIndicatorViewWithFrame:CGRectMake(10, 20, [UIScreen mainScreen].bounds.size.width - 40, 100) style:UIIndicatorViewDefaultStyle arrays:@[@"KESION", @"WENDYTING", @"TIPO", @"BLOW", @"SUCCESS"]];
    [self.view addSubview:indicator];
    
    
    UIIndicatorView *indicator2 = [[UIIndicatorView alloc] initUIIndicatorViewWithFrame:CGRectMake(10, 150, [UIScreen mainScreen].bounds.size.width - 40, 100) style:UIIndicatorViewLineStyle arrays:@[@"KESION", @"WENDYTING", @"TIPO", @"BLOW", @"SUCCESS"]];
    [self.view addSubview:indicator2];
```

![](https://github.com/Kesion-X/UIIndicatorView/blob/master/IMG_3443.GIF)


### 例二

``` cpp

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

- (UIIndicatorView *)indicatorView
{
    if (!_indicatorView) {
        _indicatorView = [[UIIndicatorView alloc] initUIIndicatorViewWithIndicatorColor:kTUBEBOOK_THEME_NORMAL_COLOR font:Font(12)];
    }
    return _indicatorView;
}


```




