// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

// Take arguments
int square(int x){
    x = x * x;
    return x;
}

// Take args by address
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Take args by ref
void swap(int& x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
