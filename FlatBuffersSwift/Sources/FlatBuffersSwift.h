//
//  FlatBuffersSwift.h
//  FlatBuffersSwift
//
//  Created by Maxim Zaks on 29.12.15.
//  Copyright © 2015 maxim.zaks. All rights reserved.
//

#include <TargetConditionals.h>

#if TARGET_OS_MAC && !TARGET_OS_IOS && !TARGET_OS_TV
#import <Cocoa/Cocoa.h>
#else
#import <Foundation/Foundation.h>
#endif

//! Project version number for FlatBuffersSwift.
FOUNDATION_EXPORT double FlatBuffersSwiftVersionNumber;

//! Project version string for FlatBuffersSwift.
FOUNDATION_EXPORT const unsigned char FlatBuffersSwiftVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FlatBuffersSwift/PublicHeader.h>
