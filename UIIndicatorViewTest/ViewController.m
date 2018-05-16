//
//  ViewController.m
//  UIIndicatorViewTest
//
//  Created by 柯建芳 on 2018/5/16.
//  Copyright © 2018年 柯建芳. All rights reserved.
//

#import "ViewController.h"
#import "UIIndicatorView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIIndicatorView *indicator = [[UIIndicatorView alloc] initUIIndicatorViewWithFrame:CGRectMake(10, 20, [UIScreen mainScreen].bounds.size.width - 40, 100) style:UIIndicatorViewDefaultStyle arrays:@[@"KESION", @"WENDYTING", @"TIPO", @"BLOW", @"SUCCESS"]];
    [self.view addSubview:indicator];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
