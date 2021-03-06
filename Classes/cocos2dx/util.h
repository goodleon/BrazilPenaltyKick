//
//  util.h
//
//  Created by beckheng on 14-6-24.
//  Copyright (c) 2014年 beckheng. All rights reserved.
//

#ifndef __yaoheng_cocos2dx__util__
#define __yaoheng_cocos2dx__util__

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "cocos2d.h"

USING_NS_CC;

// 平均速度移动action
MoveTo* getAvgMoveToAction(Point orig, Point moveto, float time);
MoveTo* getAvgMoveToAction(float origx, float origy, float movetoX, float movetoY, float time);

// 添加帖动画序列
void addAnimationFrame(Vector<SpriteFrame*> &vectorFrames, Texture2D * texture2d, int frames);
// 帖动画action
Animate* getFrameAnimation(Vector<SpriteFrame*> &vectorFrames, float delayPerUnit);

SpriteFrame* getSpriteFrame(std::string file);

#endif
