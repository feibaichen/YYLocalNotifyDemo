//
//  AppDelegate.h
//  YYLocalNotificationDemo
//
//  Created by Ryan on 2017/7/15.
//  Copyright © 2017年 Ryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

