//
//  BaseDataService.h
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AppDelegate.h"

@interface BaseDataService : NSObject

@property(nonatomic,retain) AppDelegate *delegate;
@property(nonatomic,retain) NSURLConnection *connection;


+(NSString *) baseAPIUrl;
-(NSString *) makeApiCall:(NSString *)parameter;
- (NSData*) converResponseToDataStream: (NSString *) response;


@end
