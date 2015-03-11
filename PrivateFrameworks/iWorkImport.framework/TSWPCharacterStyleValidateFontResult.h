/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSKWarning;

@interface TSWPCharacterStyleValidateFontResult : NSObject {
    int _bold;
    int _italic;
    NSString *_mappedName;
    TSKWarning *_warning;
}

@property int bold;
@property int italic;
@property(retain) NSString * mappedName;
@property(retain) TSKWarning * warning;

- (int)bold;
- (void)dealloc;
- (int)italic;
- (id)mappedName;
- (void)setBold:(int)arg1;
- (void)setItalic:(int)arg1;
- (void)setMappedName:(id)arg1;
- (void)setWarning:(id)arg1;
- (id)warning;

@end