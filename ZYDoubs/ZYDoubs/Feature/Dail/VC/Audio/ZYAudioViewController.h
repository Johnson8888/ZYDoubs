//
//  ZYAudioViewController.h
//  ZYDoubs
//
//  Created by Momo on 17/1/10.
//  Copyright © 2017年 Momo. All rights reserved.
//

#import "ZYBaseViewController.h"

@interface ZYAudioViewController : ZYBaseViewController
{
    NgnAVSession* audioSession;
}

@property (nonatomic,strong) NgnAVSession* audioSession;

@end
