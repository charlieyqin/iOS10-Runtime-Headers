/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSError, SSDownload, NSObject<OS_dispatch_queue>, SSPurchaseResponse, NSDictionary, NSString, SSPurchase;

@interface MPStoreDownload : NSObject  {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_attributes;
    BOOL _canceled;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    int _type;
}

@property(readonly) NSDictionary * attributes;
@property(readonly) long long bytesDownloaded;
@property(readonly) long long bytesTotal;
@property(getter=isCanceled,readonly) BOOL canceled;
@property(readonly) long long downloadIdentifier;
@property(readonly) NSError * failureError;
@property(getter=isFinished,readonly) BOOL finished;
@property(getter=isPurchasing,readonly) BOOL purchasing;
@property(readonly) unsigned long long libraryItemIdentifier;
@property(readonly) double percentComplete;
@property(readonly) NSString * phaseIdentifier;
@property(getter=isRestore,readonly) BOOL restore;
@property(readonly) long long storeItemIdentifier;
@property(readonly) int type;

+ (id)storeDownloadsForRadioTracks:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadsForMediaQuery:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)_SSPurchaseForType:(int)arg1 attributes:(id)arg2 buyParameters:(id)arg3 purchaseValuesForDownloadProperties:(id)arg4 URLBagKeyOverride:(id)arg5;
+ (id)_storeDownloadForMediaItem:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadsForMediaItems:(id)arg1 type:(int)arg2 attributes:(id)arg3;

- (void)_setSSDownload:(id)arg1;
- (void)_setCanceled:(BOOL)arg1;
- (unsigned long long)libraryItemIdentifier;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)_SSPurchaseResponse;
- (BOOL)_isCanceled;
- (id)_SSPurchase;
- (id)_SSDownload;
- (id)phaseIdentifier;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (id)initWithType:(int)arg1 attributes:(id)arg2;
- (BOOL)isRestore;
- (BOOL)isPurchasing;
- (long long)downloadIdentifier;
- (long long)storeItemIdentifier;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (id)description;
- (double)percentComplete;
- (id)failureError;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (id)attributes;
- (int)type;
- (BOOL)isFinished;

@end