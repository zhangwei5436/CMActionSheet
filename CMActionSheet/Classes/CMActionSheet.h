//
//  CMActionSheet.h
//  zwwTestDemo_Example
//
//  Created by 张威 on 2018/2/26.
//  Copyright © 2018年 zhangwei5436. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CMActionSheetDelegate;

@interface CMActionSheet : UIView

@property (weak, nonatomic) id<CMActionSheetDelegate> delegate;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *cancelButtonTitle;

- (id)initWithTitle:(NSString *)title delegate:(id)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

// Show the action sheet at current window
- (void)show;

// Hide the action sheeet.
- (void)hide;

// Set the text Color  and the font size of title. Default the text color is black, and font size is 15
- (void)setTitleColor:(UIColor *)color fontSize:(CGFloat)size;

// Set the title color, background color and font size of button at index. Default the ttitle color is black, background color is white and font size is 14.
- (void)setButtonTitleColor:(UIColor *)color bgColor:(UIColor *)bgcolor fontSize:(CGFloat)size atIndex:(int)index;

// Set the title color, background color and font size of cancel button. Default the ttitle color is black, background color is white and font size is 14.
- (void)setCancelButtonTitleColor:(UIColor *)color bgColor:(UIColor *)bgcolor fontSize:(CGFloat)size;

@end


@protocol CMActionSheetDelegate <NSObject>

@optional

- (void)actionSheetCancel:(CMActionSheet *)actionSheet;
- (void)actionSheet:(CMActionSheet *)sheet clickedButtonIndex:(NSInteger)buttonIndex;

@end
