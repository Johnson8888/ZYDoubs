//
//  ZYVideoViewController.h
//  ZYDoubs
//
//  Created by Momo on 17/1/10.
//  Copyright © 2017年 Momo. All rights reserved.
//

#import "ZYBaseViewController.h"

@interface ZYVideoViewController : ZYBaseViewController
{
    NgnAVSession* videoSession;
    BOOL sendingVideo;
}

@property (nonatomic,strong) NgnAVSession* videoSession;

@end
