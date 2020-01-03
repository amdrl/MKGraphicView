//
//  MKAttributedLink.h
//  MKGraphic-01
//
//  Created by Burn on 2019/12/6.
//  Copyright © 2019 menksoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreText/CoreText.h>


NS_ASSUME_NONNULL_BEGIN

@interface MKAttributedLink : NSObject


/**
 * 超链接文本内容
 */
@property (nonatomic, copy) NSString *text;

/**
 * 超文本内容在字符串中所在的位置
 */
@property (nonatomic, assign) NSRange range;



@end

NS_ASSUME_NONNULL_END
