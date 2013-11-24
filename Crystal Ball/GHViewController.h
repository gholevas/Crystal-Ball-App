//
//  GHViewController.h
//  Crystal Ball
//
//  Created by George Holevas on 11/17/13.
//  Copyright (c) 2013 George Holevas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GHCrystalBall;

@interface GHViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) GHCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void)makePrediction;
-(void)killPrecition;

@end
