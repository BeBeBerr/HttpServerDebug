//
//  HSDHttpServerConnection+View.h
//  HttpServerDebug
//
//  Created by chenjun on 2017/10/30.
//  Copyright © 2017年 chenjun. All rights reserved.
//

#import "HSDHttpServerConnection.h"

@interface HSDHttpServerConnection (View)

- (NSObject<HTTPResponse> *)fetchViewDebugResponseForMethod:(NSString *)method URI:(NSString *)path;

- (NSObject<HTTPResponse> *)fetchViewDebugAPIResponsePaths:(NSArray *)paths parameters:(NSDictionary *)params;

@end