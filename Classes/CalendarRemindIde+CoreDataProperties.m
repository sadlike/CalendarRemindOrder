//
//  CalendarRemindIde+CoreDataProperties.m
//  
//
//  Created by M Jiang on 2017/10/9.
//
//

#import "CalendarRemindIde+CoreDataProperties.h"

@implementation CalendarRemindIde (CoreDataProperties)

+ (NSFetchRequest<CalendarRemindIde *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"CalendarRemindIde"];
}

@dynamic calendarIdentifier;

@end
