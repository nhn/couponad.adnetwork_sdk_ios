//
//  ADConfig.h
//  ADNetwork
//
//  Created by KTW on 01/07/2019.
//  Copyright © 2019 ADPlatform. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ADConfig : NSObject

@property (nonatomic, readonly)NSString *pubID;

- (instancetype)initWith:(NSString *)pubID NS_DESIGNATED_INITIALIZER;

@end
