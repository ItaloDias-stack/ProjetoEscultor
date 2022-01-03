#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "FiguraGeometrica.h"
class PutVoxel : public FiguraGeometrica{
    int x,y,z;
    float r,g,b,a;
public:
    PutVoxel();
    PutVoxel( int x, int y, int z, float r, float g, float b, float a);
    void draw(Sculptor &t);
    PutVoxel(const PutVoxel& orig);
    virtual ~PutVoxel();
private:

};

#endif /* PUTVOXEL_H */

