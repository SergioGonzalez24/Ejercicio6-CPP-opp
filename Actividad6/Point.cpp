//
//  Point.cpp
//  Actividad6
//
//  Created by Sergio Gonzalez on 23/11/20.
//

#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point() {
    
    x=0;
    y=0;
}

Point::Point(double x, double y) {
    
    this->x=x;
    this->y=y;
}

void Point::setX(double x) {
    
    this->x=x;
}

void Point::setY(double y) {
    this->y=y;
}

double Point:: distance(Point other) {
    
    return sqrt(pow(x-other.x,2)+pow(y-other.y,2));
    
}

void Point::imprimir() {
    
    std::cout<<"("<< x <<","<< y <<")"<<std::endl;
}

