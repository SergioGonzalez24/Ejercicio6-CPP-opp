//
//  Triangle.cpp
//  Actividad6
//
//  Created by Sergio Gonzalez on 24/11/20.
//

#include "Triangle.h"
#include <iostream>
#include <cmath>
#include "Line.h"
#include "Point.h"


Triangle::Triangle(double x1,double y1, double x2, double y2, double x3, double y3) {
    
    V1=Point(x1,y1);
    V2=Point(x2,y2);
    V3=Point(x3,y3);
}

void Triangle::setV1(double x, double y) {
    
    V1.setX(x);
    V1.setY(y);
}

void Triangle::setV2(double x, double y) {
    
    V2.setX(x);
    V2.setY(y);
}


void Triangle::setV3(double x, double y) {
    
    V3.setX(x);
    V3.setY(y);
}

void Triangle::imprimir() {
    
    std::cout << "Triangle{";
    V1.imprimir();
    std::cout << ", ";
    V2.imprimir();
    std::cout << ", ";
    V3.imprimir();
    std::cout << "}\n";
}

double Triangle::perimenter() {
    
    double sum;
    Line l1(V1,V2);
    Line l2(V2,V3);
    Line l3(V3,V1);
    sum=l1.lenght()+l2.lenght()+l3.lenght();
    return sum;
}

double Triangle::area() {
    
    double area;
    Line l1(V1,V2);
    Line l2(V2,V3);

    area=(l1.lenght()*l2.lenght())/2;
    return area;
}
