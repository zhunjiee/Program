//
//  MBProgressHUD+XBLoading.h
//  XBLoadingKit
//
//  Created by jianwen ning on 16/04/2019.
//  Copyright © 2019 jianwen ning. All rights reserved.
//  对MBProgressHUD的一个简单封装，主要是满足常用的显示成功、出错、失败，loading加载提示，与及长文本提示信息

#import "MBProgressHUD.h"

NS_ASSUME_NONNULL_BEGIN

@interface MBProgressHUD (XBLoading)

+ (void)showSuccess:(NSString *)success toView:(UIView *)view delay:(NSTimeInterval)delay;
+ (void)showError:(NSString *)error toView:(UIView *)view delay:(NSTimeInterval)delay;
+ (void)showWarning:(NSString *)warning toView:(UIView *)view delay:(NSTimeInterval)delay;
// 只显示文字,不带菊花
+ (void)showText:(NSString *)text toView:(UIView *)view delay:(NSTimeInterval)delay;

+ (void)showSuccess:(NSString *)success toView:(UIView *)view;
+ (void)showError:(NSString *)error toView:(UIView *)view;
+ (void)showWarning:(NSString *)warning toView:(UIView *)view;
+ (void)showText:(NSString *)text toView:(UIView *)view;

// 显示转圈菊花
+ (MBProgressHUD *)showMessage:(NSString *)message toView:(UIView *)view;

//显示长文本信息
+ (void)showDetailMessage:(NSString *)message toView:(UIView *)view delay:(NSTimeInterval)delay;

// 隐藏
+ (void)hideHUD;

@end

NS_ASSUME_NONNULL_END
