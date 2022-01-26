#include "CutEllipsoid.h"
#include "Sculptor.h"
CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz) {
    if((xcenter>0)|| (ycenter>0)|| (zcenter>0)|| (rx>=0)|| (ry>=0)|| (rz>=0)){
        this->xcenter=xcenter;
        this->ycenter=ycenter;
        this->zcenter=zcenter;
        this->rx=rx;
        this->ry=ry;
        this->rz=rz;
    }
}

void CutEllipsoid::draw(Sculptor &e){
    for ( int x = 0 ; x <xcenter+rx; x++) {
        for ( int y = 0 ; y <ycenter+ry; y++) {
            for ( int z = 0 ; z <zcenter+rz; z++) {
                double res = ( (double)(x-xcenter)*(double)(x-xcenter) )/( (double)rx*(double)rx)+
                ( (double)(y-ycenter)*(double)(y-ycenter) )/( (double)ry*(double)ry)+
                ( (double)(z-zcenter)*(double)(z-zcenter) )/( (double)rz*(double)rz);
                //Eu tirei as pontas pq achei que fica melhor, para colocar as pontas coloque "res<=1" no if
                if( res < 1 ){
                    e.cutVoxel(x,y,z);
                }
            }
        }
    }
}

CutEllipsoid::CutEllipsoid(const CutEllipsoid& orig) {
}

CutEllipsoid::~CutEllipsoid() {
}

