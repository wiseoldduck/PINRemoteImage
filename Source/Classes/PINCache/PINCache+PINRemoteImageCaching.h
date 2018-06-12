//
//  PINCache+PINRemoteImageCaching.h
//  Pods
//
//  Created by Aleksei Shevchenko on 7/28/16.
//
//

#import <PINCache/PINCache.h>

#import "PINRemoteImageCaching.h"
#import "PINRemoteImageManager.h"

@interface PINCache (PINRemoteImageCaching) <PINRemoteImageTTLCaching>

@end

@interface PINRemoteImageManager (PINCache)

@property (nonatomic, nullable, readonly) PINCache <PINRemoteImageTTLCaching> *pinCache;

@end
