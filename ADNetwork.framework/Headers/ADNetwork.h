//
//  ADNetwork.h
//  ADNetwork
//
//  Created by KTW on 01/07/2019.
//  Copyright © 2019 ADPlatform. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ADNetwork.
FOUNDATION_EXPORT double ADNetworkVersionNumber;

//! Project version string for ADNetwork.
FOUNDATION_EXPORT const unsigned char ADNetworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ADNetwork/PublicHeader.h>


#import <ADNetwork/ADConfig.h>
#import <ADNetwork/ADNetworkViewController.h>

@interface ADNetwork : NSObject

+ (void)config:(ADConfig *_Nonnull)config;

+ (void)getBadgeType:(void (^ _Nonnull)(NSString * _Nullable badgeType))completionHandler;

@end
