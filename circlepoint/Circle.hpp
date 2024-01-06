//
//  Circle.hpp
//  circlepoint
//
//  Created by 陈孝凤 on 11/25/23.
//

#ifndef Circle_hpp
#define Circle_hpp
#pragma once
#include <iostream>
#include <stdio.h>
#include "Point.hpp"
using namespace std;

class Circle
{
public:
    void setR(int r);
    int getR();
    
    void setCenter(Point center);
    
    Point getCenter();
   
    
    
private:
    int m_R;
    Point m_Center;
};
#endif /* Circle_hpp */
