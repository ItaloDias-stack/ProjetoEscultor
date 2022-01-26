#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H

#include <vector>
#include "FiguraGeometrica.h"
#include <string>
using namespace std;
class Interpretador {
    int dimx,dimy,dimz;
    float r,g,b,a;
public:
    Interpretador();
    Interpretador(const Interpretador& orig);
    int getDimx();
    int getDimy();
    int getDimz();
    vector<FiguraGeometrica *> parse(std::string nomeArquivo);
    virtual ~Interpretador();
private:

};

#endif /* INTERPRETADOR_H */

