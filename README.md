# UIIndicatorView

## pod install
``` ruby
target 'Pro' do
pod 'UIIndicatorView'
end

```



## 使用
可用于viewpage索引指标控件，可以参考下以下用法

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
