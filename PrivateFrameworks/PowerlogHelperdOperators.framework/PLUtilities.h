/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

@interface PLUtilities : NSObject

+ (id)JSONSanitizeDictionary:(id)arg1;
+ (id)MavRevStringQuery;
+ (void)_deallocatePortArray:(unsigned int*)arg1 withCount:(unsigned int)arg2;
+ (id)allSubClassesForClass:(Class)arg1;
+ (bool)alsCurveHigherThanDefault;
+ (bool)appAnalyticsEnabled;
+ (id)bundleIDFromPid:(int)arg1;
+ (id)bundleIDFromURL:(id)arg1;
+ (id)cameraTypeString;
+ (short)canLogMode:(id)arg1 fullMode:(bool)arg2;
+ (int)compressWithSource:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withDestination:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 withLevel:(int)arg3;
+ (id)containerPath;
+ (bool)createAndChownDirectory:(id)arg1;
+ (id)dateFromTimeval:(struct timeval { long long x1; int x2; })arg1;
+ (double)defaultBatteryEnergyCapacity;
+ (id)deviceBootTime;
+ (void)dispatchSyncWithoutDeadlockOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg1;
+ (void)exitWithReason:(short)arg1;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)arg1;
+ (bool)gasGaugeEnabled;
+ (int)getCameraTypeOfDevice;
+ (id)getIdentifierFromEntry:(id)arg1;
+ (bool)hasBaseband;
+ (bool)hasNfc;
+ (bool)hasSmartConnector;
+ (id)hashString:(id)arg1;
+ (bool)internalBuild;
+ (bool)is64Bit;
+ (bool)isAudioSpeakerClass:(int)arg1;
+ (bool)isBasebandClass:(int)arg1;
+ (bool)isCameraClass:(int)arg1;
+ (bool)isDeviceClass:(int)arg1;
+ (bool)isDeviceClassName:(id)arg1;
+ (bool)isDisplayClass:(int)arg1;
+ (bool)isEduMode;
+ (bool)isHSupported;
+ (bool)isHeySiriEnabled;
+ (bool)isICE;
+ (bool)isIPod;
+ (bool)isIpad;
+ (bool)isMav1;
+ (bool)isMav2;
+ (bool)isMav4;
+ (bool)isOrb;
+ (bool)isPingPongChargingWith:(bool)arg1 andBatteryLevelPercent:(double)arg2;
+ (bool)isPowerlogHelperd;
+ (bool)isSiriEnabled;
+ (bool)isSoCClass:(int)arg1;
+ (bool)isTorchClass:(int)arg1;
+ (bool)isValidString:(id)arg1;
+ (bool)isVrrSupported;
+ (bool)isWatch;
+ (bool)isWiFiClass:(int)arg1;
+ (bool)isiPad;
+ (bool)isiPhone;
+ (int)kPLAudioSpeakerClassOfDevice;
+ (int)kPLBasebandClassOfDevice;
+ (int)kPLCameraClassOfDevice;
+ (int)kPLDeviceClass;
+ (id)kPLDeviceClassName;
+ (id)kPLDeviceMap;
+ (int)kPLDisplayClassOfDevice;
+ (id)kPLPlatformAttributes;
+ (int)kPLSoCClassOfDevice;
+ (int)kPLTorchClassOfDevice;
+ (int)kPLWiFiClassOfDevice;
+ (id)launchdNameToProcessName:(id)arg1;
+ (short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2;
+ (bool)nonUIBuild;
+ (unsigned long long)pidForName:(id)arg1;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)powerModelForOperatorName:(id)arg1;
+ (id)processNameForPid:(int)arg1;
+ (void)refreshBUI;
+ (bool)runningAsMobileUser;
+ (id)runningAsUser;
+ (double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2;
+ (double)secondsFromMachTime:(unsigned long long)arg1;
+ (void)setMobileOwnerForFile:(id)arg1;
+ (id)shortUUIDString;
+ (bool)shouldLogForEntryKey:(id)arg1;
+ (id)torchTypeString;
+ (id)valueForMobileGestaltCapability:(id)arg1;
+ (id)workQueue;
+ (id)workQueueForClass:(Class)arg1;
+ (id)workQueueForKey:(id)arg1;

@end