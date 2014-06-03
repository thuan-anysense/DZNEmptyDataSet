//
//  DZNTableViewDataSetProtocols.h
//  UITableView-DataSet
//
//  Created by Ignacio on 6/1/14.
//  Copyright (c) 2014 DZN Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * The object that acts as the data source of the data sets.
 * The data source must adopt the DZNTableViewDataSetSource protocol. The data source is not retained.
 *
 * @discussion All data source methods are optional. They will not be considered in the layout if they either return nil or the view controller doesn't conform to them.
 */
@protocol DZNTableViewDataSetSource <NSObject>
@required

@optional

/**
 * Asks the data source for the title of the data set.
 * The data set uses a fixed font style by default, if no attributes are set. If you want a different font style, return a attributed string.
 */
- (NSAttributedString *)titleForDataSetInTableView:(UITableView *)tableView;

/**
 * Asks the data source for the description of the data set.
 * The data set uses a fixed font style by default, if no attributes are set. If you want a different font style, return a attributed string.
 */
- (NSAttributedString *)descriptionForDataSetInTableView:(UITableView *)tableView;

/**
 * Asks the data source for the image of the data set.
 */
- (UIImage *)imageForDataSetInTableView:(UITableView *)tableView;

/**
 * Asks the data source for the button title of the data set.
 * The data set uses a fixed font style by default, if no attributes are set. If you want a different font style, return a attributed string.
 */
- (NSAttributedString *)buttonTitleForDataSetInTableView:(UITableView *)tableView;

@end


/**
 * The object that acts as the delegate of the data sets.
 * The delegate must adopt the DZNTableViewDataSetDelegate protocol. The delegate is not retained.
 * Use this delegate for receiving action callbacks.
 */
@protocol DZNTableViewDataSetDelegate <NSObject>
@required

@optional

/**
 * Tells the delegate that the data set view was tapped.
 * Use this method either to resignFirstResponder of a textfield or searchBar.
 */
- (void)tableViewDataSetDidTapView:(UITableView *)tableView;

/**
 * Tells the delegate that the option button was tapped.
 */
- (void)tableViewDataSetDidTapButton:(UITableView *)tableView;

@end