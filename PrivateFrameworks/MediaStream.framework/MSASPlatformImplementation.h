/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSASPlatformImplementation : NSObject <MSASPlatform> {
}


- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (id)baseSharingURLForPersonID:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (BOOL)personIDEnabledForAlbumSharing:(id)arg1;
- (id)personIDsEnabledForAlbumSharing;
- (Class)pluginClass;
- (BOOL)shouldEnableNewFeatures;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;

@end