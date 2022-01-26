#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "FiguraGeometrica.h"
#include "Sculptor.h"

class CutSphere: public FiguraGeometrica {
    int xc,yc,zc,raio;
public:
    CutSphere(int xc,int yc,int zc,int raio );
    CutSphere(const CutSphere& orig);
    virtual ~CutSphere();
    void draw(Sculptor &e);
private:

};

#endif /* CUTSPHERE_H */

