//
//  AppDelegate.h
//  DPSExpress
//
//  Created by ABN on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, NSURLConnectionDelegate>
{
    NSMutableData *webData;

}

@property (strong, nonatomic) UIWindow *window;

@end
