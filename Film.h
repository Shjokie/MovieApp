//
//  Film.h
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Film : NSObject
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *year;
@property (strong, nonatomic) NSString *imdbID;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *poster;

@property (strong, nonatomic) NSMutableArray *films;

-(instancetype) initWithAttributes: (NSDictionary *)attributes;

@end
