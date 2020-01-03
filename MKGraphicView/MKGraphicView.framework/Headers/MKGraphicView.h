//
//  MKGraphicView.h
//  MKGraphic-01
//
//  Created by Burn on 2019/12/6.
//  Copyright © 2019 menksoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MKAttributedImage.h"
#import "MKAttributedLink.h"
#import "UIImageView+GIF.h"

NS_ASSUME_NONNULL_BEGIN


@class MKGraphicView;
@protocol MKGraphicViewDelegate <NSObject>

/**
 * 选中超文本的回调
 * -> 被选中的超文本selectedLink
 */
- (void)attributedLabel:(MKGraphicView *)label selectedLink:(MKAttributedLink *)selectedLink;

/**
 * 选中图片的回调
 * -> 被选中的图片selectedImage
 */
- (void)attributedLabel:(MKGraphicView *)label selectedImage:(MKAttributedImage *)selectedImage;

@end


@interface MKGraphicView : UIView


/**
 * 代理
 */
@property (nonatomic, weak) id<MKGraphicViewDelegate> delegate;

/**
 * 设置显示图片大小
 * 如未做设置，图片大小为文字高度的正方形
 */
@property (nonatomic, assign) CGSize imageSize;

/**
 * 超链接文本字体颜色
 */
@property (nonatomic, strong) UIColor *linkColor;

/**
 * 超链接文本字体大小
 */
@property (nonatomic, strong) UIFont *linkFont;

/**
 * 选中超文本选中颜色
 */
@property (nonatomic, strong) UIColor *highlightColor;

/**
 * Font
 */
@property (nonatomic, copy)     UIFont          *font;

/**
 * textColor
 */
@property (nonatomic, strong)   UIColor         *textColor;

/**
 * fontSize
 */
@property (nonatomic, assign)   CGFloat         fontSize;

/**
 * text
 */
@property (nonatomic, copy)     NSString        *text;

/**
 * numberOfLines
 */
@property(assign,nonatomic)     NSInteger       numberOfLines;


/**
 *  行间距
 */
@property(assign,nonatomic)     CGFloat         lineSpacing;


/**
 * textColor
 */
//@property(assign,nonatomic)     UIEdgeInsets    insets;

/**
 * 设置属性文本
 */
- (void)setAttributedText:(NSAttributedString *)attributedText;

/**
 * 添加自定义链接
 */
- (void)addCustomLink:(NSString *)link;
- (void)addCustomLink:(NSString *)link linkColor:(UIColor *)linkColor linkFont:(UIFont *)linkFont;
- (void)addCustomLinkForRange:(NSRange )range linkColor:(UIColor * _Nullable)linkColor linkFont:(UIFont *_Nullable)linkFont;

@end

NS_ASSUME_NONNULL_END
