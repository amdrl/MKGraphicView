//
//  ViewController.m
//  Test
//
//  Created by Burn on 2020/1/3.
//  Copyright © 2020 menksoft. All rights reserved.
//

#import "ViewController.h"
#import <MKGraphicView/MKGraphicView.h>
#import <UIImageView+WebCache.h>

@interface ViewController ()<MKGraphicViewDelegate>
@property(strong,nonatomic) UIImageView *imageView;
@property(strong,nonatomic) MKGraphicView *graphicView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithRed:246.0 / 255.0 green:246.0 / 255.0 blue:246.0 / 255.0 alpha:1];
    
    self.graphicView = [[MKGraphicView alloc]initWithFrame:CGRectMake(0, 44, self.view.bounds.size.width, self.view.bounds.size.height - 44 - 34)];
    self.graphicView.textColor = [UIColor blackColor];
    self.graphicView.numberOfLines = 9;
    self.graphicView.lineSpacing = 10;
    self.graphicView.imageSize = CGSizeMake(50, 50);
    self.graphicView.font = [UIFont fontWithName:@"Menk-Har_a-Tig" size:20];
    self.graphicView.linkFont = [UIFont fontWithName:@"Menk-Har_a-Tig" size:20];
    self.graphicView.linkColor = [UIColor blueColor];
    self.graphicView.highlightColor = [[UIColor blueColor]colorWithAlphaComponent:.5];
    self.graphicView.text = @"CoreText                  CoreText  CoreGraphics      https://developer.apple.com/documentation/coretext [/https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1576038113840&di=9d45bf0999cb1e0ba96145fff7781811&imgtype=0&src=http%3A%2F%2Fimg3.coin163.com%2F96%2F90%2FzuQRJz.png] CoreGraphics  OSX  iOS              [/444.gif] CoreText                          (           )[/https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1576632777&di=b89f270a52643bd376974b0c52f9c2e6&imgtype=jpg&er=1&src=http%3A%2F%2Fwww.codexiu.cn%2Fstatic%2Fblog%2Fimagesw8%2F2016%2F04%2F26%2Ffull%2F705ab4628d90cb1bd956b47d10eb8f20b186b956.jpg]    CoreGraphics         (  CTFrame、CTLIne、CTRun、CTFout )    CoreText      CoreGraphics       CoreText          https://developer.apple.com/documentation/coretext";
//    self.graphicView.backgroundColor = [UIColor colorWithRed:250 / 255.0 green:250 / 255.0 blue:250 / 255.0 alpha:1];
    self.graphicView.backgroundColor = [UIColor clearColor];
    [self.view addSubview:self.graphicView];
    
    self.graphicView.delegate = self;
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self.graphicView addCustomLinkForRange:NSMakeRange(0, 8) linkColor:nil linkFont:nil];
    
}

- (void)windowClick{
    [_imageView removeFromSuperview];
}




- (void)attributedLabel:(nonnull MKGraphicView *)label selectedImage:(nonnull MKAttributedImage *)selectedImage {
    
    
    
    if ([selectedImage.imageName containsString:@".gif"]) {
        self.imageView = [UIImageView imageViewWithGIFName:selectedImage.imageName frame:self.view.bounds];
    }else{
        self.imageView = [[UIImageView alloc]init];
    }
    
    self.imageView.frame = self.view.bounds;
    self.imageView.contentMode = UIViewContentModeScaleAspectFit;
    [self.view addSubview:self.imageView];
    [self.imageView sd_setImageWithURL:[NSURL URLWithString:selectedImage.imageName] placeholderImage:[UIImage imageNamed:@"shizi"]];
    
    self.imageView.userInteractionEnabled = YES;
    UITapGestureRecognizer *labelTapGestureRecognizer = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(windowClick)];
    [self.imageView addGestureRecognizer:labelTapGestureRecognizer];
    
}

- (void)attributedLabel:(nonnull MKGraphicView *)label selectedLink:(nonnull MKAttributedLink *)selectedLink {
    NSLog(@"点击:  %@",selectedLink.text);
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:selectedLink.text] options:nil completionHandler:nil];
}
@end
