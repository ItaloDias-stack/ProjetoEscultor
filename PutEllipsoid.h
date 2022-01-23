#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"
class PutEllipsoid: public FiguraGeometrica {
    int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
    float r,g,b,a;
public:
    PutEllipsoid();
    PutEllipsoid(const PutEllipsoid& orig);
    virtual ~PutEllipsoid();
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r,float g,float b,float a);
    void draw(Sculptor &t);
private:

};

#endif /* PUTELLIPSOID_H */

