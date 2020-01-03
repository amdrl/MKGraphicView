//
//  MKAttributedImage.h
//  MKGraphic-01
//
//  Created by Burn on 2019/12/6.
//  Copyright © 2019 menksoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

/**
 显示的类型，包括UIImage, UIImageView(gif), 网络获取图片
 */
typedef NS_ENUM(NSUInteger, MKImageType) {
    MKImagePNGTppe = 0,
    MKImageGIFTppe,     // -> GIF图片
    MKTImageURLType
};

NS_ASSUME_NONNULL_BEGIN

@interface MKAttributedImage : NSObject

/**
 * 网络地址
 */
@property(copy,nonatomic) NSString *url;

/**
 * 图片名字
 */
@property (nonatomic, copy) NSString *imageName;

/**
 * 图片大小
 */
@property (nonatomic, assign) CGSize imageSize;

/**
 * 图片的位置
 */
@property (nonatomic, assign) NSInteger position;

/**
 * 图片类型
 */
@property (nonatomic, assign) MKImageType imageType;

/**
 * 占位图片属性字符的字体fontRef
 * ->此处为方便计算Ascent和Descent
 */
@property (nonatomic, assign) CTFontRef fontRef;

/**
 * 图片与文字的上下左右的间距
 */
@property (nonatomic, assign) UIEdgeInsets imageInsets;

@end

NS_ASSUME_NONNULL_END
