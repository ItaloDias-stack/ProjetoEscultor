#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"
class CutVoxel : public FiguraGeometrica{
    int x,y,z;
    
public:
    CutVoxel();
    CutVoxel(const CutVoxel& orig);
    CutVoxel(int x,int y, int z);
    void draw(Sculptor &t);
    virtual ~CutVoxel();
private:

};

#endif /* CUTVOXEL_H */

