#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H

#include <vector>
#include "FiguraGeometrica.h"
#include <string>
using namespace std;
class Interpretador {
    int dimx,dimy,dimz;
    
public:
    Interpretador();
    Interpretador(const Interpretador& orig);
    int getDimx();
    int getDimy();
    int getDimz();
    vector<FiguraGeometrica *> interpretarArquivos(std::string nomeArquivo);
    virtual ~Interpretador();
private:

};

#endif /* INTERPRETADOR_H */

