//
//  CalendarRemindOrder+CoreDataProperties.m
//  
//
//  Created by M Jiang on 2017/10/9.
//
//

#import "CalendarRemindOrder+CoreDataProperties.h"

@implementation CalendarRemindOrder (CoreDataProperties)

+ (NSFetchRequest<CalendarRemindOrder *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"CalendarRemindOrder"];
}

@dynamic remindOrderNo;
@dynamic calendarIdentifiers;

@end
