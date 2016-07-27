//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NKInvitation, NSString;

@interface Nakamap : NSObject
{
    NSString *_accountBaseName;
    NKInvitation *_invitation;
}

+ (void)applicationDidBecomeActive:(id)arg1;
+ (void)askStampUnlocked:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)unlockStamp:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)makeGroupWithName:(id)arg1 externalIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)removeFriendsWithExternalID:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)addFriendsWithExternalIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)setupWithClientID:(id)arg1 accountBaseName:(id)arg2;
+ (void)clear;
+ (void)userReset;
+ (void)debugReset;
+ (id)exprofileFromURL:(id)arg1;
+ (id)invitedFromURL:(id)arg1;
+ (id)appFromURL:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1;
+ (_Bool)isInstalled;
+ (_Bool)isReady;
+ (void)load;
@property(retain, nonatomic) NKInvitation *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSString *accountBaseName; // @synthesize accountBaseName=_accountBaseName;

@end
