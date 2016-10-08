//
//  PreviewDataService.h
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "BaseDataService.h"
#import "PreviewFilm.h"

@interface PreviewDataService : BaseDataService
-(PreviewFilm *) getFilmPreviewFromAPI:(NSString *)urlParameter;

@end
