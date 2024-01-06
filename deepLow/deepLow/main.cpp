//
//  main.cpp
//  deepLow
//
//  Created by 陈孝凤 on 11/27/23.
//

#include <iostream>
using namespace std;

class Person
{
public:
    //所有对象共享同一份内存
    //编译阶段就分配内存
    //类内声明，类外初始化操作
    static int m_Age;
    
    //静态成员函数只喜欢静态成员变量
    static void func()
    {
        //m_B=200;
        //会报错
    }
private:
    static int m_Agee;
    int m_B;
};
int Person::m_Age=100;
int Person::m_Agee=300;

class Personone
{
public:
    void showPerson()
    {
        m_A=100;
    }
    int m_A;
};

void test01()
{
    Person p;
    cout<<p.m_Age<<endl;
    
    Person p2;
    p2.m_Age=200;
    
    cout<<p.m_Age<<endl;
    cout<<Person ::m_Age<<endl;
    //m_Agee is a private member of "Person";

}


int main(int argc, const char * argv[]) {
    
    test01();
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
