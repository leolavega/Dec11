//
//  ViewNov29.h
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ColorContainer;

@interface ViewNov29 : UIView{
	
	UILabel *label;
	ColorContainer *container;
	UILabel *rgbInfo;
	UISlider *redSlider;
	UISlider *blueSlider;
	UISlider *greenSlider;
	UIButton *button;
	
}

-(void)resetColor;

@end
