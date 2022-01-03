#include <cstdlib>
#include<iostream>
#include "Sculptor.h"
using namespace std;

int main() {
    Sculptor trono(50,50,50);
    trono.setColor(0.0,0.0,1.0,0.75);
    trono.putBox(0,9,0,9,0,9);
    trono.setColor(0.0,1.0,0.0,0.75);
    trono.putBox(10,20,10,20,10,20);
    trono.writeOFF("trono.off");
    return 0;
}

