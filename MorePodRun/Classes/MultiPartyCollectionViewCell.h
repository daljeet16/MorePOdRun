//
//  MultiPartyCollectionViewCell.h
//  ViewSwap
//
//  Created by Daljeet Singh on 21/12/17.
//  Copyright © 2017 Daljeet Singh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VCXPlayerView.h"
@interface MultiPartyCollectionViewCell : UICollectionViewCell

@property (strong,nonatomic) UILabel *text;
@property (strong,nonatomic) RTCEAGLVideoView *videoView;
@end
