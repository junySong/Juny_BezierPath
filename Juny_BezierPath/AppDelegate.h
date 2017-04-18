//
//  AppDelegate.h
//  Juny_BezierPath
//
//  Created by sy on 2017/4/18.
//  Copyright © 2017年 Juny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end
