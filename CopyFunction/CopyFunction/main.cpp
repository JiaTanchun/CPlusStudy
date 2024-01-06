//
//  main.cpp
//  CopyFunction
//
//  Created by 陈孝凤 on 11/25/23.
//

#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"无参"<<endl;
    }
    Person(int a)
    {
        age=a;
        cout<<"有参"<<endl;
    }
    Person(const Person &p)
    {
        age=p.age;
        cout<<"my age"<<endl;
    }
    ~Person()
    {
        cout<<"析构函数"<<endl;
    }
    int age;
    
};

void test01()
{
    //1.括号法
    //Person p1;
    //Person p2(10);
    //Person p3(p2);
    
    //2.显示法
    //Person p1;
    //Person p2=Person(10);
    //Person p3=Person(p2);
    
    //3.隐士转化法
    Person p4=10;
    Person p5 =p4;
    
    cout<<"p2 age:"<<p4.age<<endl;
    cout<<"p3.age :"<<p5.age<<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    test01();
    std::cout << "Hello, World!\n";
    return 0;
}
