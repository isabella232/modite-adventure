#ifndef MODITE_GGOBLINSNIPERPROCESS_H
#define MODITE_GGOBLINSNIPERPROCESS_H

#include <GameState/enemies/GGruntProcess.h>
#include "GGameState.h"
#include "GGamePlayfield.h"
#include "GAnchorSprite.h"

class GGoblinSniperProcess : public GGruntProcess {
public:
  GGoblinSniperProcess(GGameState *aGameState, TInt aIp, TFloat aX, TFloat aY, TUint16 aParam);
  ~GGoblinSniperProcess() OVERRIDE;
  TBool RunAfter() OVERRIDE;

protected:
  virtual TBool IsInRange();
  TBool MaybeAttack() OVERRIDE;
  void Idle(DIRECTION aDirection) OVERRIDE;
  void Taunt(DIRECTION aDirection) OVERRIDE;
  void Walk(DIRECTION aDirection) OVERRIDE;
  void Attack(DIRECTION aDirection) OVERRIDE;
  void Hit(DIRECTION aDirection) OVERRIDE;
  void Spell(DIRECTION aDirection) OVERRIDE;
  void Death(DIRECTION aDirection) OVERRIDE;
};

#endif //MODITE_GGOBLINSNIPERPROCESS_H
