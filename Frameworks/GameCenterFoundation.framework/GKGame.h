/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, GKStoreItemInternal, NSDictionary, NSNumber, GKGameInternal;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {
    BOOL _sandboxed;
    GKGameInternal *_internal;
}

@property(retain) NSString * reason;
@property(retain) NSString * engineID;
@property(readonly) BOOL isGameRecommendation;
@property(getter=isInstalled,readonly) BOOL installed;
@property(getter=isInternal,readonly) BOOL internal;
@property(getter=isDownloading,readonly) BOOL downloading;
@property(retain) GKGameInternal * internal;
@property(getter=isPrerendered) BOOL prerendered;
@property(getter=isSandboxed) BOOL sandboxed;
@property(readonly) NSDictionary * gameDescriptor;
@property(readonly) NSNumber * adamID;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * cacheKey;
@property unsigned char platform;
@property(readonly) NSString * name;
@property(readonly) NSString * defaultCategory;
@property(retain) GKStoreItemInternal * storeItem;
@property(readonly) struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; } gameInfo;
@property(readonly) BOOL supportsMultiplayer;
@property(readonly) BOOL supportsTurnBasedMultiplayer;

+ (BOOL)isPreferences;
+ (void)markGameRecommendationsViewed:(id)arg1 complete:(id)arg2;
+ (void)markGameRecommendationsDisplayed:(id)arg1 complete:(id)arg2;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadTopGamesWithCompletionHandler:(id)arg1;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)isGameCenter;
+ (id)currentGame;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (void)preloadIconsForGames:(id)arg1 style:(int)arg2 handler:(id)arg3;
+ (id)defaultGameIconWithStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })serverImageSizeForIconStyle:(int)arg1;

- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id)arg2;
- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (BOOL)isInternal;
- (BOOL)isGameRecommendation;
- (void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id)arg2;
- (void)loadGameRatingWithCompletionHandler:(id)arg1;
- (void)setSandboxed:(BOOL)arg1;
- (BOOL)isStoreItemUnexpired;
- (struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; })gameInfo;
- (id)gameDescriptor;
- (void)setInternal:(id)arg1;
- (BOOL)isSandboxed;
- (BOOL)isGameCenter;
- (id)internal;
- (BOOL)isDownloading;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isInstalled;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cacheKey;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)uninstallGameWithCompletionHandler:(id)arg1;
- (void)loadIconForSize:(struct CGSize { float x1; float x2; })arg1 completionHandler:(id)arg2;
- (id)cachedIconForStyle:(int)arg1;
- (id)iconForStyle:(int)arg1;
- (id)_imageURLForIconStyle:(int)arg1;
- (id)macBrushForIconStyle:(int)arg1;
- (id)imageSourceForiOSIconStyle:(int)arg1;
- (id)URLStringForImageWithShineIfNeeded;
- (id)imageSourceForIconStyle:(int)arg1;
- (id)loadIconForStyle:(int)arg1 withCompletionHandler:(id)arg2;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;

@end