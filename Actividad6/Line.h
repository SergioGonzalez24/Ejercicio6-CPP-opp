//
//  Line.hpp
//  Actividad6
//
//  Created by Sergio Gonzalez on 24/11/20.
//

#ifndef Line_h
#define Line_h
#include "Point.h"

class Line {
    
private:
    
    Point v1;
    Point v2;
    
public:
//    Metodo Constructor
    Line(Point v1,Point v2);
    
//    Metodos Get
    Point getV1() {return v1;}
    Point getV2() {return v2;}
    
//    Metodos Set
    void setV1(Point v1);
    void setV2(Point v2);
    
    
//    Otros Metodos
    double lenght();
    void imprimir();

    
};




#endif /* Line_hpp */
