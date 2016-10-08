//
//  PreviewDataService.m
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import "PreviewDataService.h"

@implementation PreviewDataService

-(PreviewFilm *) getFilmPreviewFromAPI:(NSString *)urlParameter{
    PreviewFilm *previewDetails;
    
    
    NSString *s_response = [self makeApiCall:urlParameter];
    NSError __autoreleasing **error = nil;
    
    NSData *dataStream = [self converResponseToDataStream:s_response];
    
    
    if (dataStream != nil) {
        NSDictionary *s_dict = [NSJSONSerialization JSONObjectWithData:dataStream options:kNilOptions error:error];
        
        previewDetails = [[PreviewFilm alloc] initWithAttributes:s_dict];
        
    }
    return previewDetails;
    
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
