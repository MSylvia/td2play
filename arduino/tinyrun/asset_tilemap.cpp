// This file is generated from a tiled tilemap!
#include <inttypes.h>
#include "image_data.h"
#include "asset_tilemap.h"

namespace TilemapAsset {
	using namespace TileMap;
// assets/el_01.tmx
	TileMap::Scene<uint16_t> el_01() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_01);
	};
// assets/el_02.tmx
	TileMap::Scene<uint16_t> el_02() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x03,0xff,0x04,0x01,0x00,0x01,
			0x10,0x10,0x12,0xff,0x14,0x10,0x10,0x10,
			0x10,0x10,0x12,0xff,0x14,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_02);
	};
// assets/el_03.tmx
	TileMap::Scene<uint16_t> el_03() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x02,0xff,0x04,0x02,0xff,0x04,
			0x10,0x10,0x12,0xff,0x14,0x13,0xff,0x14,
			0x10,0x10,0x13,0xff,0x15,0x13,0xff,0x14,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_03);
	};
// assets/el_04.tmx
	TileMap::Scene<uint16_t> el_04() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x00,0x00,0xff,0xff,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x04,0x03,0xff,0xff,0xff,
			0x00,0x01,0x01,0x24,0x23,0x01,0x01,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_04);
	};
// assets/el_05.tmx
	TileMap::Scene<uint16_t> el_05() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0x00,0xff,0xff,0xff,
			0xff,0xff,0xff,0x00,0x00,0x00,0xff,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0x07,0xff,0xff,0xff,
			0xff,0xff,0xff,0x05,0x27,0x02,0xff,0xff,
			0x00,0x01,0x01,0x25,0x10,0x23,0x01,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_05);
	};
// assets/el_06.tmx
	TileMap::Scene<uint16_t> el_06() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x03,0xff,0xff,0x04,0x00,0x01,
			0x10,0x10,0x12,0xff,0xff,0x14,0x10,0x10,
			0x10,0x10,0x12,0xff,0xff,0x14,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_06);
	};
// assets/skymap.tmx
	TileMap::Scene<uint16_t> skymap() {
		static const uint8_t layerdata[1][256] PROGMEM = {
			{0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
			0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
			0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,
			0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,
			0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,
			0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,
			0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,
			0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,
			0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,
			0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,
			0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,
			0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,
			0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,
			0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,
			0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,
			0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(16,16,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_sky),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setName(ID::skymap);
	};

}
