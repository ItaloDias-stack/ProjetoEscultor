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
vector<FiguraGeometrica *> Interpretador::interpretarArquivos(std::string nomeArquivo){
    vector<FiguraGeometrica *> figuras;
    std::ifstream fileIn;
    std::stringstream stringStream;
    std::string lineString,operacao;
    float r,g,b,a;
    fileIn.open(nomeArquivo);
    
    if(!fileIn.is_open()){
        std::cout<<"Erro ao abrir o arquivo\n";
        exit(0);
    }
    while(fileIn.good()){
        if(std::getline(fileIn,lineString)){
            stringStream.clear();
            stringStream.str(lineString);
            stringStream>>operacao;
            if(stringStream.good()){
                if(operacao.compare("dim")==0){
                    stringStream>>dimx>>dimy>>dimz;
                }
                if (operacao.compare("putBox")==0 ) {
                    int xi,xf, yi,yf, zi,zf;
                    stringStream >> xi>>xf >> yi>>yf >> zi>>zf >> r >> g >> b >> a;
                    figuras.push_back(new PutBox(xi,xf, yi,yf, zi,zf,r,g,b,a));
                }
                if (operacao.compare("cutBox")==0 ) {
                    int xi,xf, yi,yf, zi,zf;
                    stringStream >> xi>>xf >> yi>>yf >> zi>>zf;
                    figuras.push_back(new CutBox(xi,xf, yi,yf, zi,zf));
                }
            
                if (operacao.compare("putSphere")==0 ) {
                    int xc,yc, zc,raio;
                    stringStream >> xc>>yc >> zc>>raio>>r >> g>>b>>a;
                    figuras.push_back(new PutSphere(xc,yc,zc,raio,r,g,b,a));
                }
                if (operacao.compare("cutSphere")==0 ) {
                    int xc,yc, zc,raio;
                    stringStream >> xc>>yc >> zc>>raio;
                    figuras.push_back(new CutSphere(xc,yc,zc,raio));
                }
            
                if (operacao.compare("putEllipsoid")==0 ) {
                    int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
                    stringStream >> xcenter>>ycenter >> zcenter>> rx >> ry >> rz>>r >> g>>b>>a;
                    figuras.push_back(new PutEllipsoid(xcenter,  ycenter,  zcenter,  rx,  ry,  rz,r,g,b,a));
                }
            
                if (operacao.compare("cutEllipsoid")==0 ) {
                    int xcenter,  ycenter,  zcenter,  rx,  ry,  rz;
                    stringStream >> xcenter>>ycenter >> zcenter>> rx >> ry >> rz;
                    figuras.push_back(new CutEllipsoid(xcenter,  ycenter,  zcenter,  rx,  ry,  rz));
                }
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
