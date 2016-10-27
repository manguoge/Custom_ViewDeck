//
//  RootViewController.h
//  ThreeViewsText
//
//  Created by lanouhn on 16/2/29.
//  Copyright © 2016年 ronghua_li. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CenterViewController;
@class RightViewController;
@class  LeftViewController;
@interface RootViewController : UIViewController

- (id)initWithCenterVC:(CenterViewController *)centerVC rightVC:(RightViewController *)rightVC leftVC:(LeftViewController *)leftVC;


@end
