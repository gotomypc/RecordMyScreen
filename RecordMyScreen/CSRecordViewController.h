//
//  CSRecordViewController.h
//  RecordMyScreen
//
//  Created by @coolstarorg on 12/29/12.
//  Copyright (c) 2012 CoolStar Organization. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface CSRecordViewController : UIViewController <AVAudioRecorderDelegate> {
    UISegmentedControl *_record,*_stop;
    IBOutlet UIImageView *_recordbar;
    IBOutlet UILabel *_statusLabel;
    NSTimer *_recordingTimer;
    NSTimer *_shotTimer;
    NSDate *_recordStartDate;
    AVAudioRecorder *_audioRecorder;
    int shotcount;
}

@end
