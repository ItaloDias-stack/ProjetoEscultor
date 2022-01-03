#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"
class FiguraGeometrica {
public:
    FiguraGeometrica();
    FiguraGeometrica(const FiguraGeometrica& orig);
    void virtual draw(Sculptor &e) = 0;
    virtual ~FiguraGeometrica();
private:

};

#endif /* FIGURAGEOMETRICA_H */

