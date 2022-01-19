#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "FiguraGeometrica.h"


class PutSphere : public FiguraGeometrica{
    int xc,yc,zc,raio;
public:
    PutSphere(int xc,int yc,int zc,int raio , float r,float g,float b,float a);
    PutSphere(const PutSphere& orig);
    virtual ~PutSphere();
    void draw(Sculptor &e);
private:

};

#endif /* PUTSPHERE_H */

