//
//  SearchViewController.h
//  MovieFinal
//
//  Created by ilabafrica on 02/08/2016.
//  Copyright © 2016 Strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UIViewController
{
    NSString *noResultText;
    
}

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UITableView *myTableView;
@property(strong, nonatomic) NSMutableArray *masterFilmList;

-(void) fetchData: (NSString *) imdbID :(NSString *) title :(NSString *) type;

@end
