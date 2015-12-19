//
//  Coin+CoreDataProperties.h
//  Rate
//
//  Created by Summer. on 15/12/18.
//  Copyright © 2015年 Summer. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Coin.h"

NS_ASSUME_NONNULL_BEGIN

@interface Coin (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *code;
@property (nonatomic) double rate;
@property (nullable, nonatomic, retain) NSString *image;
@property (nonatomic) BOOL show;

@end

NS_ASSUME_NONNULL_END
