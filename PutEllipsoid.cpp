#include "PutEllipsoid.h"

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r,float g,float b,float a) {
    if((xcenter>0)|| (ycenter>0)|| (zcenter>0)|| (rx>=0)|| (ry>=0)|| (rz>=0)|| (r>=0)|| (g>=0)|| (b>=0)|| (a>=0)){
        this->xcenter=xcenter;
        this->ycenter=ycenter;
        this->zcenter=zcenter;
        this->rx=rx;
        this->ry=ry;
        this->rz=rz;
        this->r=r;
        this->g=g;
        this->b=b;
        this->a=a;
    }
}
void PutEllipsoid::draw(Sculptor &e){
    e.setColor(r,g,b,a);
    for ( int x = 0 ; x <xcenter+rx; x++) {
        for ( int y = 0 ; y <ycenter+ry; y++) {
            for ( int z = 0 ; z <zcenter+rz; z++) {
                double res = ( (double)(x-xcenter)*(double)(x-xcenter) )/( (double)rx*(double)rx)+
                ( (double)(y-ycenter)*(double)(y-ycenter) )/( (double)ry*(double)ry)+
                ( (double)(z-zcenter)*(double)(z-zcenter) )/( (double)rz*(double)rz);
                //Eu tirei as pontas pq achei que fica melhor, para colocar as pontas coloque "res<=1" no if
                if( res < 1 ){
                    e.putVoxel(x,y,z);
                }
            }
        }
    }
}
PutEllipsoid::PutEllipsoid(const PutEllipsoid& orig) {
}

PutEllipsoid::~PutEllipsoid() {
}

