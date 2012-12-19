//
//  ViewController.m
//  Dec11
//
//  Created by Leonardo Lavega on 12/19/12.
//  Copyright (c) 2012 Leonardo Lavega. All rights reserved.
//

#import "ViewController.h"
#import "ViewOct25.h"
#import "ViewNov1.h"
#import "ViewNov15.h"
#import "ViewNov29.h"
#import "ViewDec6.h"


@interface ViewController ()

@end

@implementation ViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (id) initWithTitle: (NSString *) t {
    self = [super initWithNibName:nil bundle:nil];
    if (self) {
		CGRect frame = [UIScreen mainScreen].applicationFrame;
		self.title = t;
		
		if([t isEqual:@"Oct25"]){
			self.view = [[ViewOct25 alloc] initWithFrame:frame];
			return self;
		}
		if ([t isEqual:@"Nov1"]) {
			self.view = [[ViewNov1 alloc] initWithFrame:frame];
			return self;
		}
		if ([t isEqual:@"Nov15"]) {
			self.view = [[ViewNov15 alloc] initWithFrame:frame];
			return self;
		}
		if ([t isEqual:@"Nov29"]) {
			self.view = [[ViewNov29 alloc] initWithFrame:frame];
			return self;
		}
		
	}
    return self;

}


- (void)viewDidLoad
{
    [super viewDidLoad];
	if([self.title isEqual:@"Dec6"]){
		
		CGRect frame = [UIScreen mainScreen].applicationFrame;
		self.view = [[ViewDec6 alloc] initWithFrame:frame withController:self];
		
		displayLink = [CADisplayLink displayLinkWithTarget: self.view selector: @selector(move:)];
		
		//Call move: every time the display is refreshed.
		displayLink.frameInterval = 1;
		
		NSRunLoop *loop = [NSRunLoop currentRunLoop];
		[displayLink addToRunLoop: loop forMode: NSDefaultRunLoopMode];
	}
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
