
#ifndef PUTBOX_H
#define PUTBOX_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class PutBox: public FiguraGeometrica {
    float r,g,b,a;
    int x0,x1,y0,y1,z1,z0;
public:
    PutBox();
    PutBox(const PutBox& orig);
    void draw(Sculptor &t);
    PutBox(int x0,int x1,int y0,int y1,int z1,int z0, float r,float g,float b,float a);
    virtual ~PutBox();
private:

};

#endif /* PUTBOX_H */

