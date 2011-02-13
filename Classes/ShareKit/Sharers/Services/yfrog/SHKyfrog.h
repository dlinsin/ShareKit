//
//  SHKyfrog.h
//  ShareKit
//
//  Created by David Linsin on 2/11/11.
//  Copyright 2011 furryfishApps.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHKyfrogForm.h"
#import "SHKOAuthSharer.h"

@interface SHKyfrog : SHKOAuthSharer {
    NSString *twitPicAPIKey;
}

@property (nonatomic, retain) NSString *yfrogAPIKey;

#pragma mark -
#pragma mark UI Implementation

- (void)showTwitterForm;

#pragma mark -
#pragma mark Share API Methods

- (void)sendForm:(SHKyfrogForm *)form;

- (void)sendImage;
- (void)sendImage:(OAServiceTicket *)ticket didFinishWithData:(NSData *)data;
- (void)sendImage:(OAServiceTicket *)ticket didFailWithError:(NSError*)error;

- (void)sendStatus:(NSString*)status;
- (void)sendStatusTicket:(OAServiceTicket *)ticket didFinishWithData:(NSData *)data;
- (void)sendStatusTicket:(OAServiceTicket *)ticket didFailWithError:(NSError*)error;

#pragma mark -
#pragma mark yfrog specific

- (BOOL)shareOnTwitter;
- (void)setShareOnTwitter:(BOOL)share;

@end