//
//  TMViewController.m
//  LGTeachingMaterialFramework
//
//  Created by SG on 09/18/2019.
//  Copyright (c) 2019 SG. All rights reserved.
//

#import "TMViewController.h"
#import <MJExtension/MJExtension.h>
#import <LGTeachingMaterialFramework/LGTeachingMaterialFramework.h>

@interface TMViewController ()

@end

@implementation TMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    NSString *jsonString = [[NSString alloc] initWithContentsOfFile:[NSBundle.mainBundle pathForResource:@"config" ofType:@"json"] encoding:NSUTF8StringEncoding error:nil];
    NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableContainers error:nil];
    LGTeachingMaterialManager *obj = [LGTeachingMaterialManager mj_objectWithKeyValues:dic];
    LGTMManager.userID = obj.userID;
    LGTMManager.userName = obj.userName;
    LGTMManager.term = obj.term;
    LGTMManager.severUrl = obj.severUrl;
    LGTMManager.commonalitySeverUrl = obj.commonalitySeverUrl;
    LGTMManager.originallySeverUrl = obj.originallySeverUrl;
    LGTMManager.token = obj.token;
    LGTMManager.SubjectID = obj.SubjectID;
    LGTMManager.userType = obj.userType;
    LGTMManager.SchoolID = obj.SchoolID;
    LGTMManager.SubjectName = obj.SubjectName;
    LGTMManager.SchoolName = obj.SchoolName;
    LGTMManager.GradeID = obj.GradeID;
    LGTMManager.GradeName = obj.GradeName;
    LGTMManager.GroupID = obj.GroupID;
    LGTMManager.GroupName = obj.GroupName;
    LGTMManager.CourseNO = obj.CourseNO;
    LGTMManager.CourseName = obj.CourseName;
    [LGTMManager presentTeachingPlanControllerBy:self];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
