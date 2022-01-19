#include "CutSphere.h"

CutSphere::CutSphere(int xc,int yc,int zc,int raio , float r,float g,float b,float a) {
    if((xc>0)|| (yc>0)|| (zc>0)|| (r>=0)|| (g>=0)|| (b>=0)|| (a>=0) || raio >=0){
        this->xc=xc;
        this->yc=yc;
        this->zc=zc;
        this->raio=raio;
        this->r=r;
        this->g=g;
        this->b=b;
        this->a=a;
    }
}

CutSphere::CutSphere(const CutSphere& orig) {
}
void PutSphere::draw(Sculptor &e){
    double raio = (double)raio * (double)raio;
    e.setColor(r,g,b,a);
    for ( int x = 0 ; x <xc+raio; x++) {
        for ( int y = 0 ; y <yc+raio; y++) {
            for ( int z = 0 ; z <zc+raio; z++) {
                if( ( (double)(x-xc)*(double)(x-xc) + 
                        (double)(y-yc)*(double)(y-yc) + 
                        (double)(z-zc)*(double)(z-zc)) < raio){
                    e.cutVoxel(x,y,z);
                }
            }
        }
    }
}
CutSphere::~CutSphere() {
}

