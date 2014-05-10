//
//  StopInRouteTableViewCell.h
//  Transport
//
//  Created by Chris Vanderschuere on 4/24/14.
//  Copyright (c) 2014 OSU App Club. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StopInRouteTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *stopName;
@property (weak, nonatomic) IBOutlet UILabel *stopID;
@property (weak, nonatomic) IBOutlet UILabel *stopOrder;

@end
