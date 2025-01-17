//
//  MakeBetsViewController.h
//  Slamble
//
//  Created by Claire Opila on 10/5/15.
//  Copyright © 2015 Praveen Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MakeBetsViewController : UIViewController <UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *sleepHoursForBet;
@property (strong, nonatomic) IBOutlet UITextField *usernameForBet;
@property (strong, nonatomic) NSString *currentUserName;
@property (strong, nonatomic) NSArray  *sleeperInfoArr;
@property (strong, nonatomic) NSString *sleeperId;
@property (strong, nonatomic) NSString *currentUserFirstName;
@property (strong, nonatomic) NSString *currentUserLastName;

+(void) make:(NSString *)betterUsername bet:(NSString *) sleeperUsername withBetTime:(NSString *) hoursBet;
+(BOOL) test:(NSString *)betterUsername bet:(NSString *) sleeperUsername logic:(NSString *) hoursBet inClass:(NSString *)betClass;
@end
