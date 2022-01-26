#include "Interpretador.h"
#include "PutBox.h"
#include "CutBox.h"
#include "PutSphere.h"
#include "CutSphere.h"
#include "PutEllipsoid.h"
#include "CutEllipsoid.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

Interpretador::Interpretador() {
}

Interpretador::Interpretador(const Interpretador& orig) {
}

Interpretador::~Interpretador() {
}
vector<FiguraGeometrica *> Interpretador::parse(std::string nomeArquivo){
    vector<FiguraGeometrica *> figuras;
    std::ifstream fileIn;
    std::stringstream stringStream;
    std::string lineString,t;
    
    fileIn.open(nomeArquivo);
    
    if(!fileIn.is_open()){
        std::cout<<"Erro ao abrir o arquivo\n";
        exit(0);
    }
    while(fileIn.good()){
        std::getline(fileIn,lineString);
        if(fileIn.good()){
            stringStream.clear();
            stringStream.str(lineString);
            stringStream>>t;
            if(stringStream.good()){
                if(t.compare("dim")==0){
                    stringStream>>dimx>>dimy>>dimz;
                }
                
            }
            
            if (t.compare("putBox")==0 ) {
                int xi,xf, yi,yf, zi,zf;
                stringStream >> xi>>xf >> yi>>yf >> zi>>zf >> r >> g >> b >> a;
                figuras.push_back(new PutBox(xi,xf, yi,yf, zi,zf,r,g,b,a));
            }
            if (t.compare("cutBox")==0 ) {
                int xi,xf, yi,yf, zi,zf;
                stringStream >> xi>>xf >> yi>>yf >> zi>>zf;
                figuras.push_back(new CutBox(xi,xf, yi,yf, zi,zf));
            }
            
            if (t.compare("putSphere")==0 ) {
                int xc,yc, zc,raio;
                stringStream >> xc>>yc >> zc>>raio>>r >> g>>b>>a;
                figuras.push_back(new PutSphere(xc,yc,zc,raio,r,g,b,a));
            }
            if (t.compare("cutSphere")==0 ) {
                int xc,yc, zc,raio;
                stringStream >> xc>>yc >> zc>>raio;
                figuras.push_back(new CutSphere(xc,yc,zc,raio));
            }
            
            if (t.compare("putEllipsoid")==0 ) {
                int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
                stringStream >> xcenter>>ycenter >> zcenter>> rx >> ry >> rz>>r >> g>>b>>a;
                figuras.push_back(new PutEllipsoid(xcenter,  ycenter,  zcenter,  rx,  ry,  rz,r,g,b,a));
            }
            
            if (t.compare("cutEllipsoid")==0 ) {
                int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
                stringStream >> xcenter>>ycenter >> zcenter>> rx >> ry >> rz;
                figuras.push_back(new CutEllipsoid(xcenter,  ycenter,  zcenter,  rx,  ry,  rz));
            }
        }
    }
    return figuras;
}

int Interpretador::getDimx(){
    return this->dimx;
}
int Interpretador::getDimy(){
    return this->dimy;
}
int Interpretador::getDimz(){
    return this->dimz;
}
