#include "defines.h"

//tables

const u16 sound_moves[] = {MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_CHATTER, MOVE_CLANGING_SCALES, MOVE_CONFIDE,
        MOVE_DISARMING_VOICE, MOVE_ECHOED_VOICE, MOVE_GRASS_WHISTLE, MOVE_GROWL, MOVE_HYPER_VOICE, MOVE_METAL_SOUND,
        MOVE_NOBLE_ROAR, MOVE_PARTING_SHOT, MOVE_PERISH_SONG, MOVE_RELIC_SONG, MOVE_ROAR, MOVE_ROUND, MOVE_SCREECH,
        MOVE_SING, MOVE_SNARL, MOVE_SNORE, MOVE_SPARKLING_ARIA, MOVE_SUPERSONIC, MOVE_UPROAR, 0xFFFF};
const u16 powder_moves[] = {MOVE_COTTON_SPORE, MOVE_POISON_POWDER, MOVE_POWDER, /*MOVE_RAGE_POWDER,*/ MOVE_SLEEP_POWDER,
        MOVE_SPORE, MOVE_STUN_SPORE, 0xFFFF};
const u16 ball_bomb_moves[] = {MOVE_ACID_SPRAY, MOVE_AURA_SPHERE, MOVE_BARRAGE, MOVE_BULLET_SEED, MOVE_EGG_BOMB,
        MOVE_ELECTRO_BALL, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_GYRO_BALL, MOVE_ICE_BALL, MOVE_MAGNET_BOMB,
        MOVE_MIST_BALL, MOVE_MUD_BOMB, MOVE_OCTAZOOKA, MOVE_ROCK_WRECKER, MOVE_SEARING_SHOT, MOVE_SEED_BOMB,
        MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_ZAP_CANNON, MOVE_POLLEN_PUFF, MOVE_BEAK_BLAST, 0xFFFF};
const u16 reckless_moves_table[] = {MOVE_BRAVE_BIRD, MOVE_DOUBLEEDGE, MOVE_FLARE_BLITZ, MOVE_HEAD_CHARGE,
        MOVE_HEAD_SMASH, MOVE_HIGH_JUMP_KICK, MOVE_JUMP_KICK, MOVE_SUBMISSION, MOVE_TAKE_DOWN, MOVE_LIGHT_OF_RUIN,
        MOVE_VOLT_TACKLE, MOVE_WOOD_HAMMER, MOVE_WILD_CHARGE, 0xFFFF};
const u16 ironfist_moves_table[] = {MOVE_BULLET_PUNCH, MOVE_COMET_PUNCH, MOVE_DIZZY_PUNCH, MOVE_DRAIN_PUNCH,
        MOVE_DYNAMIC_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH,
        MOVE_MEGA_PUNCH, MOVE_METEOR_MASH, MOVE_POWERUP_PUNCH, MOVE_SHADOW_PUNCH, MOVE_SKY_UPPERCUT, MOVE_THUNDER_PUNCH,
        MOVE_ICE_HAMMER, 0xFFFF};
const u16 sheerforce_moves_table[] = {MOVE_WATERFALL, MOVE_IRON_HEAD, MOVE_STOMP, MOVE_ZEN_HEADBUTT, MOVE_ROCK_CLIMB,
        MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FLASH_CANNON, MOVE_FIRE_FANG, MOVE_DARK_PULSE, MOVE_DRAGON_BREATH,
        MOVE_AIR_SLASH, MOVE_BITE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_BULLDOZE, MOVE_POWERUP_PUNCH, MOVE_IRON_TAIL,
        MOVE_FLAMETHROWER, MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB,
        MOVE_SLUDGE_WAVE, MOVE_SHADOW_BALL, MOVE_POISON_JAB, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_SNORE,
        MOVE_SECRET_POWER, MOVE_ROCK_TOMB, MOVE_ROCK_SMASH, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_ICE_BEAM,
        MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_FOCUS_BLAST, MOVE_POISON_STING, MOVE_POISON_TAIL, MOVE_POISON_FANG,
        MOVE_BODY_SLAM, MOVE_CONFUSION, MOVE_LOW_SWEEP, MOVE_ASTONISH, MOVE_PLAY_ROUGH, MOVE_CHARGE_BEAM,
        MOVE_FORCE_PALM, MOVE_FAKE_OUT, MOVE_DYNAMIC_PUNCH, MOVE_EXTRASENSORY, MOVE_MUD_SHOT, MOVE_ANCIENT_POWER,
        MOVE_METAL_CLAW, MOVE_SCALD, MOVE_BUBBLE, MOVE_BUBBLE_BEAM, MOVE_CRUSH_CLAW, MOVE_PSYCHIC, MOVE_GUNK_SHOT,
        MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_HEAT_WAVE, MOVE_FLAME_WHEEL, MOVE_FLAME_CHARGE, MOVE_HEADBUTT, MOVE_EMBER,
        MOVE_MUD_BOMB, MOVE_LAVA_PLUME, MOVE_TWISTER, MOVE_SKY_ATTACK, MOVE_DRAGON_RUSH, MOVE_STEEL_WING, MOVE_MUDSLAP,
        MOVE_SIGNAL_BEAM, MOVE_STRUGGLE_BUG, MOVE_ZAP_CANNON, MOVE_VOLT_TACKLE, MOVE_TWINEEDLE, MOVE_TRI_ATTACK,
        MOVE_STEAMROLLER, MOVE_THUNDER_SHOCK, MOVE_SPARK, MOVE_STEAM_ERUPTION, MOVE_SMOG, MOVE_SLUDGE, MOVE_SILVER_WIND,
        MOVE_SEED_FLARE, MOVE_SEARING_SHOT, MOVE_SACRED_FIRE, MOVE_ROLLING_KICK, MOVE_ACID_SPRAY, MOVE_ACID,
        MOVE_AURORA_BEAM, MOVE_BLAZE_KICK, MOVE_BLUE_FLARE, MOVE_BOLT_STRIKE, MOVE_BONE_CLUB, MOVE_BOUNCE,
        MOVE_BUG_BUZZ, MOVE_CHATTER, MOVE_CONSTRICT, MOVE_CROSS_POISON, MOVE_DIAMOND_STORM, MOVE_DISCHARGE,
        MOVE_DIZZY_PUNCH, MOVE_ELECTROWEB, MOVE_ENERGY_BALL, MOVE_FIERY_DANCE, MOVE_FREEZEDRY, MOVE_FREEZE_SHOCK,
        MOVE_GLACIATE, MOVE_HEART_STAMP, MOVE_HURRICANE, MOVE_HYPER_FANG, MOVE_ICE_BURN, MOVE_ICICLE_CRASH,
        MOVE_INFERNO, MOVE_LEAF_TORNADO, MOVE_LICK, MOVE_LUSTER_PURGE, MOVE_METEOR_MASH, MOVE_MIRROR_SHOT,
        MOVE_MIST_BALL, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_MYSTICAL_FIRE, MOVE_NEEDLE_ARM, MOVE_NIGHT_DAZE,
        MOVE_NUZZLE, MOVE_OCTAZOOKA, MOVE_OMINOUS_WIND, MOVE_POWDER_SNOW, MOVE_PSYBEAM, MOVE_RELIC_SONG,
        MOVE_RAZOR_SHELL, MOVE_LUNGE, MOVE_FIRE_LASH, MOVE_TROP_KICK, MOVE_SHADOW_BONE, MOVE_LIQUIDATION, MOVE_ZING_ZAP,
        MOVE_Z_ALOLAN_RAICHU, 0xFFFF};
const u16 biting_moves_table[] = {MOVE_BITE, MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_FIRE_FANG, MOVE_ICE_FANG,
        MOVE_THUNDER_FANG, MOVE_HYPER_FANG, MOVE_PSYCHIC_FANGS, 0xFFFF};
const u16 megalauncher_moves_table[] = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_HEAL_PULSE,
        MOVE_DRAGON_PULSE, MOVE_ORIGIN_PULSE, 0xFFFF};
const u16 moveshitting_onair[] = {MOVE_TWISTER, MOVE_SKY_UPPERCUT, MOVE_WHIRLWIND, MOVE_GUST, MOVE_THUNDER,
        MOVE_HURRICANE, MOVE_SMACK_DOWN, MOVE_THOUSAND_ARROWS, 0xFFFF};
const u16 moveshitting_underground[] = {MOVE_MAGNITUDE, MOVE_EARTHQUAKE, MOVE_FISSURE, 0xFFFF};
const u16 moveshitting_underwater[] = {MOVE_SURF, MOVE_WHIRLPOOL, 0xFFFF};
const u16 dual_type_moves[] = {MOVE_FLYING_PRESS, 0xFFFF};
const u16 user_thawing_moves[] = {MOVE_FLAME_WHEEL, MOVE_SACRED_FIRE, MOVE_SCALD, MOVE_FLARE_BLITZ, MOVE_FUSION_FLARE,
        MOVE_STEAM_ERUPTION, MOVE_BURN_UP, 0xFFFF};
const u16 ignore_targetstats_moves[] = {MOVE_SACRED_SWORD, MOVE_CHIP_AWAY, MOVE_DARKEST_LARIAT, 0xFFFF};
const u16 always_crit_hits[] = {MOVE_FROST_BREATH, MOVE_STORM_THROW, MOVE_Z_ASH_GRENINJA, 0xFFFF};
const u16 dancing_moves[] = {MOVE_FEATHER_DANCE, MOVE_FIERY_DANCE, MOVE_DRAGON_DANCE, MOVE_LUNAR_DANCE,
        MOVE_PETAL_DANCE, MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_SWORDS_DANCE, MOVE_TEETER_DANCE, 0xFFFF};
const u16 instruct_banlist[] = {MOVE_INSTRUCT, MOVE_BIDE, MOVE_FOCUS_PUNCH, MOVE_SHELL_TRAP, MOVE_BEAK_BLAST};
const u16 moves_with_charging_turn[] = {MOVE_BOUNCE, MOVE_DIG, MOVE_DIVE, MOVE_FLY, MOVE_FREEZE_SHOCK, MOVE_GEOMANCY,
        MOVE_ICE_BURN, MOVE_PHANTOM_FORCE, MOVE_RAZOR_WIND, MOVE_SHADOW_FORCE, MOVE_SKULL_BASH, MOVE_SKY_ATTACK,
        MOVE_SKY_DROP, MOVE_SOLAR_BEAM, MOVE_SOLAR_BLADE, 0xFFFF};
const u16 moves_calling_another_move[] = {MOVE_ASSIST, MOVE_COPYCAT, MOVE_ME_FIRST, MOVE_METRONOME, MOVE_MIRROR_MOVE,
        MOVE_NATURE_POWER, MOVE_SLEEP_TALK, 0xFFFF};

const u8 fogcontinues_bs[] = {0x9, 0xA, 0x10, 0xC7, 1, 0x12, 0x40, 0, 0x3E};
const u8 fogends_bs[] = {0x10, 0xC8, 1, 0x12, 0x40, 0, 0x3E};
const u8 fog_animation[] = {0x5, 0x19, 0xF6, 0, 0, 3, 0xA1, 0xC0, 0x10, 0x08, 0x5, 0x0, 0x04, 0x1E, 3, 8};
const u8 stickybarbswap[] = {0x45, 1, 0x10, 0, 0, 0, 0, 0x10, 0xC9, 1, 0x12, 0x40, 0, 0x3C};
const u8 defogblows_bs[] = {0x10, 0x5F, 1, 0x12, 0x40, 0, 0x3C};
const u8 defogspikes_bs[] = {0x10, 0xF1, 1, 0x12, 0x40, 0, 0x3C};
const u8 pursuit_megaevo_bs[] = {0x83, 90, 0, 0x28, 0x77, 0xAB, 0x2D, 0x08};

const u8 aegislash_change_bs[] = {0x10, 0x30, 0x1, 0x45, 0xA, 0x21, 0x0, 0x0, 0x0, 0x0, 0x3A, 0x83, 115, 0, 0x3C};
const u8 zen_change_bs[] = {0x10, 0x30, 0x1, 0x83, 119, 0, 0x45, 0xA, 0x21, 0x0, 0x0, 0x0, 0x0, 0x3A, 0x83, 122, 0,
        0x12, 0x40, 0x0, 0x83, 118, 0, 0x3C};

const u8 combined_move_bs[] = {0x83, 127, 0, 0x12, 0x40, 0x0, 0x83, 126, 0, 0x12, 0x40, 0x0, 0x3C};
const u8 fire_sea_bs[] = {0x83, 129, 0, 0x12, 0x40, 0x0, 0x3C}; // animation remaining
const u8 swamp_bs[] = {0x83, 130, 0, 0x12, 0x40, 0x0, 0x3C}; // animation remaining
const u8 rainbow_bs[] = {0x83, 131, 0, 0x12, 0x40, 0x0, 0x3C}; // animation remaining
const u8 end_pledge_effect_bs[] = {0x83, 132, 0, 0x83, 122, 0, 0x12, 0x40, 0x0, 0x3E};
const u8 sea_of_fire_hurt_bs[] = {0x10, 0x24, 0x02, 0x12, 0x40, 0x0, 0xB, 0x1, 0xC, 0x1, 0x3E}; // animation remaining

//'printfrom' tables
const u16 protection_broken_strings[] = {0x1D9, 0x1D8};
const u16 protect_moves_strings[] = {0x98, 0x65, 0x1DA};
const u16 abilitychange_strings[] = {0xB8, 0xB0, 0x1DC};
const u16 rooms_strings[] = {0x1BF, 0x1CE, 0x1C1, 0x1CF, 0x1C0, 0x1CD};
const u16 hazards_strings[] = {0x94, 0x1E4, 0x1E5, 0x1E6};
const u16 swaps_strings[] = {0x1D3, 0x1D4};
const u16 twoturnstrings[] = {0x1F6, 0x57, 0x56, 0x55, 0x13E, 0x1F8, 0x1F9, 0x54, 0x1FA, 0x58, 0x59, 0x13D};
const u16 terrainstrings[] = {0x1FB, 0x1FC, 0x1FD, 0x233, 0x262};
const u16 statushealstrings[] = {0x20B, 0x20C, 0x20D, 0x20E, 0x20F};
const u16 condition_strings[] = {0x28, 0x2C, 0x2E, 0x31, 0x23, 0x37}; //PSN, TOXIC, BRN, FRZ, SLP, PRLZ
const u16 statchange_strings[] = {0x23A, 0x197}; //cant go down/up, worked
const u16 terrainend_strings[] = {0x1C3, 0x1C4, 0x1C5, 0x261}; //grassy, misty, electric, psychic
const u16 moldbreaker_strings[] = {0x189, 0x18A, 0x18B}; //mold, turbo, terra
const u16 rapidspin_strings[] = {0x1ED, 0x1EE, 0x1EC}; //stealth, sticky web, toxic spikes
const u16 bind_strings[] = {0x5A, 0x5B, 0x5C, 0x5D, 0x148, 0x17C, 0x17D,
        0x184}; //bind, whirlpool, wrap, clamp, sand tomb, fire spin, magma storm, infestation
#include "config.h"

const u8 capture_exp_bs[] = {
        0x11, 0x0B, 0x1, 0x12, 0x1, 0x0,
#if EXP_CAPTURE == true
        0x2E, 0x90, 0x44, 0x02, 0x02, 0x0, 0x23, 0x0, 0x3A, 0x83, 124, 0,
#endif // EXP_CAPTURE
        0x28, 0x95, 0xBD, 0x2D, 0x08};
