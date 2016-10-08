//
//  SearchDataService.m
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import "SearchDataService.h"
#import "Film.h"

@implementation SearchDataService
@synthesize delegate=_delegate;

-(NSMutableArray *) getSearchedFilmFromAPI:(NSString *)searchParam{
    NSMutableArray *masterList = [[NSMutableArray alloc] init];
    NSString *s_response = [self makeApiCall:searchParam];
    NSError __autoreleasing **error = nil;
    
    NSData *dataStream = [self converResponseToDataStream:s_response];
    
    if (dataStream != nil) {
        NSDictionary *s_dict = [NSJSONSerialization JSONObjectWithData:dataStream options:kNilOptions error:error];
        
        NSArray *searchResult = [s_dict objectForKeyedSubscript:@"Search"];
        
        if ([searchResult count] > 0) {
            for (NSDictionary *movie in searchResult) {
                Film * i_film = [[Film alloc] initWithAttributes:movie];
                
                [masterList addObject:i_film];
                
            }
        }
        
    }
    
    return masterList;
}



/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
