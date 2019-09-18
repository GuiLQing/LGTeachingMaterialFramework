//
//  NoteEditViewController.h
//  NoteDemo
//
//  Created by hend on 2018/10/10.
//  Copyright © 2018年 hend. All rights reserved.
//

#import "LGNoteBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LGNNoteEditViewController : LGNoteBaseViewController

/** 是否是新建笔记 */
@property (nonatomic, assign) BOOL isNewNote;

/** 是否是搜索进来的笔记 */
@property (nonatomic, assign) BOOL isSearchNote;

@property (nonatomic,strong) NSString * searchContent;

/** 参数类 */
@property (nonatomic, strong) LGNParamModel *paramModel;
@property (nonatomic, copy)   NSArray *subjectArray;
@property (nonatomic, strong) RACSubject *updateSubject;

/**
 编辑笔记时传入的数据模型

 @param dataSource <#dataSource description#>
 */
- (void)editNoteWithDataSource:(LGNNoteModel *)dataSource;

@end

NS_ASSUME_NONNULL_END
