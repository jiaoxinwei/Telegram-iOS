//
//  ASImageNode+tvOS.h
//  AsyncDisplayKit
//
//  Created by Aaron Schubert on 21/04/2016.
//  Copyright © 2016 Facebook. All rights reserved.
//

#if TARGET_OS_TV
#import <AsyncDisplayKit/AsyncDisplayKit.h>

@interface ASImageNode (tvOS)
@property (nonatomic) BOOL isDefaultState;
@end
#endif
