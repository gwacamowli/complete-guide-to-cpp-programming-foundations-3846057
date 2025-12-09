// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

// Preprocessor directives should not have trailing semicolon
// #define LEVEL_COUNT 4

int main(){
    // size_t = unsigned int (natural number)
    const size_t LEVEL_COUNT = 4;
    // enemies array of ints, of length 4
    int enemies[LEVEL_COUNT];
    // predefined values (initialising at declaration
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};


    std::cout << std::endl << std::endl; 
    return 0;
}
