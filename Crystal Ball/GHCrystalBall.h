//
//  GHCrystalBall.h
//  Crystal Ball
//
//  Created by George Holevas on 11/18/13.
//  Copyright (c) 2013 George Holevas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GHCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;
-(NSString*) randomPrediction;

@end
