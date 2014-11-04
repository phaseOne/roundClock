//
//  roundClockPlugIn.h
//  roundClock
//
//  Created by Evan Bovie on 10/20/14.
//  Copyright (c) 2014 Evan Bovie. All rights reserved.
//

#import <Quartz/Quartz.h>

@interface roundClockPlugIn : QCPlugIn

// Declare here the properties to be used as input and output ports for the plug-in e.g.
//@property double inputFoo;
//@property (copy) NSString* outputBar;

@property(assign) NSString* inputString;
@property(assign) NSString* outputString;

@end
