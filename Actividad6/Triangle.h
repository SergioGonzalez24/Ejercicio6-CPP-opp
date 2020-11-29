//
//  Triangle.hpp
//  Actividad6
//
//  Created by Sergio Gonzalez on 24/11/20.
//

#ifndef Triangle_h
#define Triangle_h
#include "Point.h"

class Triangle {
    
private:
    Point V1;
    Point V2;
    Point V3;
    
public:
//    Metodo Constructor
    Triangle(double x1,double y1, double x2, double y2, double x3, double y3);
    
//    Metodos Get
    Point getV1() {return V1;}
    Point getV2() {return V2;}
    Point getV3() {return V3;}
    
//    Metodos Set
    void setV1(double x, double y);
    void setV2(double x, double y);
    void setV3(double x, double y);
    
//    Otros Metodos
    double perimenter();
    double area();
    void imprimir();
};

#endif /* Triangle_hpp */
