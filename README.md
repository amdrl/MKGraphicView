# MKGraphicView
MKGraphicView



#import <MKGraphicView/MKGraphicView.h>

- MKGraphicViewDelegate
```
click Image
- (void)attributedLabel:(nonnull MKGraphicView *)label selectedImage:(nonnull MKAttributedImage *)selectedImage;
click URL
- (void)attributedLabel:(nonnull MKGraphicView *)label selectedLink:(nonnull MKAttributedLink *)selectedLink; 
```

```
self.graphicView = [[MKGraphicView alloc]initWithFrame:CGRectMake(0, 44, self.view.bounds.size.width, self.view.bounds.size.height - 44 - 34)];
self.graphicView.textColor = [UIColor blackColor];
self.graphicView.numberOfLines = 9;
self.graphicView.lineSpacing = 10;
self.graphicView.imageSize = CGSizeMake(50, 50);
self.graphicView.font = [UIFont fontWithName:@"Menk-Har_a-Tig" size:20];
self.graphicView.linkFont = [UIFont fontWithName:@"Menk-Har_a-Tig" size:20];
self.graphicView.linkColor = [UIColor blueColor];
self.graphicView.highlightColor = [[UIColor blueColor]colorWithAlphaComponent:.5];
self.graphicView.text = @"CoreText                  CoreText  CoreGraphics      https://developer.apple.com/documentation/coretext [/https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1576038113840&di=9d45bf0999cb1e0ba96145fff7781811&imgtype=0&src=http%3A%2F%2Fimg3.coin163.com%2F96%2F90%2FzuQRJz.png] CoreGraphics  OSX  iOS              [/444.gif] CoreText                          (           )";
[self.view addSubview:self.graphicView];
```
![](http://server-name.test.upcdn.net/Algorithm/2020-01-03-Simulator%20Screen%20Shot%20-%20iPhone%20X%20-%202020-01-03%20at%2013.11.44.png)
// - 01
