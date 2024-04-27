#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int* ptr = &x; // ptr holds the address of x

    std::cout << "The dereference of pointer ptr to get the value stored in ptr(address) : " << *ptr << std::endl;
    // Printing the address stored in the pointer
    std::cout << "The address stored in ptr (address of x): " << ptr << std::endl;

    // Printing the address of the pointer itself
    std::cout << "The address of ptr itself: " << &ptr << std::endl;

    return 0;
}
