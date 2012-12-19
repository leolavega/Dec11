//
//  Dec11AppDelegate.h
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import <UIKit/UIKit.h>

//UITabBarController category to set the view rotations for ios 6
@implementation UITabBarController (Background)

-(BOOL)shouldAutorotate
{
    //I don't want to support auto rotate, but you can return any value you want here
    return NO;
}

- (NSUInteger)supportedInterfaceOrientations {
    //I want to only support portrait mode
    return UIInterfaceOrientationMaskPortrait;
}

@end


@interface Dec11AppDelegate : UIResponder <UIApplicationDelegate>{
	UITabBarController *tabBarController;
	NSArray *ViewControllers;
}

@property (strong, nonatomic) UIWindow *window;

@end
