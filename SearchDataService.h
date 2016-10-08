//
//  SearchDataService.h
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseDataService.h"

@interface SearchDataService : BaseDataService

-(NSMutableArray *) getSearchedFilmFromAPI:(NSString *)searchParam;

@end
