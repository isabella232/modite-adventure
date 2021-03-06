#ifndef GINVENTORYPLAYFIELD_H
#define GINVENTORYPLAYFIELD_H

#include <BPlayfield.h>
#include "GInventory.h"

class GInventoryPlayfield : public BPlayfield {
public:
  EXPLICIT GInventoryPlayfield(GInventory *aInventory, BViewPort *aViewPort);
  ~GInventoryPlayfield() OVERRIDE;

public:
  void Render() OVERRIDE;

protected:
  GInventory *mInventory;
  BViewPort *mViewPort;
};

#endif
