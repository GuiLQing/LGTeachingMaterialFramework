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

static NSString * const LGElectronicMaterialOtherAppSource = @"DRM";

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

/** 付费VIP模式 (default is YES) */
@property (nonatomic, assign) BOOL isVipMode;
/** 非VIP模式试听秒数 */
@property (nonatomic, assign) NSInteger nonVipListeningTestTime;
/** 是否开启非VIP限制 */
@property (nonatomic, assign, readonly) BOOL isOpenNonVipLimit;

/// 获取当前登录状态
@property (nonatomic, copy) void (^ _Nullable silentLoginRequest) (void (^ callbackCurrentLoginStatus)(BOOL isLogined));

/** 应用跳转返回主页 */
@property (nonatomic, copy) void (^ _Nullable jumpToHomeBlock) (void);
@property (nonatomic, copy) void (^ _Nullable dismissBlock) (void);

/** 跳转知识点学习课件 */
@property (nonatomic, copy) void (^ _Nullable jumpToLGKnowledgeBlock) (UIViewController *fromController,NSString *klgCode);
@property (nonatomic, copy) void (^ _Nullable jumpToLGKnowledgeAlertBlock) (UIViewController *fromController,NSString *klgCode,void (^addStudyBlock) (void));
    
@property (nonatomic, copy) void (^ _Nullable jumpToNoteModule)(UINavigationController * _Nonnull navigationController, NSString * _Nullable resType, NSString * _Nullable resCode, NSString * _Nullable libCode, NSString * _Nullable resName, BOOL isRecommandModule);

#pragma mark -
// !!!: 模块跳转
/** 进入电子素材主界面 */
@property (nonatomic, copy, readonly) void (^presentElectronicMaterialModule)(UIViewController * _Nonnull controller);
/** 学友推荐进入电子素材资料详情界面 */
@property (nonatomic, copy, readonly) void (^presentElectronicMaterialResDetail)(UIViewController * _Nonnull controller, NSString * _Nullable resType, NSString * _Nullable resCode, NSString * _Nullable libCode);
/** 获取电子素材主界面导航栏控制器 */
@property (nonatomic, copy, readonly) UINavigationController * _Nonnull (^naviControllerOfElectronicMaterialModule)(void);
/** 获取电子素材资料详情导航栏控制器 */
@property (nonatomic, copy, readonly) UINavigationController * _Nonnull (^naviControllerOfElectronicMaterialResDetail)(NSString * _Nullable resType, NSString * _Nullable resCode, NSString * _Nullable libCode);

#pragma mark -
// !!!: 项目内部自使用字段

@property (nonatomic, assign, readonly) NSInteger levelId;
/** 音频路径 */
@property (nonatomic, strong) NSString *earmarkPath;
/** 时间戳 */
@property (nonatomic, strong) NSString *StampTime;

@property (nonatomic, assign, readonly) BOOL isRecommandModule;


#pragma mark -
// !!!: Deprecated 已废弃

/** 进入电子教材模块 */
- (void)presentTeachingPlanControllerBy:(UIViewController *)controller __attribute__((deprecated("Use presentElectronicMaterialModule instead.")));
/** 学友推荐调用 */
- (void)presentShareTeachingPlanControllerBy:(UIViewController *)controller resType:(NSString *)resType resCode:(NSString *)resCode libCode:(NSString *)libCode __attribute__((deprecated("Use presentElectronicMaterialResDetail instead.")));
/** 公共笔记工具跳转链接调用 */
- (UINavigationController *)NoteLinkTeachingPlanControllerWithResType:(NSString *)resType resCode:(NSString *)resCode libCode:(NSString *)libCode __attribute__((deprecated("Use naviControllerOfElectronicMaterialResDetail instead.")));
/** 跳转首页 */
- (UINavigationController*)jumpToTeachingMaterialMainPage __attribute__((deprecated("Use naviControllerOfElectronicMaterialModule instead.")));

@end

NS_ASSUME_NONNULL_END
