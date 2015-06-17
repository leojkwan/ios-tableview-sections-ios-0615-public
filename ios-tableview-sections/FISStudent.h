//
//  FISStudent.h
//  ios-tableview-sections
//
//  Created by Leo Kwan on 6/17/15.
//  Copyright (c) 2015 The Flatiron School. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISStudent : NSObject

@property (nonatomic, strong) NSArray *favoriteThings;
@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) NSString *favoriteFood;
@property (nonatomic, strong) NSString *favoriteColor;
@property (nonatomic, strong) NSString *favoritemMusicalArtist;
@property (nonatomic, strong) NSString *favoriteGame;

//-(instancetype) initWithFavoriteFood:(NSString *)favoriteFood favoriteColor:(NSString *)favoriteColor favoritemMusicalArtist:(NSString *)favoritemMusicalArtist favoriteGame(NSString *) favoriteGame;

@end
