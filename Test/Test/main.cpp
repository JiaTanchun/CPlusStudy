//
//  main.cpp
//  Test
//
//  Created by 陈孝凤 on 11/24/23.
//


#include <iostream>
using namespace std;

class Cube
{
public:
      int getHeight()
      {
            return m_H;
      }
      void setH(int h)
      {
            m_H=h;
      }
      int getWidth()
      {
            return m_W;
      }
      void setW(int w)
      {
            m_W=w;
      }
      int getLength()
      {
            return m_L;
      }
      void setL(int l)
      {
            m_L=l;
      }
      int calculateS()
      {
            return 2*m_H*m_L+2*m_H*m_W+2*m_L*m_W;
      }
      int calculateV()
      {
            return m_H*m_W*m_L;
      }
      bool isSameByClass(Cube &c)
    {
          if(m_H==c.getLength()&&m_W==c.getWidth()&&m_H==c.getHeight())
          {
              return true;
          }
          return false;
      }
      
                  
private:
      int m_H;
      int m_W;
      int m_L;
                  
                  
};

bool isSame(Cube &c1,Cube &c2)
{
    if(c1.getLength()==c2.getLength()&&c1.getWidth()==c2.getWidth()&&c1.getHeight()==c2.getHeight())
    {
        return true;
    }
    return false;
}

int main(){
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    
    cout<<"c1的面积为："<<c1.calculateS()<<endl;
    cout<<"c1体积为"<<c1.calculateV()<<endl;
    Cube c2;
    c2.setL(20);
    c2.setH(20);
    c2.setW(20);
    
    bool ret=isSame(c1,c2);
    if (ret)
    {
        cout<<"cube is same or not?"<<ret<<endl;
    }
    else
    {
        cout<<"is not same"<<endl;
    }
    ret=c1.isSameByClass(c2);
    if (ret)
    {
        cout<<"member function: cube is same or not?"<<ret<<endl;
    }
    else
    {
        cout<<"member function :is not same"<<endl;
    }
    
}
