//
//  main.cpp
//  polymorphism
//
//  Created by 陈孝凤 on 11/29/23.
//

#include <iostream>
using namespace std;
#include <string>

class Calculator
{
public:
    int getResult(string oper)
    {
        if(oper=="+")
        {
            return m_Num1+m_Num2;
        }
        else if(oper=="-")
        {
            return m_Num1-m_Num2;
        }
        else if(oper=="*")
        {
            return m_Num1*m_Num2;
        }
        
            return 0;
        
    }
    
    int m_Num1;
    int m_Num2;
};

void test00()
{
    Calculator c;
    c.m_Num1=10;
    c.m_Num2=20;
    
    cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
    cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
    cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
    cout<<c.m_Num1<<" "<<c.m_Num2<<"="<<c.getResult("6")<<endl;
}


class Animal
{
public:
    virtual void speak()
    {
        cout<<"Animal is speaking"<<endl;
    }
};

class Cat:public Animal
{
public:
    void speak(){
        cout<<"Cat is speaking"<<endl;
    }
};

void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat catfiona;
    doSpeak(catfiona);
}

void test02()
{
    cout<<"sizeof Animal:"<<sizeof(Animal)<<endl;
}


class AbstractCaculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};

class Addcalculator :public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num1+m_Num2;
    }
};


class Subcalculator :public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num1-m_Num2;
    }
};

class Mulcalculator :public AbstractCaculator
{
public:
    int getResult()
    {
        return m_Num1*m_Num2;
    }
};



void test99()
{
    AbstractCaculator *abc=new Addcalculator;
    abc -> m_Num1=100;
    abc -> m_Num2=2;
    
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    
    delete abc;
    
    abc=new Subcalculator;
    abc -> m_Num1=100;
    abc -> m_Num2=2;
    
    cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
}

class Basef
{
public:
    virtual void func()=0;
    
};

class Son : public Basef
{
public:
    virtual void func(){
        cout<<"func函数调用"<<endl;
    };
};

void test55()
{
    Basef *base=new Son;
    base->func();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    test02();
    test00();
    test99();
    test55();
    return 0;
}
