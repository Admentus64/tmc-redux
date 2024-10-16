#include "game.h"
#include "itemMetaData.h"
#include "item.h"
#include "message.h"

const ItemMetaData gItemMetaData[] = {
    [ITEM_NONE] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_SMITH_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x1u, TEXT_ITEM_GET, 0x1u, 0x5u },
    [ITEM_GREEN_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x2u, TEXT_ITEM_GET, 0x2u, 0x5u },
    [ITEM_RED_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x3u, TEXT_ITEM_GET, 0x3u, 0x5u },
    [ITEM_BLUE_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x4u, TEXT_ITEM_GET, 0x4u, 0x5u },
    [ITEM_UNUSED_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x5u, TEXT_ITEM_GET, 0x5u, 0x5u },
    [ITEM_FOURSWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x6u, TEXT_ITEM_GET, 0x6u, 0x5u },
    [ITEM_BOMBS] = { MENU_SLOT_BOMBS, 0x7u, 0x63u, 0u, 0x1cu, TEXT_ITEM_GET, 0x1cu, 0x5u },
    [ITEM_REMOTE_BOMBS] = { MENU_SLOT_BOMBS, 0x7u, 0x63u, 0u, 0x8u, TEXT_ITEM_GET, 0x8u, 0x5u },
    [ITEM_BOW] = { MENU_SLOT_BOW, 0xbu, 0x63u, 0u, 0x9u, TEXT_ITEM_GET, 0x9u, 0x5u },
    [ITEM_LIGHT_ARROW] = { MENU_SLOT_BOW, 0xbu, 0x63u, 0u, 0xau, TEXT_ITEM_GET, 0xau, 0x5u },
    [ITEM_BOOMERANG] = { MENU_SLOT_BOOMERANG, 0x12u, 0u, 0u, 0xbu, TEXT_ITEM_GET, 0xbu, 0x5u },
    [ITEM_MAGIC_BOOMERANG] = { MENU_SLOT_BOOMERANG, 0x12u, 0u, 0u, 0xcu, TEXT_ITEM_GET, 0xcu, 0x5u },
    [ITEM_SHIELD] = { MENU_SLOT_SHIELD, 0u, 0u, 0u, 0xdu, TEXT_ITEM_GET, 0xdu, 0x5u },
    [ITEM_MIRROR_SHIELD] = { MENU_SLOT_SHIELD, 0u, 0u, 0u, 0xeu, TEXT_ITEM_GET, 0xeu, 0x5u },
    [ITEM_LANTERN_OFF] = { MENU_SLOT_LANTERN, 0u, 0u, 0u, 0xfu, TEXT_ITEM_GET, 0xfu, 0x5u },
    [ITEM_LANTERN_ON] = { MENU_SLOT_LANTERN, 0u, 0u, 0u, 0x10u, TEXT_ITEM_GET, 0x10u, 0x5u },
    [ITEM_GUST_JAR] = { MENU_SLOT_GUST_JAR, 0u, 0u, 0u, 0x11u, TEXT_ITEM_GET, 0x11u, 0x5u },
    [ITEM_PACCI_CANE] = { MENU_SLOT_CANE, 0u, 0u, 0u, 0x12u, TEXT_ITEM_GET, 0x12u, 0x5u },
    [ITEM_MOLE_MITTS] = { MENU_SLOT_MOLE_MITTS, 0u, 0u, 0u, 0x13u, TEXT_ITEM_GET, 0x13u, 0x5u },
    [ITEM_ROCS_CAPE] = { MENU_SLOT_ROCS_CAPE, 0u, 0u, 0u, 0x14u, TEXT_ITEM_GET, 0x14u, 0x5u },
    [ITEM_PEGASUS_BOOTS] = { MENU_SLOT_PEGASUS_BOOTS, 0u, 0u, 0u, 0x15u, TEXT_ITEM_GET, 0x15u, 0x5u },
    [ITEM_FIRE_ROD] = { 0x63u, 0u, 0u, 0u, 0x16u, TEXT_ITEM_GET, 0x16u, 0x5u },
    [ITEM_OCARINA] = { MENU_SLOT_OCARINA, 0u, 0u, 0u, 0x17u, TEXT_ITEM_GET, 0x17u, 0x5u },
    [ITEM_ORB_GREEN] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_ORB_BLUE] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_ORB_RED] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_TRY_PICKUP_OBJECT] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_BOTTLE1] = { MENU_SLOT_BOTTLE0, 0x3u, 0u, 0x1u, 0x20u, TEXT_ITEM_GET, 0x20u, 0x5u },
    [ITEM_BOTTLE2] = { MENU_SLOT_BOTTLE1, 0x3u, 0u, 0x1u, 0x20u, TEXT_ITEM_GET, 0x20u, 0x5u },
    [ITEM_BOTTLE3] = { MENU_SLOT_BOTTLE2, 0x3u, 0u, 0x1u, 0x20u, TEXT_ITEM_GET, 0x20u, 0x5u },
    [ITEM_BOTTLE4] = { MENU_SLOT_BOTTLE3, 0x3u, 0u, 0x1u, 0x20u, TEXT_ITEM_GET, 0x20u, 0x5u },
    [ITEM_BOTTLE_EMPTY] = { 0u, 0u, 0u, 0x3u, 0x20u, TEXT_ITEM_GET, 0x20u, 0x5u },
    [ITEM_BOTTLE_BUTTER] = { 0u, 0x4u, 0u, 0x3u, 0x21u, TEXT_ITEM_GET, 0x21u, 0x5u },
    [ITEM_BOTTLE_MILK] = { 0u, 0x4u, 0u, 0x3u, 0x22u, TEXT_ITEM_GET, 0x22u, 0x5u },
    [ITEM_BOTTLE_HALF_MILK] = { 0u, 0x4u, 0u, 0x3u, 0x23u, TEXT_ITEM_GET, 0x23u, 0x5u },
    [ITEM_BOTTLE_RED_POTION] = { 0u, 0x4u, 0u, 0x3u, 0x24u, TEXT_ITEM_GET, 0x24u, 0x5u },
    [ITEM_BOTTLE_BLUE_POTION] = { 0u, 0x4u, 0u, 0x3u, 0x25u, TEXT_ITEM_GET, 0x25u, 0x5u },
    [ITEM_BOTTLE_WATER] = { 0u, 0x4u, 0u, 0x3u, 0x26u, TEXT_ITEM_GET, 0x26u, 0x5u },
    [ITEM_BOTTLE_MINERAL_WATER] = { 0u, 0x4u, 0u, 0x3u, 0x27u, TEXT_ITEM_GET, 0x27u, 0x5u },
    [ITEM_BOTTLE_FAIRY] = { 0u, 0x4u, 0u, 0x3u, 0x28u, TEXT_ITEM_GET, 0x28u, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_RED] = { 0u, 0x4u, 0u, 0x3u, 0x29u, TEXT_ITEM_GET, 0x29u, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_ORANGE] = { 0u, 0x4u, 0u, 0x3u, 0x2au, TEXT_ITEM_GET, 0x2au, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_YELLOW] = { 0u, 0x4u, 0u, 0x3u, 0x2bu, TEXT_ITEM_GET, 0x2bu, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_GREEN] = { 0u, 0x4u, 0u, 0x3u, 0x2cu, TEXT_ITEM_GET, 0x2cu, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_BLUE] = { 0u, 0x4u, 0u, 0x3u, 0x2du, TEXT_ITEM_GET, 0x2du, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_WHITE] = { 0u, 0x4u, 0u, 0x3u, 0x2eu, TEXT_ITEM_GET, 0x2eu, 0x5u },
    [BOTTLE_CHARM_NAYRU] = { 0u, 0x4u, 0u, 0x3u, 0x2fu, TEXT_ITEM_GET, 0x2fu, 0x5u },
    [BOTTLE_CHARM_FARORE] = { 0u, 0x4u, 0u, 0x3u, 0x30u, TEXT_ITEM_GET, 0x30u, 0x5u },
    [BOTTLE_CHARM_DIN] = { 0u, 0x4u, 0u, 0x3u, 0x31u, TEXT_ITEM_GET, 0x31u, 0x5u },
    [ITEM_32] = { 0u, 0u, 0u, 0u, 0x32u, TEXT_ITEM_GET, 0x32u, 0x5u },
    [ITEM_33] = { 0u, 0u, 0u, 0u, 0x33u, TEXT_ITEM_GET, 0x33u, 0x5u },
    [ITEM_QST_SWORD] = { 0x1u, 0u, 0u, 0u, 0x34u, TEXT_ITEM_GET, 0x34u, 0x5u },
    [ITEM_QST_BROKEN_SWORD] = { 0x1u, 0u, 0u, 0u, 0x35u, TEXT_ITEM_GET, 0x35u, 0x5u },
    [ITEM_QST_DOGFOOD] = { 0x1u, 0u, 0u, 0u, 0x36u, TEXT_ITEM_GET, 0x36u, 0x5u },
    [ITEM_QST_LONLON_KEY] = { 0x1u, 0u, 0u, 0x1u, 0x37u, TEXT_ITEM_GET, 0x37u, 0x5u },
    [ITEM_QST_MUSHROOM] = { 0x1u, 0u, 0u, 0u, 0x38u, TEXT_ITEM_GET, 0x38u, 0x5u },
    [ITEM_QST_BOOK1] = { 0x1u, 0u, 0u, 0u, 0x39u, TEXT_ITEM_GET, 0x39u, 0x5u },
    [ITEM_QST_BOOK2] = { 0x1u, 0u, 0u, 0u, 0x3au, TEXT_ITEM_GET, 0x3au, 0x5u },
    [ITEM_QST_BOOK3] = { 0x1u, 0u, 0u, 0u, 0x3bu, TEXT_ITEM_GET, 0x3bu, 0x5u },
    [ITEM_QST_GRAVEYARD_KEY] = { 0x1u, 0u, 0u, 0u, 0x3du, TEXT_ITEM_GET, 0x3du, 0x5u },
    [ITEM_QST_TINGLE_TROPHY] = { 0u, 0u, 0u, 0u, 0x95u, TEXT_ITEM_GET, 0x95u, 0x5u },
    [ITEM_QST_CARLOV_MEDAL] = { 0x3u, 0u, 0u, 0u, 0x96u, TEXT_ITEM_GET, 0x96u, 0x5u },
    [ITEM_SHELLS] = { 0x3u, 0xeu, 0x1u, 0u, 0x3eu, TEXT_ITEM_GET, 0x77u, 0x5u },
    [ITEM_EARTH_ELEMENT] = { 0x9u, 0u, 0u, 0x2u, 0x40u, TEXT_ITEM_GET, 0x40u, 0x5u },
    [ITEM_FIRE_ELEMENT] = { 0xau, 0u, 0u, 0x2u, 0x41u, TEXT_ITEM_GET, 0x41u, 0x5u },
    [ITEM_WATER_ELEMENT] = { 0xbu, 0u, 0u, 0x2u, 0x42u, TEXT_ITEM_GET, 0x42u, 0x5u },
    [ITEM_WIND_ELEMENT] = { 0xcu, 0u, 0u, 0x2u, 0x43u, TEXT_ITEM_GET, 0x43u, 0x5u },
    [ITEM_GRIP_RING] = { 0xdu, 0u, 0u, 0u, 0x44u, TEXT_ITEM_GET, 0x44u, 0x5u },
    [ITEM_POWER_BRACELETS] = { 0xeu, 0u, 0u, 0u, 0x45u, TEXT_ITEM_GET, 0x45u, 0x5u },
    [ITEM_FLIPPERS] = { 0xfu, 0u, 0u, 0u, 0x46u, TEXT_ITEM_GET, 0x46u, 0x5u },
    [ITEM_MAP] = { 0x63u, 0u, 0u, 0u, 0x47u, TEXT_ITEM_GET, 0x47u, 0x5u },
    [ITEM_SKILL_SPIN_ATTACK] = { 0u, 0u, 0u, 0u, 0x48u, TEXT_ITEM_GET, 0x48u, 0x5u },
    [ITEM_SKILL_ROLL_ATTACK] = { 0u, 0u, 0u, 0u, 0x49u, TEXT_ITEM_GET, 0x49u, 0x5u },
    [ITEM_SKILL_DASH_ATTACK] = { 0u, 0u, 0u, 0u, 0x4au, TEXT_ITEM_GET, 0x4au, 0x5u },
    [ITEM_SKILL_ROCK_BREAKER] = { 0u, 0u, 0u, 0u, 0x4bu, TEXT_ITEM_GET, 0x4bu, 0x5u },
    [ITEM_SKILL_SWORD_BEAM] = { 0u, 0u, 0u, 0u, 0x4cu, TEXT_ITEM_GET, 0x4cu, 0x5u },
    [ITEM_SKILL_GREAT_SPIN] = { 0u, 0u, 0u, 0u, 0x4du, TEXT_ITEM_GET, 0x4du, 0x5u },
    [ITEM_SKILL_DOWN_THRUST] = { 0u, 0u, 0u, 0u, 0x4eu, TEXT_ITEM_GET, 0x4eu, 0x5u },
    [ITEM_SKILL_PERIL_BEAM] = { 0u, 0u, 0u, 0u, 0x4fu, TEXT_ITEM_GET, 0x4fu, 0x5u },
    [ITEM_DUNGEON_MAP] = { 0u, 0x6u, 0x1u, 0x2u, 0x50u, TEXT_ITEM_GET, 0x50u, 0x5u },
    [ITEM_COMPASS] = { 0u, 0x6u, 0x2u, 0x2u, 0x51u, TEXT_ITEM_GET, 0x51u, 0x5u },
    [ITEM_BIG_KEY] = { 0u, 0x6u, 0x4u, 0x2u, 0x52u, TEXT_ITEM_GET, 0x52u, 0x5u },
    [ITEM_SMALL_KEY] = { 0u, 0x5u, 0u, 0x1u, 0x53u, TEXT_ITEM_GET, 0x53u, 0x5u },
    [ITEM_RUPEE1] = { 0u, 0x2u, 0u, 0x1u, 0x54u, TEXT_ITEM_GET, 0x54u, 0x5u },
    [ITEM_RUPEE5] = { 0u, 0x2u, 0x1u, 0x1u, 0x55u, TEXT_ITEM_GET, 0x55u, 0x5u },
    [ITEM_RUPEE20] = { 0u, 0x2u, 0x2u, 0x1u, 0x56u, TEXT_ITEM_GET, 0x56u, 0x5u },
    [ITEM_RUPEE50] = { 0u, 0x2u, 0x3u, 0u, 0x57u, TEXT_ITEM_GET, 0x57u, 0x5u },
    [ITEM_RUPEE100] = { 0u, 0x2u, 0x4u, 0u, 0x58u, TEXT_ITEM_GET, 0x58u, 0x5u },
    [ITEM_RUPEE200] = { 0u, 0x2u, 0x5u, 0u, 0x59u, TEXT_ITEM_GET, 0x59u, 0x5u },
    [ITEM_5A] = { 0u, 0u, 0u, 0u, 0x5au, TEXT_ITEM_GET, 0x5au, 0x5u },
    [ITEM_JABBERNUT] = { 0u, 0u, 0u, 0x1u, 0x5bu, TEXT_ITEM_GET, 0x5bu, 0x5u },
    [ITEM_KINSTONE] = { 0u, 0xfu, 0u, 0x1u, 0x5cu, TEXT_ITEM_GET, 0x5cu, 0x5u },
    [ITEM_BOMBS5] = { 0u, 0x9u, 0x5u, 0x1u, 0x5du, TEXT_ITEM_GET, 0x5du, 0x5u },
    [ITEM_ARROWS5] = { 0u, 0xcu, 0x5u, 0x1u, 0x5eu, TEXT_ITEM_GET, 0x5eu, 0x5u },
    [ITEM_HEART] = { 0u, 0x1u, 0x8u, 0x1u, 0x5fu, TEXT_ITEM_GET, 0x5fu, 0x5u },
    [ITEM_FAIRY] = { 0u, 0x1u, 0x20u, 0x1u, 0x60u, TEXT_ITEM_GET, 0x60u, 0x5u },
    [ITEM_SHELLS30] = { 0u, 0xeu, 0x1eu, 0u, 0x3fu, TEXT_ITEM_GET, 0x3fu, 0x5u },
    [ITEM_HEART_CONTAINER] = { 0u, 0u, 0x1u, 0x2u, 0x62u, TEXT_ITEM_GET, 0x62u, 0x5u },
    [ITEM_HEART_PIECE] = { 0u, 0u, 0x1u, 0x3u, 0x18u, TEXT_ITEM_GET, 0x18u, 0x5u },
    [ITEM_WALLET] = { 0u, 0x10u, 0u, 0x2u, 0x64u, TEXT_ITEM_GET, 0x64u, 0x5u },
    [ITEM_BOMBBAG] = { 0u, 0x8u, 0x63u, 0x3u, 0x7u, TEXT_ITEM_GET, 0x63u, 0x5u },
    [ITEM_LARGE_QUIVER] = { 0u, 0xau, 0x63u, 0x3u, 0x66u, TEXT_ITEM_GET, 0x66u, 0x5u },
    [ITEM_KINSTONE_BAG] = { 0u, 0xdu, 0u, 0u, 0x67u, TEXT_ITEM_GET, 0x67u, 0x5u },
    [ITEM_BRIOCHE] = { 0u, 0u, 0u, 0x2u, 0x68u, TEXT_ITEM_GET, 0x68u, 0x5u },
    [ITEM_CROISSANT] = { 0u, 0u, 0u, 0x2u, 0x69u, TEXT_ITEM_GET, 0x69u, 0x5u },
    [ITEM_PIE] = { 0u, 0u, 0u, 0x2u, 0x6au, TEXT_ITEM_GET, 0x6au, 0x5u },
    [ITEM_CAKE] = { 0u, 0u, 0u, 0x2u, 0x6bu, TEXT_ITEM_GET, 0x6bu, 0x5u },
    [ITEM_BOMBS10] = { 0u, 0x9u, 0xau, 0x2u, 0x6cu, TEXT_ITEM_GET, 0x6cu, 0x5u },
    [ITEM_BOMBS30] = { 0u, 0x9u, 0x1eu, 0x2u, 0x6du, TEXT_ITEM_GET, 0x6du, 0x5u },
    [ITEM_ARROWS10] = { 0u, 0xcu, 0xau, 0x2u, 0x6eu, TEXT_ITEM_GET, 0x6eu, 0x5u },
    [ITEM_ARROWS30] = { 0u, 0xcu, 0x1eu, 0x2u, 0x6fu, TEXT_ITEM_GET, 0x6fu, 0x5u },
    [ITEM_ARROW_BUTTERFLY] = { 0x63u, 0u, 0u, 0x3u, 0x70u, TEXT_ITEM_GET, 0x70u, 0x5u },
    [ITEM_DIG_BUTTERFLY] = { 0x63u, 0u, 0u, 0x3u, 0x71u, TEXT_ITEM_GET, 0x71u, 0x5u },
    [ITEM_SWIM_BUTTERFLY] = { 0x63u, 0u, 0u, 0x3u, 0x72u, TEXT_ITEM_GET, 0x72u, 0x5u },
    [ITEM_SKILL_FAST_SPIN] = { 0x63u, 0u, 0u, 0x2u, 0x73u, TEXT_ITEM_GET, 0x73u, 0x5u },
    [ITEM_SKILL_FAST_SPLIT] = { 0x63u, 0u, 0u, 0x2u, 0x74u, TEXT_ITEM_GET, 0x74u, 0x5u },
    [ITEM_SKILL_LONG_SPIN] = { 0x63u, 0u, 0u, 0x2u, 0x75u, TEXT_ITEM_GET, 0x75u, 0x5u },
};

// TODO Shop price and item get message
const struct_080FD964 gUnk_080FD964[] = {
    [ITEM_NONE] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x1) },
    [ITEM_SMITH_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x1) },
    [ITEM_GREEN_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x2) },
    [ITEM_RED_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x3) },
    [ITEM_BLUE_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4) },
    [ITEM_UNUSED_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5) },
    [ITEM_FOURSWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x6) },
    [ITEM_BOMBS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x1c) },
    [ITEM_REMOTE_BOMBS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x8) },
    [ITEM_BOW] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x9) },
    [ITEM_LIGHT_ARROW] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0xa) },
    [ITEM_BOOMERANG] = { 300, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x24), TEXT_INDEX(TEXT_ITEM_GET, 0xb) },
    [ITEM_MAGIC_BOOMERANG] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0xc) },
    [ITEM_SHIELD] = { 40, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x02), TEXT_INDEX(TEXT_ITEM_GET, 0x1d) },
    [ITEM_MIRROR_SHIELD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0xe) },
    [ITEM_LANTERN_OFF] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0xf) },
    [ITEM_LANTERN_ON] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x10) },
    [ITEM_GUST_JAR] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x11) },
    [ITEM_PACCI_CANE] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x12) },
    [ITEM_MOLE_MITTS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x13) },
    [ITEM_ROCS_CAPE] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x14) },
    [ITEM_PEGASUS_BOOTS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x15) },
    [ITEM_FIRE_ROD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x16) },
    [ITEM_OCARINA] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x17) },
    [ITEM_ORB_GREEN] = { 0, 0, 0x0, 0x0 },
    [ITEM_ORB_BLUE] = { 0, 0, 0x0, 0x0 },
    [ITEM_ORB_RED] = { 0, 0, 0x0, 0x0 },
    [ITEM_TRY_PICKUP_OBJECT] = { 0, 0, 0x0, 0x0 },
    [ITEM_BOTTLE1] = { 100, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x20) },
    [ITEM_BOTTLE2] = { 100, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x06), TEXT_INDEX(TEXT_ITEM_GET, 0x20) },
    [ITEM_BOTTLE3] = { 100, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x20) },
    [ITEM_BOTTLE4] = { 100, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x20) },
    [ITEM_BOTTLE_EMPTY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x20) },
    [ITEM_BOTTLE_BUTTER] = { 120, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x21) },
    [ITEM_BOTTLE_MILK] = { 100, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x22) },
    [ITEM_BOTTLE_HALF_MILK] = { 60, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x23) },
    [ITEM_BOTTLE_RED_POTION] = { 150, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x24) },
    [ITEM_BOTTLE_BLUE_POTION] = { 60, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x25) },
    [ITEM_BOTTLE_WATER] = { 1, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x26) },
    [ITEM_BOTTLE_MINERAL_WATER] = { 5, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x27) },
    [ITEM_BOTTLE_FAIRY] = { 7, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x28) },
#ifdef EU
    [ITEM_BOTTLE_PICOLYTE_RED] = { 100, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x01), TEXT_INDEX(TEXT_ITEM_GET, 0x29) },
    [ITEM_BOTTLE_PICOLYTE_ORANGE] = { 300, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x06), TEXT_INDEX(TEXT_ITEM_GET, 0x2a) },
    [ITEM_BOTTLE_PICOLYTE_YELLOW] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x04), TEXT_INDEX(TEXT_ITEM_GET, 0x2b) },
    [ITEM_BOTTLE_PICOLYTE_GREEN] = { 100, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x03), TEXT_INDEX(TEXT_ITEM_GET, 0x2c) },
    [ITEM_BOTTLE_PICOLYTE_BLUE] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x05), TEXT_INDEX(TEXT_ITEM_GET, 0x2d) },
    [ITEM_BOTTLE_PICOLYTE_WHITE] = { 100, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x02), TEXT_INDEX(TEXT_ITEM_GET, 0x2e) },
#else
    [ITEM_BOTTLE_PICOLYTE_RED] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x01), TEXT_INDEX(TEXT_ITEM_GET, 0x29) },
    [ITEM_BOTTLE_PICOLYTE_ORANGE] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x06), TEXT_INDEX(TEXT_ITEM_GET, 0x2a) },
    [ITEM_BOTTLE_PICOLYTE_YELLOW] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x04), TEXT_INDEX(TEXT_ITEM_GET, 0x2b) },
    [ITEM_BOTTLE_PICOLYTE_GREEN] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x03), TEXT_INDEX(TEXT_ITEM_GET, 0x2c) },
    [ITEM_BOTTLE_PICOLYTE_BLUE] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x05), TEXT_INDEX(TEXT_ITEM_GET, 0x2d) },
    [ITEM_BOTTLE_PICOLYTE_WHITE] = { 200, 0, TEXT_INDEX(TEXT_PICOLYTE, 0x02), TEXT_INDEX(TEXT_ITEM_GET, 0x2e) },
#endif
    [BOTTLE_CHARM_NAYRU] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x2f) },
    [BOTTLE_CHARM_FARORE] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x30) },
    [BOTTLE_CHARM_DIN] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x31) },
    [ITEM_32] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x32) },
    [ITEM_33] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x33) },
    [ITEM_QST_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x34) },
    [ITEM_QST_BROKEN_SWORD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x35) },
    [ITEM_QST_DOGFOOD] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x36) },
    [ITEM_QST_LONLON_KEY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x37) },
    [ITEM_QST_MUSHROOM] = { 60, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x38) },
    [ITEM_QST_BOOK1] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x39) },
    [ITEM_QST_BOOK2] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x3a) },
    [ITEM_QST_BOOK3] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x3b) },
    [ITEM_QST_GRAVEYARD_KEY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x3d) },
    [ITEM_QST_TINGLE_TROPHY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x95) },
    [ITEM_QST_CARLOV_MEDAL] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x96) },
    [ITEM_SHELLS] = { 15, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x05), TEXT_INDEX(TEXT_ITEM_GET, 0x77) },
    [ITEM_EARTH_ELEMENT] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x40) },
    [ITEM_FIRE_ELEMENT] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x41) },
    [ITEM_WATER_ELEMENT] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x42) },
    [ITEM_WIND_ELEMENT] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x43) },
    [ITEM_GRIP_RING] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x44) },
    [ITEM_POWER_BRACELETS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x45) },
    [ITEM_FLIPPERS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x46) },
    [ITEM_MAP] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x47) },
    [ITEM_SKILL_SPIN_ATTACK] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x48) },
    [ITEM_SKILL_ROLL_ATTACK] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x49) },
    [ITEM_SKILL_DASH_ATTACK] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4a) },
    [ITEM_SKILL_ROCK_BREAKER] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4b) },
    [ITEM_SKILL_SWORD_BEAM] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4c) },
    [ITEM_SKILL_GREAT_SPIN] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4d) },
    [ITEM_SKILL_DOWN_THRUST] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4e) },
    [ITEM_SKILL_PERIL_BEAM] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x4f) },
    [ITEM_DUNGEON_MAP] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x50) },
    [ITEM_COMPASS] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x51) },
    [ITEM_BIG_KEY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x52) },
    [ITEM_SMALL_KEY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x53) },
    [ITEM_RUPEE1] = { 1, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x54) },
    [ITEM_RUPEE5] = { 5, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x55) },
    [ITEM_RUPEE20] = { 20, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x56) },
    [ITEM_RUPEE50] = { 50, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x57) },
    [ITEM_RUPEE100] = { 100, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x58) },
    [ITEM_RUPEE200] = { 200, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x59) },
    [ITEM_5A] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5a) },
    [ITEM_JABBERNUT] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5b) },
    [ITEM_KINSTONE] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5c) },
    [ITEM_BOMBS5] = { 15, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5d) },
    [ITEM_ARROWS5] = { 15, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5e) },
    [ITEM_HEART] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x5f) },
    [ITEM_FAIRY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x60) },
#ifdef EU
    [ITEM_SHELLS30] = { 300, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x05), TEXT_INDEX(TEXT_ITEM_GET, 0x76) },
#else
    [ITEM_SHELLS30] = { 200, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x05), TEXT_INDEX(TEXT_ITEM_GET, 0x76) },
#endif
    [ITEM_HEART_CONTAINER] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x62) },
    [ITEM_HEART_PIECE] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x18) },
    [ITEM_WALLET] = { 80, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x04), TEXT_INDEX(TEXT_ITEM_GET, 0x64) },
#ifdef EU
    [ITEM_BOMBBAG] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x07) },
#else
    [ITEM_BOMBBAG] = { 600, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x25), TEXT_INDEX(TEXT_ITEM_GET, 0x63) },
#endif
    [ITEM_LARGE_QUIVER] = { 600, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x07), TEXT_INDEX(TEXT_ITEM_GET, 0x66) },
    [ITEM_KINSTONE_BAG] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x67) },
    [ITEM_BRIOCHE] = { 20, 0, TEXT_INDEX(TEXT_BAKERY, 0x01), TEXT_INDEX(TEXT_ITEM_GET, 0x68) },
    [ITEM_CROISSANT] = { 30, 0, TEXT_INDEX(TEXT_BAKERY, 0x0a), TEXT_INDEX(TEXT_ITEM_GET, 0x69) },
    [ITEM_PIE] = { 40, 0, TEXT_INDEX(TEXT_BAKERY, 0x0b), TEXT_INDEX(TEXT_ITEM_GET, 0x6a) },
    [ITEM_CAKE] = { 60, 0, TEXT_INDEX(TEXT_BAKERY, 0x0c), TEXT_INDEX(TEXT_ITEM_GET, 0x6b) },
    [ITEM_BOMBS10] = { 30, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x03), TEXT_INDEX(TEXT_ITEM_GET, 0x91) },
    [ITEM_BOMBS30] = { 80, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x09), TEXT_INDEX(TEXT_ITEM_GET, 0x92) },
    [ITEM_ARROWS10] = { 20, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x08), TEXT_INDEX(TEXT_ITEM_GET, 0x93) },
    [ITEM_ARROWS30] = { 50, 0, TEXT_INDEX(TEXT_STOCKWELL, 0x0a), TEXT_INDEX(TEXT_ITEM_GET, 0x94) },
    [ITEM_ARROW_BUTTERFLY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x70) },
    [ITEM_DIG_BUTTERFLY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x71) },
    [ITEM_SWIM_BUTTERFLY] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x72) },
    [ITEM_SKILL_FAST_SPIN] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x73) },
    [ITEM_SKILL_FAST_SPLIT] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x74) },
    [ITEM_SKILL_LONG_SPIN] = { 0, 0, 0x0, TEXT_INDEX(TEXT_ITEM_GET, 0x75) },

};
