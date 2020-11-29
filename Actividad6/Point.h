//
//  Point.h
//  Actividad6
//
//  Created by Sergio Gonzalez on 23/11/20.
//

#ifndef Point_h
#define Point_h

class Point {
    
private:
    double x;
    double y;
    
public:
//    Metodos Contructores
    Point();
    Point(double x,double y);
    
//    Metodos Get
    double getX(){return x;}
    double getY(){return y;}
    
//    Metodos Set
    void setX(double x);
    void setY(double y);
     
//    Otros Metodos
    double distance (Point other);
    void imprimir();
    
    
    
};


#endif /* Point_h */
