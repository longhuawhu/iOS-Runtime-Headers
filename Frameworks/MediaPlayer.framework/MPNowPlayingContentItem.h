/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingContentItem : MPContentItem

@property (nonatomic, copy) NSString *albumArtistName;
@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *directorName;
@property (nonatomic) double duration;
@property (nonatomic) int episodeNumber;
@property (getter=isExplicitItem, nonatomic) BOOL explicitItem;
@property (nonatomic, copy) NSString *localizedContentRating;
@property (nonatomic) int playCount;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) int seasonNumber;
@property (nonatomic, copy) NSString *trackArtistName;

- (unsigned int)_convertFromPlaylistType:(int)arg1;
- (int)_convertFromRadioStationType:(int)arg1;
- (int)_convertToPlaylistType:(unsigned int)arg1;
- (int)_convertToRadioStationType:(int)arg1;
- (id)albumArtistName;
- (id)albumName;
- (id)directorName;
- (double)duration;
- (int)episodeNumber;
- (BOOL)isExplicitItem;
- (id)localizedContentRating;
- (int)playCount;
- (int)playlistType;
- (int)radioStationType;
- (id)releaseDate;
- (int)seasonNumber;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setDirectorName:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEpisodeNumber:(int)arg1;
- (void)setExplicitItem:(BOOL)arg1;
- (void)setLocalizedContentRating:(id)arg1;
- (void)setPlayCount:(int)arg1;
- (void)setPlaylistType:(int)arg1;
- (void)setRadioStationType:(int)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeasonNumber:(int)arg1;
- (void)setTrackArtistName:(id)arg1;
- (id)trackArtistName;

@end
