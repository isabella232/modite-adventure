#ifndef GMIDBOSSPROCESS_H
#define GMIDBOSSPROCESS_H

// see
// https://github.com/ModusCreateOrg/modite-adventure/wiki/Mid-Boss-Design-Guidelines

#include "GAnchorSprite.h"
#include "GGamePlayfield.h"
#include "GGameState.h"
#include "GBossProcess.h"
#include "common/GSpellOverlayProcess.h"
#include "GPlayerProcess.h"

const TInt MID_BOSS_ATTACK_TIME = 2 * FRAMES_PER_SECOND;
const TFloat VELOCITY = 2.5;
const TFloat CHARGE_VELOCITY = 4 * PLAYER_VELOCITY;
const TInt BOUNCE_TIME = 5; // bounce around for 10 seconds
const TInt HIT_SPAM_TIME = 2 * FRAMES_PER_SECOND;
const TInt HOP_DURATION = FRAMES_PER_SECOND / 3;
const TFloat MID_BOSS_FRICTION = 0.1 / TFloat(FACTOR);
const TInt BLINK_DURATION = FRAMES_PER_SECOND / 4;

enum {
  MB_IDLE_STATE,
  MB_WALK_STATE,
  MB_BALL_STATE,   // change into ball
  MB_MOVE_STATE,   // bounce of walls N times, hit player
  MB_RETURN_STATE, // returning to starting position
  MB_REVERT_STATE, // revert back to original shape
  MB_ATTACK_STATE, // projectile attack
  MB_CHARGE_STATE,
  MB_DEATH_STATE,
  MB_SPELL_STATE, // hit with magic spell
};

class GMidBossProcess : public GBossProcess {
public:
  GMidBossProcess(GGameState *aGameState, TFloat aX, TFloat aY, TUint16 aSlot,
                  TInt aIp, TUint16 aAttribute, TUint16 aDropsItemAttribute,
                  TInt16 aSpriteSheet);

  ~GMidBossProcess() OVERRIDE;

public:
  TBool RunBefore() OVERRIDE;

  TBool RunAfter() OVERRIDE;

protected:
  virtual TBool MaybeAttack() = 0;

  TBool MaybeHit();

  TBool MaybeBounce();

  TBool MaybeDeath();

protected:
  void NewState(TUint16 aState, DIRECTION aDirection);

  virtual void Idle(DIRECTION aDirection) = 0;
  TBool IdleState();

  virtual void Walk(DIRECTION aDirection) = 0;
  TBool WalkState();

  virtual void Ball(DIRECTION aDirection) = 0;
  TBool BallState();

  virtual void Move(DIRECTION aDirection) = 0;
  TBool MoveState();

  virtual void Return(DIRECTION aDirection) = 0;
  TBool ReturnState();

  virtual void Revert(DIRECTION aDirection) = 0;
  TBool RevertState();

  virtual void Attack(DIRECTION aDirection) = 0;
  TBool AttackState();

  virtual void Charge(DIRECTION aDirection) = 0;
  virtual void Land(DIRECTION aDirection) = 0;
  TBool ChargeState();

  virtual void Death(DIRECTION aDirection) = 0;
  TBool DeathState();

  // hit by magic spell
  virtual void Spell(DIRECTION aDirection) = 0;
  TBool SpellState();

  void TriggerProjectileAttackSfx() {
    switch (mAttribute) {
      case ATTR_MID_BOSS_ENERGY:
        gSoundPlayer.TriggerSfx(SFX_MIDBOSS_ATTACK_ENERGY_WAV);
        break;
      case ATTR_MID_BOSS_EARTH:
        gSoundPlayer.TriggerSfx(SFX_MIDBOSS_ATTACK_EARTH_WAV);
        break;
      case ATTR_MID_BOSS_WATER:
        gSoundPlayer.TriggerSfx(SFX_MIDBOSS_ATTACK_WATER_WAV);
        break;
      case ATTR_MID_BOSS_FIRE:
        gSoundPlayer.TriggerSfx(SFX_MIDBOSS_ATTACK_FIRE_WAV);
        break;
      default:
        break;
    }
  }

public:
  void OverlayAnimationComplete() OVERRIDE;
  void WriteToStream(BMemoryStream &aStream) OVERRIDE;
  void ReadFromStream(BMemoryStream &aStream) OVERRIDE;

protected:
  TInt16 mDropsItemAttribute;
  TInt mIp;
  TInt16 mBallAttackModulo;
  GSpellOverlayProcess *mSpellOverlayProcess;
};

#endif
