//
//  main.cpp
//  Destructor
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
        cout<<"Constructor"<<endl;
    }
    ~Person()
    {
        cout<<"Destructor"<<endl;
    }
    
    
};
void test01()
{
    Person p;
}

int main(int argc, const char * argv[]) {
    //test01();
    Person p;
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
