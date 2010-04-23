//
//  MercatorProjection.h
//  MaptimizeKit
//
//  Created by Oleg Shnitko on 4/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

#import "Bounds.h"
#import "Tile.h"

@interface MercatorProjection : NSObject
{
@private
	
	NSUInteger _zoomLevel;
	double _offset;
	double _radius;
}

+ (NSUInteger)zoomLevelForRegion:(MKCoordinateRegion)region andViewport:(CGSize)viewport;

- (id)initWithZoomLevel:(NSUInteger)zoomLevel;
- (id)initWithRegion:(MKCoordinateRegion)region andViewport:(CGSize)viewport;

@property (nonatomic, readonly) NSUInteger zoomLevel;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) double radius;

- (double)longitudeToPixelSpaceX:(double)longitude;
- (double)latitudeToPixelSpaceY:(double)latitude;

- (double)pixelSpaceXToLongitude:(double)pixelX;
- (double)pixelSpaceYToLatitude:(double)pixelY;

- (TileRect)tileRectForRegion:(MKCoordinateRegion)region andViewport:(CGSize)viewport;

- (Bounds)boundsForTile:(TilePoint)tile;

@end
