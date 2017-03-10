//
//  AppDelegate.h
//  Google Sign In Test
//
//  Created by Austin Lubetkin on 3/10/17.
//  Copyright © 2017 Austin Lubetkin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Google/SignIn.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, GIDSignInDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

