//
//  Point.hpp
//  circlepoint
//
//  Created by 陈孝凤 on 11/25/23.
//

#ifndef Point_hpp
#define Point_hpp
#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;

class Point
{
public:
    void setX(int x);
 
    int getX();
  
    void setY(int y);
  
    int getY();
   
private:
    int m_X;
    int m_Y;
};


#endif /* Point_hpp */
