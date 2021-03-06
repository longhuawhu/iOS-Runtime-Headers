/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPlaylistEditingEntityProvider : NSObject <MusicEntityProviding> {
    <MusicEntityValueProviding> *_entityValueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleEntityValueProviderDidInvalidateNotification:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)entityValueProvider;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithPlaylistEntityValueProvider:(id)arg1;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;

@end
