//
//  DetailViewController.h
//  Q
//
//  Created by Magnus on 2016-01-28.
//  Copyright © 2016 Magnus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

