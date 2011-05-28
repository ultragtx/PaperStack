//
//  PSPageCache.h
//  PaperStackDemo
//
//  Created by Lorenzo Manfredi on 28/05/11.
//  Copyright 2011 Mutado. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface PSPageCache : UIView {
    
}

- (UIImage*)pageCacheWithImage:(UIImage*)image;
- (UIImage*)textureData;
- (CGRect)textureRect;

@end
