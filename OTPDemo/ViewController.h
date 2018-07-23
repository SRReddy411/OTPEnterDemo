//
//  ViewController.h
//  OTPDemo
//
//  Created by volive solutions on 23/07/18.
//  Copyright © 2018 volive solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *firstTF;
@property (strong, nonatomic) IBOutlet UITextField *secondTF;
@property (strong, nonatomic) IBOutlet UITextField *thirdTF;

@property (strong, nonatomic) IBOutlet UITextField *fourthTF;

@end

