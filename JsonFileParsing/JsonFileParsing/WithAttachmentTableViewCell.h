//
//  WithAttachmentTableViewCell.h
//  JsonFileParsing
//
//  Created by El Capitan on 25/04/17.
//  Copyright © 2017 Vivek Raj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NotesDataModel.h"

@interface WithAttachmentTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UITextView *nameTextView;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UIStackView *attachmentStactView;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property(strong,nonatomic) NotesDataModel *notesDM;
-(void)updateUI:(NotesDataModel*)ndm;
@end
