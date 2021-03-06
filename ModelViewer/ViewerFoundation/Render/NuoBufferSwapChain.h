//
//  NuoBufferSwapChain.h
//  ModelViewer
//
//  Created by Dong on 5/4/19.
//  Copyright © 2019 middleware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>


@protocol NuoRenderInFlight;


@interface NuoBufferSwapChain : NSObject


- (instancetype)initWithDevice:(id<MTLDevice>)device
                WithBufferSize:(size_t)size
                   withOptions:(MTLResourceOptions)options
                 withChainSize:(uint)chainSize;


- (void)updateBufferWithInFlight:(id<NuoRenderInFlight>)inFlight
                     withContent:(void*)content;

- (id<MTLBuffer>)bufferForInFlight:(id<NuoRenderInFlight>)renderpass;


@end


