//
//  Copyright 2009 Trevor Harmon.
//

#import <UIKit/UIKit.h>

@interface UIImage (Resize)

-(UIImage*)croppedImage:(CGRect)bounds;
-(UIImage*)thumbnailImage:(NSInteger)thumbnailSize transparentBorder:(NSUInteger)borderSize cornerRadius:(NSUInteger)cornerRadius interpolationQuality:(CGInterpolationQuality)quality;
-(UIImage*)resizedImage:(CGSize)newSize interpolationQuality:(CGInterpolationQuality)quality;
-(UIImage*)resizedImageWithContentMode:(UIViewContentMode)contentMode bounds:(CGSize)bounds interpolationQuality:(CGInterpolationQuality)quality;

@end
