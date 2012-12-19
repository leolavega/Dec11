//
//  ViewController.h
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController{
	CADisplayLink* displayLink;
}
-(id) initWithTitle: (NSString *) t;

@end
