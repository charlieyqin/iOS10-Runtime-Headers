/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, SSKeyValueStore, NSObject<OS_dispatch_queue>, SSAccount, NSMutableArray;

@interface SSAccountStore : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableArray *_notifyTokens;
}

@property(readonly) SSAccount * activeAccount;
@property(readonly) SSAccount * activeLockerAccount;
@property(readonly) NSArray * accounts;
@property(getter=isExpired,readonly) BOOL expired;
@property(getter=isAuthenticationActive,readonly) BOOL authenticationActive;

+ (void)setDefaultStore:(id)arg1;
+ (double)tokenExpirationInterval;
+ (void)resetExpirationForTokenType:(int)arg1;
+ (void)resetExpiration;
+ (BOOL)isExpiredForTokenType:(int)arg1;
+ (id)existingDefaultStore;
+ (BOOL)isExpired;
+ (id)defaultStore;

- (void)signOutAllAccounts;
- (void)signOutAccount:(id)arg1;
- (id)activeLockerAccount;
- (id)setActiveAccount:(id)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)addAccount:(id)arg1;
- (void)_postAccountStoreChangeNotification;
- (void)_dispatchSync:(id)arg1;
- (void)_dispatchAsync:(id)arg1;
- (void)setDefaultAccountName:(id)arg1 completionBlock:(id)arg2;
- (BOOL)isAuthenticationActive;
- (void)getDefaultAccountNameUsingBlock:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (void)resetExpirationForTokenType:(int)arg1;
- (void)resetExpiration;
- (BOOL)isExpiredForTokenType:(int)arg1;
- (id)_keyValueStore;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (id)activeAccount;
- (id)accounts;
- (BOOL)isExpired;
- (void)reloadAccounts;
- (id)init;
- (void)dealloc;

@end