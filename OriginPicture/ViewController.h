//
//  ViewController.h
//  OriginPicture
//
//  Created by shiyuan on 16/6/27.
//  Copyright © 2016年 shiyuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TZImagePickerController.h"

@interface ViewController : UIViewController <TZImagePickerControllerDelegate>

@property (strong, nonatomic) UIImagePickerController *picker;

- (void)simplyShare:(NSArray<UIImage *> *)photos array:(NSArray *)assets  photo:(BOOL) isSelectOriginalPhoto;
- (void)pushImagePickerController;
- (void)showShareActionSheet:(UIView *)view photo:(NSArray<UIImage *> *)photos array:(NSArray *)assets  photo:(BOOL) isSelectOriginalPhoto;
@end

