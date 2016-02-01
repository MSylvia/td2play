// This file is generated from a tiled tilemap!
#include <inttypes.h>
#include "image_data.h"
#include "asset_tilemap.h"

namespace TilemapAsset {
	using namespace TileMap;
// assets/testmap.tmx	
	TileMap::SceneBgFg<uint16_t> testmap() {
		static const uint8_t testmap_foreground[] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x04,0x04,0x04,0x08,0x04,0x04,0x04,
			0xff,0xff,0xff,0xff,0xff,0xff,0x10,0x15,0x05,0xff,0xff,0xff,0x05,0xff,0xff,0xff,
			0x04,0x04,0x08,0x04,0x04,0x10,0xff,0xff,0x15,0xff,0xff,0xff,0x05,0xff,0xff,0xff,
			0xff,0xff,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x05,0xff,0xff,0xff,
			0xff,0xff,0x05,0xff,0xff,0x03,0x03,0xff,0x03,0xff,0xff,0xff,0x05,0xff,0xff,0xff,
			0xff,0xff,0x05,0xff,0xff,0xff,0xff,0x05,0xff,0xff,0xff,0xff,0x05,0xff,0xff,0xff,
			0xff,0xff,0x05,0xff,0xff,0xff,0xff,0x05,0xff,0xff,0xff,0xff,0x05,0xff,0xff,0xff,
			
		};
		static const uint8_t testmap_background[] PROGMEM = {
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
			0x01,0x01,0x01,0x01,0x01,0x01,0x12,0x11,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
			0x00,0x00,0x02,0x00,0x00,0x20,0x21,0x34,0x25,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
			0x00,0x00,0x02,0x00,0x00,0x30,0x31,0x32,0x35,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
			0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
			0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
			
		};
		const ProgmemData foreground = ProgmemData(16, 8, testmap_foreground);
		const ProgmemData background = ProgmemData(16, 8, testmap_background);

		return TileMap::SceneBgFg<uint16_t>(
			background, foreground,
			TileSetBgFg<uint16_t>(
				Texture<uint16_t>(ImageAsset::tilemap), 
				Texture<uint16_t>(ImageAsset::tilemap), 
				3
			), 
			0
		);
	}
	
}
