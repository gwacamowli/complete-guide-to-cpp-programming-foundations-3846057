// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    // declaration of ptr, as a pointer to an int
    int *ptr;
    
    ptr = &a; // 

    std::cout << "             The value of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl; // indirection operator
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
