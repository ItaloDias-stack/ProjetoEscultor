#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"
class FiguraGeometrica {
protected:
    float r,g,b,a;
public:
    void virtual draw(Sculptor &e) = 0;
    virtual ~FiguraGeometrica();

};

#endif /* FIGURAGEOMETRICA_H */

