//
//  ViewNov15.h
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewNov15 : UIView{
	
	NSMutableArray *numbers;
	NSMutableArray *boxes;
	int idNumberBox1;
	int idNumberBox2;

}

-(void)setUpFirstBoxwithID:(int)idNumber;
-(void)setUpSecondtBoxwithID:(int)idNumber;

@end
