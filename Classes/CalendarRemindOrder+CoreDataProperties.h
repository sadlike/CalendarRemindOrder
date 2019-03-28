//
//  CalendarRemindOrder+CoreDataProperties.h
//  
//
//  Created by M Jiang on 2017/10/9.
//
//

#import "CalendarRemindOrder+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface CalendarRemindOrder (CoreDataProperties)

+ (NSFetchRequest<CalendarRemindOrder *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *remindOrderNo;
@property (nullable, nonatomic, retain) NSSet<CalendarRemindIde *> *calendarIdentifiers;

@end

@interface CalendarRemindOrder (CoreDataGeneratedAccessors)

- (void)addCalendarIdentifiersObject:(CalendarRemindIde *)value;
- (void)removeCalendarIdentifiersObject:(CalendarRemindIde *)value;
- (void)addCalendarIdentifiers:(NSSet<CalendarRemindIde *> *)values;
- (void)removeCalendarIdentifiers:(NSSet<CalendarRemindIde *> *)values;

@end

NS_ASSUME_NONNULL_END
