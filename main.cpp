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
    }
    escultura->writeOFF("escultura.off");
    for(int i=0;i<dados.size();i++){
        delete dados[i];
    }
    
    return 0;
}

