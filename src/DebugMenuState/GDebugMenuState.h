#ifndef GENUS_GDEBUGMENUSTATE_H
#define GENUS_GDEBUGMENUSTATE_H

#include "Game.h"

class GDebugMenuContainer;

class GDebugMenuState : public BGameEngine {
public:
  GDebugMenuState();
  virtual ~GDebugMenuState();
  void PreRender();
  void PostRender();

private:
  GDebugMenuContainer *mContainer;
};

#endif //GENUS_GDEBUGMENUSTATE_H