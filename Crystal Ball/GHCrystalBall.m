//
//  GHCrystalBall.m
//  Crystal Ball
//
//  Created by George Holevas on 11/18/13.
//  Copyright (c) 2013 George Holevas. All rights reserved.
//

#import "GHCrystalBall.h"

@implementation GHCrystalBall

-(NSArray *) predictions {
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:
                        @"It is decidedly so.",
                        @"It is certain.",
                        @"All signs say YES.",
                        @"The stars are not aligned.",
                        @"My reply is no.",
                        @"It is doubtful.",
                        @"Better not tell you now.",
                        @"Concentrate and ask again.",
                        @"Unable to answer now.",
                        nil];
    }
    return _predictions;
    
}
-(NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
