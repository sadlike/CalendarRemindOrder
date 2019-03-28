//
//  DDDatabaseManager.h
//  DianDian
//
//  Created by M Jiang on 2017/10/9.
//  Copyright © 2017年 深圳众联商务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

//#define DatabaseManager [DDDatabaseManager shared]
@interface DDDatabaseManager : NSObject

+ (instancetype)shared;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@end
extern DDDatabaseManager *_ddDataManagerinstance;
