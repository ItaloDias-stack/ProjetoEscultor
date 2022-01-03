#include "CutVoxel.h"
#include "Sculptor.h"
CutVoxel::CutVoxel() {
}
CutVoxel::CutVoxel(int x,int y,int z) {
    this->x=x;
    this->y=y;
    this->z=z;
}
CutVoxel::CutVoxel(const CutVoxel& orig) {
}
void CutVoxel::draw(Sculptor &t){
    t.cutVoxel(x,y,z);
}
CutVoxel::~CutVoxel() {
}

