#ifndef CUTSPHERE_H
#define CUTSPHERE_H

class CutSphere : public FiguraGeometrica {
    int xc,yc,zc,raio;
public:
    CutSphere(int xc,int yc,int zc,int raio , float r,float g,float b,float a);
    CutSphere(const CutSphere& orig);
    virtual ~CutSphere();
    void draw(Sculptor &e);
private:

};

#endif /* CUTSPHERE_H */

