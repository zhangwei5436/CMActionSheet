//
//  zwViewController.m
//  CMActionSheet
//
//  Created by zhangwei5436 on 03/05/2018.
//  Copyright (c) 2018 zhangwei5436. All rights reserved.
//

#import "zwViewController.h"
#import "CMActionSheet.h"

@interface zwViewController ()<CMActionSheetDelegate>

@end

@implementation zwViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIButton * butt = [UIButton buttonWithType:UIButtonTypeCustom];
    butt.frame = CGRectMake(30, 80, 50, 50);
    [butt addTarget:self action:@selector(click) forControlEvents:UIControlEventTouchUpInside];
    butt.backgroundColor =[UIColor redColor];
    [self.view addSubview:butt];
}

-(void)click{
    
    CMActionSheet *sheet = [[CMActionSheet alloc]initWithTitle:nil delegate:self cancelButtonTitle:@"取消"  otherButtonTitles:@"拍照",@"从相册中选择", nil];
    [sheet setCancelButtonTitleColor:[UIColor blackColor] bgColor:nil fontSize:14];
    [sheet setButtonTitleColor:[UIColor blackColor] bgColor:nil fontSize:14 atIndex:0];
    [sheet setButtonTitleColor:[UIColor blackColor] bgColor:nil fontSize:14 atIndex:1];
    [sheet show];
}

#pragma mark CMActionSheetDelegate
- (void)actionSheet:(CMActionSheet *)sheet clickedButtonIndex:(NSInteger)buttonIndex
{
    if(buttonIndex == 0){
        //打开相机
        
    }else if (buttonIndex == 1){
        //打开相册
        
    }
}

@end
