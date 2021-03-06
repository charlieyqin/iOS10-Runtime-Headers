/* Generated by RuntimeBrowser.
 */

@protocol WBSHistoryConnectionProtocol

@required

- (void)beginHistoryAccessSession:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSHistoryAccessSessionProtocol> *, NSError *, void*
- (void)beginURLCompletionSession:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSURLCompletionSessionProtocol> *, NSError *, void*
- (void)clearHistoryVisitsAddedAfterDate:(void *)arg1 endDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clearHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)debugGetDatabaseURLWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)getVisitedLinksWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)groupVisitsIntoSessionsBetweenStartDate:(void *)arg1 endDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)makePermanentAllTestDriveHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)recordRedirectFromVisitWithUUID:(void *)arg1 destinationURL:(void *)arg2 origin:(void *)arg3 date:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSUUID *, NSURL *, long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)recordVisitToURL:(void *)arg1 title:(void *)arg2 wasHTTPNonGet:(void *)arg3 visitWasFailure:(void *)arg4 increaseVisitCount:(void *)arg5 origin:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 13: NSURL *, NSString *, bool, bool, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)removeAllTestDriveHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeItemsWithURLsInResponseToUserAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateTitle:(void *)arg1 forVisitWithUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
