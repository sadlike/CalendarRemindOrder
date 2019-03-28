//
//  CalendarRemindIde+CoreDataProperties.h
//  
//
//  Created by M Jiang on 2017/10/9.
//
//

#import "CalendarRemindIde+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface CalendarRemindIde (CoreDataProperties)

+ (NSFetchRequest<CalendarRemindIde *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *calendarIdentifier;

@end

NS_ASSUME_NONNULL_END
