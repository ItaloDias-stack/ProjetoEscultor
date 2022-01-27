#include <cstdlib>
#include<iostream>
#include "Sculptor.h"
#include "Interpretador.h"
#include <vector>
  
using namespace std;

int main() {
    
    Interpretador interpretador;
    vector<FiguraGeometrica*> dados = interpretador.interpretarArquivos("esqueletoEscultura.txt");
    Sculptor *escultura=new Sculptor(interpretador.getDimx(),interpretador.getDimy(),interpretador.getDimz());
    
    for(int i=0;i<dados.size();i++){
        dados[i]->draw(*escultura);
        delete dados[i];
    }
    escultura->writeOFF("escultura.off");
    return 0;
}

