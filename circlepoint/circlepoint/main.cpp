//
//  main.cpp
//  circlepoint
//
//  Created by 陈孝凤 on 11/25/23.
//

#include <iostream>
using namespace std;
#include "Point.hpp"
#include "Circle.hpp"




void isInCircle(Circle &c, Point &p)
{
    int distance=
    (c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+(c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int rDistance=c.getR()*c.getR();
    
    if (distance==rDistance)
    {
        cout<<"点在圆上"<<endl;
    }
    else if (distance>rDistance)
    {
        cout<<"点在圆外"<<endl;
    }
    else
    {
        cout<<"点在圆内"<<endl;
    }
        
}

int main() {
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    
    Point p;
    p.setX(10);
    p.setY(11);
    
    isInCircle(c,p);
    return 0;
}
