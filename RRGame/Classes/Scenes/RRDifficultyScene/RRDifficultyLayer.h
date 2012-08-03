//
//  RRDifficultyLayer.h
//  RRHeredox
//
//  Created by Rolandas Razma on 7/25/12.
//  Copyright (c) 2012 UD7. All rights reserved.
//

#import "CCLayer.h"


@interface RRDifficultyLayer : CCLayer

+ (id)layerWithGameMode:(RRGameMode)gameMode playerColor:(RRPlayerColor)playerColor;
- (id)initWithGameMode:(RRGameMode)gameMode playerColor:(RRPlayerColor)playerColor;

@end