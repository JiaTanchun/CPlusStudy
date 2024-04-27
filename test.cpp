#include<iostream>
using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout<<a<<" "<<b<<std::endl;
    std::cout<<*a<<" "<<*b<<std::endl;
}

int main() {
    int a = 1, b = 2;
    swap(&a, &b);
    std::cout<<a<<" "<<b<<std::endl;
    return 0;
}