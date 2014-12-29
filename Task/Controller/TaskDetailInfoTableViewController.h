//
//  TaskDetailInfoTableViewController.h
//  Task
//
//  Created by wanghuanqiang on 14/12/20.
//  Copyright (c) 2014年 王焕强. All rights reserved.
//

#import "BaseViewController.h"
#import "ExtensibleToolView.h"
#import "TaskDetailInfoTableViewCell.h"
#import "TaskOtherDetailInfoTableViewCell.h"
#import "TaskLookDetailTableViewCell.h"
#import "TaskReportTableViewCell.h"

#import "AddTaskReportJudgementViewController.h"
#import "ModifyTaskTitleViewController.h"
#import "ModifyUrgentLevelViewController.h"
#import "SelectHeaderViewController.h"
#import "GetAllPhotoCollectionViewController.h"

#import "SubmitTaskModifyInfoViewController.h"

@interface TaskDetailInfoTableViewController : BaseViewController<UITableViewDataSource, UITableViewDelegate, SelectedHeaderProtocol, SelectedUrgentLevelProtocol, SelectedPhotoProtocol, SubmitTaskModifyInfoProtocol, ModifyTaskContextInfoProtocol, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UITableView *mainTableView;
@property (nonatomic, copy) NSString *taskId;

@end