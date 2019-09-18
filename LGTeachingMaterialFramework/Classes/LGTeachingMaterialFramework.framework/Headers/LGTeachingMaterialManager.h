//
//  LGEnglishTrainingManager.h
//  LGEnglishTrainingFramework
//
//  Created by lg on 2019/4/29.
//  Copyright © 2019 lg. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define LGTMManager LGTeachingMaterialManager.defaultManager

@interface LGTeachingMaterialManager : NSObject

+ (LGTeachingMaterialManager *)defaultManager;

/** 电子教材首页模块名称 */
@property (nonatomic, strong) NSString *moduleName;
/** 用户ID */
@property (nonatomic, strong) NSString *userID;
/** 用户名 */
@property (nonatomic, strong) NSString *userName;
/** 用户类型 */
@property (nonatomic, strong) NSString *userType;
/** 学期 */
@property (nonatomic, strong) NSString *term;
/** 自学服务器基础地址 */
@property (nonatomic, strong) NSString *severUrl;
/** 公共模块接口地址 */
@property (nonatomic, strong) NSString *commonalitySeverUrl;
/** 原始接口地址 */
@property (nonatomic, strong) NSString *originallySeverUrl;
/** 年级ID */
@property (nonatomic, strong) NSString *classID;

@property (nonatomic, strong) NSString *studyLevel;
/** 用户登录令牌 */
@property (nonatomic, strong) NSString *token;
/** 学校名称 */
@property (nonatomic, strong) NSString *SchoolName;
/** 学校ID */
@property (nonatomic, strong) NSString *SchoolID;
/** 年级名称 */
@property (nonatomic, strong) NSString *GradeName;
/** 年级ID */
@property (nonatomic, strong) NSString *GradeID;
/** 班级名称 */
@property (nonatomic, strong) NSString *GroupName;
/** 班级ID */
@property (nonatomic, strong) NSString *GroupID;
/** 课程ID */
@property (nonatomic, strong) NSString *CourseNO;
/** 课程名称 */
@property (nonatomic, strong) NSString *CourseName;
/** 学科ID */
@property (nonatomic, strong) NSString *SubjectID;
/** 学科名称 */
@property (nonatomic, strong) NSString *SubjectName;

/** 应用跳转返回主页 */
@property (nonatomic,copy) void (^jumpToHomeBlock) (void);

/** 进入电子教材模块 */
- (void)presentTeachingPlanControllerBy:(UIViewController *)controller;
/** 学友推荐调用 */
- (void)presentShareTeachingPlanControllerBy:(UIViewController *)controller resType:(NSString *)resType resCode:(NSString *)resCode libCode:(NSString *)libCode;
/** 公共笔记工具跳转链接调用 */
- (UIViewController *)NoteLinkTeachingPlanControllerWithResType:(NSString *)resType resCode:(NSString *)resCode libCode:(NSString *)libCode;
/** 跳转首页 */
- (UIViewController*)jumpToTeachingMaterialMainPage;

/** 跳转知识点学习课件 */
@property (nonatomic,copy) void (^jumpToLGKnowledgeBlock) (UIViewController *fromController,NSString *klgCode);
@property (nonatomic,copy) void (^jumpToLGKnowledgeAlertBlock) (UIViewController *fromController,NSString *klgCode,void (^addStudyBlock) (void));

#pragma mark - 项目内部自使用字段

@property (nonatomic, assign, readonly) NSInteger levelId;
/** 音频路径 */
@property (nonatomic, strong) NSString *earmarkPath;
/** 时间戳 */
@property (nonatomic, strong) NSString *StampTime;

@end

NS_ASSUME_NONNULL_END
