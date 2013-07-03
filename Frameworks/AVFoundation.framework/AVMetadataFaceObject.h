/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject  {
    AVMetadataFaceObjectInternal *_internal;
}

@property(readonly) int faceID;
@property(readonly) BOOL hasRollAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (float)yawAngle;
- (BOOL)hasYawAngle;
- (float)rollAngle;
- (BOOL)hasRollAngle;
- (int)faceID;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (void)dealloc;
- (id)description;

@end