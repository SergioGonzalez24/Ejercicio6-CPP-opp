//
//  main.cpp
//  Actividad6
//
//  Created by Sergio Gonzalez and German Guzman 23/11/20.
//

#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"

using std::cout;
using std::endl;


int main() {
     
    
    Point p1;
    Point p2(5,5);
    
    p2.setX(0);
    p2.setY(8);
    
    p2.imprimir();
    
    cout<<"p1=(" << p1.getX()<<"," << p1.getY()<<")" << endl;
    cout<<"p1=(" << p2.getX()<<"," << p2.getY()<<")"<<endl;
    
    cout<<"Distance: " << p1.distance(p2) << endl;
    
    Line l1(p1,p2);
    
    cout<<"L1 = ";
    l1.imprimir();
    cout<< "Lenght of L1 = " << l1.lenght() << endl;
    

    Triangle t1(0, 0, 1, 3, 4, 5);

    
    t1.setV1(1,1);
    t1.setV2(2,2);
    t1.setV3(4,4);
    
    t1.imprimir();
    
    cout<<"El perimetro es: "<<t1.perimenter()<<endl;
    
    cout<<"El area es: "<<t1.area()<<endl;
    
    
    return 0;
}
