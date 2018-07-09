//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTSourceEditor/NSObject-Protocol.h>

@class NSArray, NSFont, NSString;
@protocol DVTFindPatternManager;

@protocol DVTFindPatternField <NSObject>
- (NSFont *)font;
- (NSString *)plainTextValue;
- (void)setFindPatternPropertyList:(id)arg1;
- (id)findPatternPropertyList;
- (BOOL)hasFindPattern;
- (NSString *)replacementExpression;
- (NSString *)regularExpression;
@property(nonatomic) __weak id <DVTFindPatternManager> findPatternManager;
- (void)setFindPatternArray:(NSArray *)arg1;
@end

