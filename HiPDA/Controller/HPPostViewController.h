//
//  HPPostViewController.h
//  HiPDA
//
//  Created by wujichao on 14-2-27.
//  Copyright (c) 2014年 wujichao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HPThread.h"
#import "HPViewController.h"
#import <WebKit/WebKit.h>
@class HPThread;

@interface HPPostViewController : HPViewController

@property (nonatomic, readonly, strong) WKWebView *webView;
@property (nonatomic, strong) HPThread *thread;

- (id)initWithThread:(HPThread *)thread;

- (id)initWithThread:(HPThread *)thread
                page:(NSInteger)page
       forceFullPage:(BOOL)forceFullPage;

- (id)initWithThread:(HPThread *)thread
            find_pid:(NSInteger)find_pid;
@end
