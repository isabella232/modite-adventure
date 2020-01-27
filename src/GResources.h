#ifndef MODITE_GRESOURCES_H
#define MODITE_GRESOURCES_H

#include <BTypes.h>
#include "Resources.h"

// Events
const TUint16 EVENT_SPELL_PROCESS_EXIT = 1;

// Sprite priorities
// higher numbers mean deeper into the screen (highest values drawn first)
const TInt CHEST_PRIORITY = 2;
const TInt CRATE_PRIORITY = 2;
const TInt DOOR_PRIORITY = 2;
const TInt FLOOR_SWITCH_PRIORITY = 2;
const TInt LEVER_PRIORITY = 2;
const TInt SPIKES_PRIORITY = 2;
const TInt STAIRS_PRIORITY = 2;
const TInt ITEM_PRIORITY = 1;
const TInt ENEMY_PRIORITY = 0;
const TInt ENEMY_SPELL_PRIORITY = -1;
const TInt ENEMY_DEATH_PRIORITY = -1;
const TInt PLAYER_PRIORITY = -10;
const TInt PLAYER_HEAL_PRIORITY = -11;
const TInt PLAYER_SPELL_PRIORITY = -11;
const TInt ENEMY_BULLET_PRIORITY = -12;

enum {
  FONT_8x8_SLOT,
  FONT_16x16_SLOT,
  BKG_SLOT,
  PLAYER_SLOT,
  PLAYER_HEAL_SLOT,
  PLAYER_SPELL_SLOT,
  TILESET_SLOT,
  ENVIRONMENT_SLOT,
  // enemies
  PROJECTILE_ARROW_SLOT,
  BAT_SLOT,
  GOBLIN_SLOT,
  GOBLIN_SNIPER_SLOT,
  ORC_SLOT,
  RAT_SLOT,
  SLIME_SLOT,
  SPIDER_SLOT,
  TROLL_SLOT,
  ENEMY_DEATH_SLOT,
  // spells
  SPELL_EARTH_SLOT,
  SPELL_ELECTRICITY_SLOT,
  SPELL_FIRE_SLOT,
  SPELL_WATER_SLOT,
  // mid bosses
  BOSS_DEATH_SLOT,
  BOSS_SLOT,
  BOSS_PROJECTILE_SLOT,
  BOSS_PILLAR_SLOT,

  // WIZARDS
  EARTH_WIZARD_PROJECTILE_SLOT,
  WATER_WIZARD_PROJECTILE_SLOT,
  FIRE_WIZARD_PROJECTILE_SLOT,
  ENERGY_WIZARD_PROJECTILE_SLOT,

  EARTH_WIZARD_PILLAR_SLOT,
  WATER_WIZARD_PILLAR_SLOT,
  FIRE_WIZARD_PILLAR_SLOT,
  ENERGY_WIZARD_PILLAR_SLOT,

  // FINAL BOSS
  EARTH_FINAL_BOSS_PROJECTILE_SLOT,
  WATER_FINAL_BOSS_PROJECTILE_SLOT,
  FIRE_FINAL_BOSS_PROJECTILE_SLOT,
  ENERGY_FINAL_BOSS_PROJECTILE_SLOT,

  EARTH_FINAL_BOSS_PILLAR_SLOT,
  WATER_FINAL_BOSS_PILLAR_SLOT,
  FIRE_FINAL_BOSS_PILLAR_SLOT,
  ENERGY_FINAL_BOSS_PILLAR_SLOT,

  // temporary slot
  TEMP_SLOT,

  SLOT_MAX,
};

// BRaw slots
enum {
  SONG0_SLOT,
  SONG1_SLOT,
  SONG2_SLOT,
  SONG3_SLOT,
  SONG4_SLOT,
  SONG5_SLOT,
  SONG6_SLOT,
  SONG7_SLOT,
  SONG8_SLOT,
  SONG9_SLOT,
  SONG10_SLOT,
  SONG11_SLOT,
  SFX1_SLOT,
  SFX2_SLOT,
  SFX3_SLOT,
  SFX4_SLOT,
  SFX5_SLOT,
  SFX6_SLOT,
  SFX7_SLOT,
  SFX8_SLOT,
  SFX9_SLOT,
  SFX10_SLOT,
  SFX11_SLOT,
  SFX12_SLOT,
  SFX13_SLOT,
  SFX14_SLOT,
};

// SPLASH_SPRITES.BMP
const TUint16 IMG_DROP1 = 0;
const TUint16 IMG_DROP2 = 4;
const TUint16 IMG_DROP3 = 8;
const TUint16 IMG_DROP4 = 16;
const TUint16 IMG_DROP5 = 24;
const TUint16 IMG_DROP6 = 32;

// PLAYER.BMP
const TUint16 IMG_IDLE = 0;
const TUint16 IMG_SELECTED = 4;
const TUint16 IMG_WALK_DOWN = 8;
const TUint16 IMG_WALK_RIGHT = 12;
const TUint16 IMG_WALK_UP = 16;
const TUint16 IMG_SWORD_DOWN = 20;
const TUint16 IMG_SWORD_RIGHT = 24;
const TUint16 IMG_SWORD_UP = 28;
const TUint16 IMG_DAMAGE_DOWN = 32;
const TUint16 IMG_DAMAGE_RIGHT = 36;
const TUint16 IMG_DAMAGE_UP = 40;

// PLAYER_HEAL_EFFECT.BMP
const TUint16 IMG_HEAL = 0;

// PLAYER_SPELL_EFFECT.BMP
const TUint16 IMG_SPELL = 0;

// MID BOSS
const TUint16 IMG_MID_BOSS_IDLE = 0;
const TUint16 IMG_MID_BOSS_WALK_DOWN = 0;
const TUint16 IMG_MID_BOSS_WALK_RIGHT = 4;
const TUint16 IMG_MID_BOSS_WALK_LEFT = 4;
const TUint16 IMG_MID_BOSS_WALK_UP = 8;
const TUint16 IMG_MID_BOSS_MOVE = 12; // move and attack

// MID BOSS PROJECTILE
const TUint16 IMG_FIREBALL = 0;
const TUint16 IMG_FIREBALL_EXPLODE = 5;

// MID BOSS DEATH
const TUint16 IMG_MID_BOSS_DEATH = 0;

// WIZARD
const TUint16 IMG_WIZARD_IDLE = 0;
const TUint16 IMG_WIZARD_WALK_DOWN = 0;
const TUint16 IMG_WIZARD_WALK_RIGHT = 4;
const TUint16 IMG_WIZARD_WALK_LEFT = 4;
const TUint16 IMG_WIZARD_WALK_UP = 8;
const TUint16 IMG_WIZARD_FIRE_START = 7;
const TUint16 IMG_WIZARD_FIRE = 11;

// WIZARD PROJECTILE
const TUint16 IMG_WIZARD_PROJECTILE = 0;
const TUint16 IMG_WIZARD_PROJECTILE_EXPLODE = 5;

// WIZARD PILLAR
const TUint16 IMG_WIZARD_PILLAR = 0;

// WIZARD DEATH
const TUint16 IMG_WIZARD_DEATH = 0;

// FINAL BOSS
const TUint16 IMG_FINAL_BOSS_IDLE = 0;
const TUint16 IMG_FINAL_BOSS_WALK_DOWN = 0;
const TUint16 IMG_FINAL_BOSS_WALK_RIGHT = 3;
const TUint16 IMG_FINAL_BOSS_WALK_UP = 6;

// FINAL BOSS PROJECTILE
const TUint16 IMG_FINAL_BOSS_PROJECTILE = 0;
const TUint16 IMG_FINAL_BOSS_PROJECTILE_EXPLODE = 5;

// FINAL BOSS  PILLAR
const TUint16 IMG_FINAL_BOSS_PILLAR = 0;

// CHARA_SPIDER_BMP
const TUint16 IMG_SPIDER_IDLE = 0;
const TUint16 IMG_SPIDER_SELECTED = 4;
const TUint16 IMG_SPIDER_WALK_DOWN = 8;
const TUint16 IMG_SPIDER_WALK_RIGHT = 12;
const TUint16 IMG_SPIDER_WALK_UP = 16;
const TUint16 IMG_SPIDER_ATTACK_DOWN = 20;
const TUint16 IMG_SPIDER_ATTACK_RIGHT = 24;
const TUint16 IMG_SPIDER_ATTACK_UP = 28;
const TUint16 IMG_SPIDER_DAMAGE_DOWN = 32;
const TUint16 IMG_SPIDER_DAMAGE_RIGHT = 36;
const TUint16 IMG_SPIDER_DAMAGE_UP = 40;

// CHARA_BAT_BMP
const TUint16 IMG_BAT_IDLE = 0;
const TUint16 IMG_BAT_SELECTED = 4;
const TUint16 IMG_BAT_WALK_DOWN = 8;
const TUint16 IMG_BAT_WALK_RIGHT = 12;
const TUint16 IMG_BAT_WALK_UP = 16;
const TUint16 IMG_BAT_ATTACK_DOWN = 20;
const TUint16 IMG_BAT_ATTACK_RIGHT = 24;
const TUint16 IMG_BAT_ATTACK_UP = 28;
const TUint16 IMG_BAT_DAMAGE_DOWN = 32;
const TUint16 IMG_BAT_DAMAGE_RIGHT = 36;
const TUint16 IMG_BAT_DAMAGE_UP = 40;

// CHARA_GOBLIN_BMP
const TUint16 IMG_GOBLIN_IDLE = 0;
const TUint16 IMG_GOBLIN_SELECTED = 4;
const TUint16 IMG_GOBLIN_WALK_DOWN = 8;
const TUint16 IMG_GOBLIN_WALK_RIGHT = 12;
const TUint16 IMG_GOBLIN_WALK_UP = 16;
const TUint16 IMG_GOBLIN_ATTACK_DOWN = 20;
const TUint16 IMG_GOBLIN_ATTACK_RIGHT = 24;
const TUint16 IMG_GOBLIN_ATTACK_UP = 28;
const TUint16 IMG_GOBLIN_DAMAGE_DOWN = 32;
const TUint16 IMG_GOBLIN_DAMAGE_RIGHT = 36;
const TUint16 IMG_GOBLIN_DAMAGE_UP = 40;

// CHARA_GOBLIN_SNIPER_BMP
const TUint16 IMG_GOBLIN_SNIPER_IDLE = 0;
const TUint16 IMG_GOBLIN_SNIPER_SELECTED = 4;
const TUint16 IMG_GOBLIN_SNIPER_WALK_DOWN = 8;
const TUint16 IMG_GOBLIN_SNIPER_WALK_RIGHT = 12;
const TUint16 IMG_GOBLIN_SNIPER_WALK_UP = 16;
const TUint16 IMG_GOBLIN_SNIPER_ATTACK_DOWN = 20;
const TUint16 IMG_GOBLIN_SNIPER_ATTACK_RIGHT = 24;
const TUint16 IMG_GOBLIN_SNIPER_ATTACK_UP = 28;
const TUint16 IMG_GOBLIN_SNIPER_DAMAGE_DOWN = 32;
const TUint16 IMG_GOBLIN_SNIPER_DAMAGE_RIGHT = 36;
const TUint16 IMG_GOBLIN_SNIPER_DAMAGE_UP = 40;

// CHARA_ORC_BMP
const TUint16 IMG_ORC_IDLE = 0;
const TUint16 IMG_ORC_SELECTED = 4;
const TUint16 IMG_ORC_WALK_DOWN = 8;
const TUint16 IMG_ORC_WALK_RIGHT = 12;
const TUint16 IMG_ORC_WALK_UP = 16;
const TUint16 IMG_ORC_ATTACK_DOWN = 20;
const TUint16 IMG_ORC_ATTACK_RIGHT = 24;
const TUint16 IMG_ORC_ATTACK_UP = 28;
const TUint16 IMG_ORC_DAMAGE_DOWN = 32;
const TUint16 IMG_ORC_DAMAGE_RIGHT = 36;
const TUint16 IMG_ORC_DAMAGE_UP = 40;

// CHARA_RAT_BMP
const TUint16 IMG_RAT_IDLE = 0;
const TUint16 IMG_RAT_SELECTED = 4;
const TUint16 IMG_RAT_WALK_DOWN = 8;
const TUint16 IMG_RAT_WALK_RIGHT = 12;
const TUint16 IMG_RAT_WALK_UP = 16;
const TUint16 IMG_RAT_ATTACK_DOWN = 20;
const TUint16 IMG_RAT_ATTACK_RIGHT = 24;
const TUint16 IMG_RAT_ATTACK_UP = 28;
const TUint16 IMG_RAT_DAMAGE_DOWN = 32;
const TUint16 IMG_RAT_DAMAGE_RIGHT = 36;
const TUint16 IMG_RAT_DAMAGE_UP = 40;

// CHARA_SLIME_BMP
const TUint16 IMG_SLIME_IDLE = 0;
const TUint16 IMG_SLIME_SELECTED = 4;
const TUint16 IMG_SLIME_WALK_DOWN = 8;
const TUint16 IMG_SLIME_WALK_RIGHT = 12;
const TUint16 IMG_SLIME_WALK_UP = 16;
const TUint16 IMG_SLIME_ATTACK_DOWN = 20;
const TUint16 IMG_SLIME_ATTACK_RIGHT = 24;
const TUint16 IMG_SLIME_ATTACK_UP = 28;
const TUint16 IMG_SLIME_DAMAGE_DOWN = 32;
const TUint16 IMG_SLIME_DAMAGE_RIGHT = 36;
const TUint16 IMG_SLIME_DAMAGE_UP = 40;

// CHARA_TROLL_BMP
const TUint16 IMG_TROLL_IDLE = 0;
const TUint16 IMG_TROLL_SELECTED = 4;
const TUint16 IMG_TROLL_WALK_DOWN = 8;
const TUint16 IMG_TROLL_WALK_RIGHT = 12;
const TUint16 IMG_TROLL_WALK_UP = 16;
const TUint16 IMG_TROLL_ATTACK_DOWN = 20;
const TUint16 IMG_TROLL_ATTACK_RIGHT = 24;
const TUint16 IMG_TROLL_ATTACK_UP = 28;
const TUint16 IMG_TROLL_DAMAGE_DOWN = 32;
const TUint16 IMG_TROLL_DAMAGE_RIGHT = 36;
const TUint16 IMG_TROLL_DAMAGE_UP = 40;

// ENEMY_DEATH_BMP
const TUint16 IMG_ENEMY_DEATH = 0;

// GLOBAL_OBJECT_LAYER_BMP
const TUint16 IMG_WOOD_DOOR_H_TOP = 10;      // Top
const TUint16 IMG_WOOD_DOOR_H_BOTTOM = 20;   // Bottom. This is the code ATTR_WOOD_DOOR_H
const TUint16 IMG_METAL_GATE_H_TOP = 11;     // Top
const TUint16 IMG_METAL_GATE_H_BOTTOM = 21;  // Bottom. This is the code ATTR_METAL_GATE_H

const TUint16 IMG_POT = 12;               // through 14
const TUint16 IMG_SPIKES = 15;            // through 19
const TUint16 IMG_CHEST = 22;             // closed, open is 23
const TUint16 IMG_CRATE = 24;             // through 28

const TUint16 IMG_WOOD_DOOR_V_TOP = 30;       // Top.
const TUint16 IMG_WOOD_DOOR_V_BOTTOM = 40;    // Bottom.
const TUint16 IMG_METAL_GATE_V_TOP = 31;      // Top
const TUint16 IMG_METAL_GATE_V_BOTTOM = 41;   // Bottom

const TUint16 IMG_FLOOR_SWITCH = 32;      // grey, 33 is pressed
const TUint16 IMG_FLOOR_SWITCH_WOOD = 34; // brown, 35 is pressed

const TUint16 IMG_LEVER = 36;             // left, center = 36, right = 37
const TUint16 IMG_STONE_STAIRS_DOWN = 48;
const TUint16 IMG_STONE_STAIRS_UP = 49; // 39 is the upper sprite image for the very top stairs
const TUint16 IMG_WOOD_STAIRS_DOWN = 68;
const TUint16 IMG_WOOD_STAIRS_UP = 69; // 59 is the upper sprite image for the very top stairs
const TUint16 IMG_BLUE_SPELLBOOK = 80;
const TUint16 IMG_RED_SPELLBOOK = 81;
const TUint16 IMG_GREEN_SPELLBOOK = 82;
const TUint16 IMG_YELLOW_SPELLBOOK = 83;
const TUint16 IMG_SILVER_KEY = 85;
const TUint16 IMG_GOLD_KEY = 86;
const TUint16 IMG_BLUE_RING = 90;
const TUint16 IMG_RED_RING = 91;
const TUint16 IMG_GREEN_RING = 92;
const TUint16 IMG_YELLOW_RING = 93;
const TUint16 IMG_BOOTS = 94;
const TUint16 IMG_GLOVES = 95;
const TUint16 IMG_SWORD = 96;
const TUint16 IMG_BLUE_BRACELET = 100;
const TUint16 IMG_RED_BRACELET = 101;
const TUint16 IMG_GREEN_BRACELET = 102;
const TUint16 IMG_YELLOW_BRACELET = 103;
const TUint16 IMG_GREEN_POTION1 = 110;
const TUint16 IMG_GREEN_POTION2 = 111;
const TUint16 IMG_BLUE_POTION1 = 112;
const TUint16 IMG_BLUE_POTION2 = 113;
const TUint16 IMG_EMPTY_BOTTLE = 114;  // EMPTY
const TUint16 IMG_HEART = 84;          // EMPTY
const TUint16 IMG_BLUE_BOTTLE1 = 120;  // 25% full
const TUint16 IMG_BLUE_BOTTLE2 = 121;  // 50% full
const TUint16 IMG_BLUE_BOTTLE3 = 122;  // 75% full
const TUint16 IMG_BLUE_BOTTLE4 = 123;  // 100% full
const TUint16 IMG_GREEN_BOTTLE1 = 124; // 25% full
const TUint16 IMG_GREEN_BOTTLE2 = 125; // 50% full
const TUint16 IMG_GREEN_BOTTLE3 = 126; // 75% full
const TUint16 IMG_GREEN_BOTTLE4 = 127; // 100% full

//// RESERVED COLORS
const TUint8 COLOR_WHITE = 240;  // for hit/flash animations, etc.
const TUint8 COLOR_SHADOW = 241;
const TUint8 COLOR_SHMOO_RED = 242;
const TUint8 COLOR_SHMOO_GREEN = 243;
const TUint8 COLOR_HUD_BG = 244;
const TUint8 COLOR_METER_OUTLINE = 245;
const TUint8 COLOR_HEALTH = 246;  // health bar
const TUint8 COLOR_HEALTH2 = 247; // health bar
const TUint8 COLOR_MAGIC = 248;
const TUint8 COLOR_MAGIC2 = 249;
const TUint8 COLOR_EXPERIENCE = 250;  // experience bar
const TUint8 COLOR_EXPERIENCE2 = 251; // experience bar
const TUint8 COLOR_SHMOO = 252;
const TUint8 COLOR_TEXT_SHADOW = 253;
const TUint8 COLOR_TEXT_BG = 254;
const TUint8 COLOR_TEXT = 255;
const TInt16 COLOR_TEXT_TRANSPARENT = -1;

#define MAX_BBITMAP 5

#endif //MODITE_GRESOURCES_H
