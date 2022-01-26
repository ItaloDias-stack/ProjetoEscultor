#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "Sculptor.h"
#include "FiguraGeometrica.h"
class CutEllipsoid: public FiguraGeometrica {
    int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
public:
    CutEllipsoid();
    CutEllipsoid(const CutEllipsoid& orig);
    virtual ~CutEllipsoid();
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void draw(Sculptor &t);
private:

};

#endif /* CUTELLIPSOID_H */

