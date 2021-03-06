#include "GBossProcess.h"
#include "GPlayer.h"
#include "GItemProcess.h"

GBossProcess::GBossProcess(GGameState *aGameState, TFloat aX, TFloat aY, TUint16 aSlot, TUint16 aAttribute) : GEnemyProcess(aGameState, aX, aY, aSlot, aAttribute) {
  mHitTimer = mAttackTimer = mStateTimer = 0;
  mDeathCounter = 0;
  mSpellCounter = 0;
  mSprite->mMeter = -1;
  mHealthBarCount = mCurrentHealthBar = 1;
  GPlayer::mActiveBoss = this;
}

GBossProcess::~GBossProcess() {
  GPlayer::mActiveBoss = ENull;
}

void GBossProcess::SpawnUniqueItem(TInt16 aIp, TInt16 aItemNumber) {
  if (GPlayer::mInventoryList.ItemCount(aItemNumber)) {
    return;
  }
#ifdef DEBUGME
  printf("drop $%x %d\n", aItemNumber, aItemNumber);
#endif
  GItemProcess::SpawnItem(mGameState, aIp, aItemNumber,
                          GPlayer::mSprite->x + 32, GPlayer::mSprite->y);
}
