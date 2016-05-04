//
//  DetailViewController.h
//  findaBLE
//
//  Created by Giasone on 04/05/16.
//  Copyright © 2016 Gianluca Urgese. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

