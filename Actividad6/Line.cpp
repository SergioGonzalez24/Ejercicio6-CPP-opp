//
//  Line.cpp
//  Actividad6
//
//  Created by Sergio Gonzalez on 24/11/20.
//

#include "Line.h"
#include <iostream>

Line::Line(Point v1,Point v2) {
    
    this->v1=v1;
    this->v2=v2;
}

void Line::setV1(Point v1) {
    
    this->v1=v1;
    
}

void Line::setV2(Point v2) {
    
    this->v2=v2;
    
}

double Line::lenght() {
    
    return v1.distance(v2);
    
}

void Line::imprimir() {
    
    v1.imprimir();
    std::cout<<"---------";
    v2.imprimir();
    
    
}
