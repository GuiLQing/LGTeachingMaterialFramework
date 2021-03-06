//
//  SGVocabularyVoiceView.m
//  SGVocabularyDictation
//
//  Created by lg on 2019/7/18.
//  Copyright © 2019 lg. All rights reserved.
//

#import "SGVocabularyVoiceView.h"
#import <Masonry/Masonry.h>
#import "UIImage+SGVocabularyResource.h"

@interface SGVocabularyVoiceView ()

@property (nonatomic, strong) UILabel *voiceLabel;

@property (nonatomic, strong) UIImageView *voiceIV;

@end

@implementation SGVocabularyVoiceView

- (instancetype)init
{
    self = [super init];
    if (self) {
        
        self.voiceLabel = UILabel.alloc.init;
        self.voiceLabel.text = @"朗读";
        self.voiceLabel.textColor = [UIColor colorWithRed:11/255.0 green:175/255.0 blue:251/255.0 alpha:1];
        self.voiceLabel.font = [UIFont systemFontOfSize:14.0f];
        self.voiceLabel.textAlignment = NSTextAlignmentCenter;
        [self.voiceLabel sizeToFit];
        [self addSubview:self.voiceLabel];
        [self.voiceLabel mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.right.bottom.equalTo(self);
        }];
        
        self.voiceIV = UIImageView.alloc.init;
        self.voiceIV.image = [UIImage sg_vr_imageNamed:@"sg_dictation_icon_voice_animation_3"];
        
        NSMutableArray *images = [NSMutableArray array];
        for (NSInteger i = 1; i <= 3; i ++) {
            UIImage *image = [UIImage sg_vr_imageNamed:[NSString stringWithFormat:@"sg_dictation_icon_voice_animation_%zd", i]];
            if (!image) {
                [images addObject:image];
            }
        }
        self.voiceIV.animationImages = images;
        self.voiceIV.animationDuration = 0.5;
        [self addSubview:self.voiceIV];
        [self.voiceIV mas_makeConstraints:^(MASConstraintMaker *make) {
            make.size.mas_equalTo(CGSizeMake(18.0f, 18.0f));
            make.right.equalTo(self.voiceLabel.mas_left).offset(-5.0f);
            make.top.left.bottom.equalTo(self);
        }];
        
        UITapGestureRecognizer *tapGR = [UITapGestureRecognizer.alloc initWithTarget:self action:@selector(voiceTapAction)];
        [self addGestureRecognizer:tapGR];
    }
    return self;
}

- (void)voiceTapAction {
    if (self.voiceImageDidClicked) {
        self.voiceImageDidClicked(^(BOOL isToStart) {
            if (isToStart) {
                [self.voiceIV startAnimating];
            } else {
                [self.voiceIV stopAnimating];
            }
        });
    }
}

@end
