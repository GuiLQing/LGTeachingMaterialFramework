//
//  LGDicDetailVoiceCell.h
//  LGDictionaryDemo
//
//  Created by 刘亚军 on 2018/9/30.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LGDicCategoryModel;
@interface LGDicDetailVoiceCell : UITableViewCell
- (void)setTextModel:(LGDicCategoryModel *) textModel adIndexPath:(NSIndexPath *) indexPath;
@end
