#ifndef GENUS_GLEVELWIDGET_H
#define GENUS_GLEVELWIDGET_H

#include "Game.h"
#include "common/GButtonWidget.h"

class GLevelWidget : public GButtonWidget {
public:
    GLevelWidget(TInt aLevel, TInt aDepth);
    ~GLevelWidget() OVERRIDE;
public:
    TInt Render(TInt aX, TInt aY) OVERRIDE;
    void Select() OVERRIDE;

public:
    TInt mLevel;
    TInt mDepth;
};

#endif //GENUS_GLEVELWIDGET_H
