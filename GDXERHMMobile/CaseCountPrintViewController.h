//
//  CaseCountPrintViewController.h
//  GuiZhouRMMobile
//
//  Created by yu hongwu on 13-1-4.
//
//

#import "CasePrintViewController.h"
#import "CaseCountDetailCell.h"
#import "CaseCountDetailEditorViewController.h"
#import "PartyPickerViewController.h"


@interface CaseCountPrintViewController : CasePrintViewController<UITableViewDataSource,UITableViewDelegate,CaseCountDetailEditorDelegate,PartyPickerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *labelHappenTime;

//案发地点
@property (weak, nonatomic) IBOutlet UITextField *labelCaseAddress;                 
@property (weak, nonatomic) IBOutlet UILabel *labelOrg;                     /*单位*/
@property (weak, nonatomic) IBOutlet UILabel *labelTele;
@property (weak, nonatomic) IBOutlet UILabel *labelAutoPattern;
@property (weak, nonatomic) IBOutlet UILabel *labelAutoNumber;
@property (weak, nonatomic) IBOutlet UITableView *tableCaseCountDetail;
@property (weak, nonatomic) IBOutlet UITextField *textBigNumber;
@property (weak, nonatomic) IBOutlet UILabel *labelPayReal;
@property (weak, nonatomic) IBOutlet UITextView *textRemark;
@property (weak, nonatomic) IBOutlet UITextField *textParty;   /*当事人*/
- (IBAction)selectParty:(UITextField*)sender;
@end
