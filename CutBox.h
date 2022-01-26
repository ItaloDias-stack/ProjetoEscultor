#ifndef CUTBOX_H
#define CUTBOX_H

#include "FiguraGeometrica.h"
#include "Sculptor.h"

class CutBox: public FiguraGeometrica{
    int x0,x1,y0,y1,z1,z0;
public:
    void draw(Sculptor &t);
    CutBox(int x0,int x1,int y0,int y1,int z1,int z0);
    CutBox(const CutBox& orig);
    virtual ~CutBox();
private:

};

#endif /* CUTBOX_H */

