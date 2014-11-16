//
//  Creature.h
//  GameOfLife
//
//  Created by Toni Mäki-Leppilampi on 16.11.2014.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

@property (nonatomic, assign) BOOL isAlive;
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
