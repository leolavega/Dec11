//
//  ViewNov1.h
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewNov1 : UIView{
	int hour, minute, second;
}


//this method will draw the contents of the provided parameters on the screen
- (void)drawLineWithCGContextRef:(CGContextRef)c CGMutPathRef:(CGMutablePathRef)p lineWidth:(CGFloat)l;

//This method will set the hour,minute,second int values to the current time provided by the device
- (void)currentTime;


@end
