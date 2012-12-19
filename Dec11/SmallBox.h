//
//  SmallBox.h
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ViewNov15;

@interface SmallBox : UIView{
	
	int idNumber;
	UITapGestureRecognizer *tapRecognizer;
	UILabel *textBox;
	int number;
	BOOL touched;
	
}

- (id) initWithFrame:(CGRect)frame withValue:(int) value withId:(int)idValue withSuperView:(ViewNov15*) view;
- (void) addOne;
- (void) subOne;
- (int) getValue;
- (void) flipView;
- (void) resetView;

@end
