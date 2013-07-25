#ifndef __LIBM2_GAME_MISC_HPP
#define __LIBM2_GAME_MISC_HPP
namespace libm2{
enum e_overtime {OT_NONE, OT_3HOUR, OT_5HOUR};
enum EDamageType {
    DAMAGE_TYPE_NONE,
    DAMAGE_TYPE_NORMAL,
    DAMAGE_TYPE_NORMAL_RANGE,
    DAMAGE_TYPE_MELEE,
    DAMAGE_TYPE_RANGE,
    DAMAGE_TYPE_FIRE,
    DAMAGE_TYPE_ICE,
    DAMAGE_TYPE_ELEC,
    DAMAGE_TYPE_MAGIC,
    DAMAGE_TYPE_POISON,
    DAMAGE_TYPE_SPECIAL
};
enum EAffectTypes {
    AFFECT_NONE,
    AFFECT_MOV_SPEED = 200,
    AFFECT_ATT_SPEED,
    AFFECT_ATT_GRADE,
    AFFECT_INVISIBILITY,
    AFFECT_STR,
    AFFECT_DEX,
    AFFECT_CON,
    AFFECT_INT,
    AFFECT_FISH_MIND_PILL,
    AFFECT_POISON,
    AFFECT_STUN,
    AFFECT_SLOW,
    AFFECT_DUNGEON_READY,
    AFFECT_DUNGEON_UNIQUE,
    AFFECT_BUILDING,
    AFFECT_REVIVE_INVISIBLE,
    AFFECT_FIRE,
    AFFECT_CAST_SPEED,
    AFFECT_HP_RECOVER_CONTINUE,
    AFFECT_SP_RECOVER_CONTINUE,
    AFFECT_POLYMORPH,
    AFFECT_MOUNT,
    AFFECT_WAR_FLAG,
    AFFECT_BLOCK_CHAT,
    AFFECT_CHINA_FIREWORK,
    AFFECT_BOW_DISTANCE,
    AFFECT_DEF_GRADE,
    AFFECT_PREMIUM_START = 500,
    AFFECT_EXP_BONUS = 500,
    AFFECT_ITEM_BONUS,
    AFFECT_SAFEBOX,
    AFFECT_AUTOLOOT,
    AFFECT_FISH_MIND,
    AFFECT_MARRIAGE_FAST,
    AFFECT_GOLD_BONUS,
    AFFECT_PREMIUM_END = 509,
    AFFECT_MALL,
    AFFECT_NO_DEATH_PENALTY,
    AFFECT_SKILL_BOOK_BONUS,
    AFFECT_SKILL_NO_BOOK_DELAY,
    AFFECT_HAIR, AFFECT_COLLECT,
    AFFECT_EXP_BONUS_EURO_FREE,
    AFFECT_EXP_BONUS_EURO_FREE_UNDER_15,
    AFFECT_UNIQUE_ABILITY,
    AFFECT_CUBE_1, AFFECT_CUBE_2, AFFECT_CUBE_3,
    AFFECT_CUBE_4, AFFECT_CUBE_5, AFFECT_CUBE_6,
    AFFECT_CUBE_7, AFFECT_CUBE_8, AFFECT_CUBE_9,
    AFFECT_CUBE_10, AFFECT_CUBE_11, AFFECT_CUBE_12,
    AFFECT_BLEND,
    AFFECT_HORSE_NAME,
    AFFECT_MOUNT_BONUS,
    AFFECT_AUTO_HP_RECOVERY,
    AFFECT_AUTO_SP_RECOVERY,
    AFFECT_RAMADAN_ABILITY = 300,
    AFFECT_RAMADAN_RING,
    AFFECT_NOG_ABILITY,
    AFFECT_HOLLY_STONE_POWER,
    AFFECT_QUEST_START_IDX = 1000
};
int get_global_time();
const char* locale_find(const char*);
}
#endif // __LIBM2_GAME_MISC_HPP
