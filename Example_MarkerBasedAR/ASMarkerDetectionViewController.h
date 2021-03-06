/*****************************************************************************
*   ViewController.h
*   Example_MarkerBasedAR
******************************************************************************
*   by Khvedchenia Ievgen, 5th Dec 2012
*   http://computer-vision-talks.com
******************************************************************************
*   Ch2 of the book "Mastering OpenCV with Practical Computer Vision Projects"
*   Copyright Packt Publishing 2012.
*   http://www.packtpub.com/cool-projects-with-opencv/book
*****************************************************************************/

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "MBProgressHUD.h"
#import "EAGLView.h"

@protocol MBProgressHUDDelegate;
@class MBProgressHUD;

@interface ASMarkerDetectionViewController : UIViewController<CLLocationManagerDelegate, MBProgressHUDDelegate> {
    MBProgressHUD *HUD;
}

@property (weak, nonatomic) IBOutlet EAGLView *glview;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *location;
@property (nonatomic) int markerId;
@property (strong, nonatomic) NSString *videoId;
@property (nonatomic) BOOL isFetching;

@property (weak, nonatomic) IBOutlet UIImageView *detectionOverlay;
@property (weak, nonatomic) IBOutlet UIImageView *detectedOverlay;
@property (weak, nonatomic) IBOutlet UIImageView *instructionOverlay;

- (void)detectMarkerWithId:(int)id;

@end
