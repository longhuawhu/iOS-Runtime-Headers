/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORouteAttributes : PBCodable {
    struct { 
        unsigned int basicPointsToBeIncluded : 1; 
        unsigned int trafficType : 1; 
        unsigned int transportType : 1; 
        unsigned int includeContingencyRoutes : 1; 
        unsigned int includeLaneGuidance : 1; 
        unsigned int includeNavigationInfo : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeTrafficAlongRoute : 1; 
        unsigned int includeZilchPoints : 1; 
    int _basicPointsToBeIncluded;
    } _has;
    BOOL _includeContingencyRoutes;
    BOOL _includeLaneGuidance;
    BOOL _includeNavigationInfo;
    BOOL _includePhonetics;
    BOOL _includeTrafficAlongRoute;
    BOOL _includeZilchPoints;
    NSString *_phoneticLocaleIdentifier;
    int _trafficType;
    int _transportType;
}

@property int basicPointsToBeIncluded;
@property BOOL hasBasicPointsToBeIncluded;
@property BOOL hasIncludeContingencyRoutes;
@property BOOL hasIncludeLaneGuidance;
@property BOOL hasIncludeNavigationInfo;
@property BOOL hasIncludePhonetics;
@property BOOL hasIncludeTrafficAlongRoute;
@property BOOL hasIncludeZilchPoints;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property BOOL hasTrafficType;
@property BOOL hasTransportType;
@property BOOL includeContingencyRoutes;
@property BOOL includeLaneGuidance;
@property BOOL includeNavigationInfo;
@property BOOL includePhonetics;
@property BOOL includeTrafficAlongRoute;
@property BOOL includeZilchPoints;
@property(retain) NSString * phoneticLocaleIdentifier;
@property int trafficType;
@property int transportType;

- (int)basicPointsToBeIncluded;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBasicPointsToBeIncluded;
- (BOOL)hasIncludeContingencyRoutes;
- (BOOL)hasIncludeLaneGuidance;
- (BOOL)hasIncludeNavigationInfo;
- (BOOL)hasIncludePhonetics;
- (BOOL)hasIncludeTrafficAlongRoute;
- (BOOL)hasIncludeZilchPoints;
- (BOOL)hasPhoneticLocaleIdentifier;
- (BOOL)hasTrafficType;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (BOOL)includeContingencyRoutes;
- (BOOL)includeLaneGuidance;
- (BOOL)includeNavigationInfo;
- (BOOL)includePhonetics;
- (BOOL)includeTrafficAlongRoute;
- (BOOL)includeZilchPoints;
- (BOOL)isEqual:(id)arg1;
- (id)phoneticLocaleIdentifier;
- (BOOL)readFrom:(id)arg1;
- (void)setBasicPointsToBeIncluded:(int)arg1;
- (void)setHasBasicPointsToBeIncluded:(BOOL)arg1;
- (void)setHasIncludeContingencyRoutes:(BOOL)arg1;
- (void)setHasIncludeLaneGuidance:(BOOL)arg1;
- (void)setHasIncludeNavigationInfo:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setHasIncludeTrafficAlongRoute:(BOOL)arg1;
- (void)setHasIncludeZilchPoints:(BOOL)arg1;
- (void)setHasTrafficType:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setIncludeContingencyRoutes:(BOOL)arg1;
- (void)setIncludeLaneGuidance:(BOOL)arg1;
- (void)setIncludeNavigationInfo:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setIncludeTrafficAlongRoute:(BOOL)arg1;
- (void)setIncludeZilchPoints:(BOOL)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setTrafficType:(int)arg1;
- (void)setTransportType:(int)arg1;
- (int)trafficType;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end