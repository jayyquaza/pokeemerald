#ifndef GUARD_BATTLE_TRANSITION_H
#define GUARD_BATTLE_TRANSITION_H

void BattleTransition_StartOnField(u8 transitionId);
void BattleTransition_Start(u8 transitionId);
bool8 IsBattleTransitionDone(void);
bool8 FldEff_PokeballTrail(void);
void Task_BattleTransition_Intro(u8 taskId);
void GetBg0TilesDst(u16 **tilemap, u16 **tileset);

extern const struct SpritePalette gSpritePalette_Pokeball;

enum {
    MUGSHOT_COLOR_NONE,
    MUGSHOT_COLOR_PURPLE,
    MUGSHOT_COLOR_GREEN,
    MUGSHOT_COLOR_PINK,
    MUGSHOT_COLOR_BLUE,
    MUGSHOT_COLOR_YELLOW,
    MUGSHOT_COLOR_RED, // Added 
    MUGSHOT_COLOR_GRAY, // Added 
    MUGSHOT_COLOR_BRENDAN, // Added 
    MUGSHOT_COLOR_MAY, // Added 
    MUGSHOT_COLOR_COUNT
};

enum {
    B_TRANSITION_BLUR,
    B_TRANSITION_SWIRL,
    B_TRANSITION_SHUFFLE,
    B_TRANSITION_BIG_POKEBALL,
    B_TRANSITION_POKEBALLS_TRAIL,
    B_TRANSITION_CLOCKWISE_WIPE,
    B_TRANSITION_RIPPLE,
    B_TRANSITION_WAVE,
    B_TRANSITION_SLICE,
    B_TRANSITION_WHITE_BARS_FADE,
    B_TRANSITION_GRID_SQUARES,
    B_TRANSITION_ANGLED_WIPES,
    B_TRANSITION_MUGSHOT,
    B_TRANSITION_AQUA, // Here below added in Emerald
    B_TRANSITION_MAGMA,
    B_TRANSITION_REGICE,
    B_TRANSITION_REGISTEEL,
    B_TRANSITION_REGIROCK,
    B_TRANSITION_KYOGRE,
    B_TRANSITION_GROUDON,
    B_TRANSITION_RAYQUAZA,
    B_TRANSITION_SHRED_SPLIT,
    B_TRANSITION_BLACKHOLE,
    B_TRANSITION_BLACKHOLE_PULSATE,
    B_TRANSITION_RECTANGULAR_SPIRAL,
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_LOGO_WAVE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_COUNT
};

// IDs for GetSpecialBattleTransition
enum {
    B_TRANSITION_GROUP_B_TOWER,
    B_TRANSITION_GROUP_B_DOME = 3,
    B_TRANSITION_GROUP_B_PALACE,
    B_TRANSITION_GROUP_B_ARENA,
    B_TRANSITION_GROUP_B_FACTORY,
    B_TRANSITION_GROUP_B_PIKE,
    B_TRANSITION_GROUP_B_PYRAMID = 10,
    B_TRANSITION_GROUP_TRAINER_HILL,
    B_TRANSITION_GROUP_SECRET_BASE,
    B_TRANSITION_GROUP_E_READER,
};

#endif // GUARD_BATTLE_TRANSITION_H
