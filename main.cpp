#include <cstdlib>
#include<iostream>
#include "Sculptor.h"
using namespace std;

int main() {
    
    //Iglu
    Sculptor escultura(100,100,100);
    escultura.setColor(0,1,1,0.75);
    escultura.putSphere(10,10,6,12);
    
    //Chao
    escultura.setColor(1,1,1,0.75);
    escultura.putBox(0,40,0,40,0,6);
    escultura.cutBox(0,40,0,40,0,5);
    
    //Barriga
    escultura.setColor(1,1,1,0.75);
    escultura.putSphere(30,30,10,5);
    
    //Cabeca
    escultura.setColor(1,1,1,0.75);
    escultura.putSphere(30,30,16,3);
    
    //Olho
    escultura.setColor(0.3,0.5,0.5,0);
    escultura.putSphere(32,32,17,1);
    
    //Olho
    escultura.setColor(0.3,0.5,0.5,0);
    escultura.putSphere(28,32,17,1);
    
    //Bracos
    escultura.setColor(0,0,0,0.75);
    escultura.putBox(22,38,30,31,10,11);
    
    //Boca
    escultura.setColor(0,0,0,0.75);
    escultura.putBox(29,30,31,32,14,15);
    
    escultura.cutSphere(10,10,11,5);
    escultura.cutBox(8,12,3,35,7,10);
    
    escultura.writeOFF("escultura.off");
    return 0;
}

