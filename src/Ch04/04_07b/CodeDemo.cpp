// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>
#include <complex>

int main(){
    std::vector<std::complex<double>> points; 

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(6.1, 9.7));

    std::cout << "First real: " << points.begin()->real() << std::endl;
    std::cout << "Imag, index 1: " << points[1].imag() << std::endl;
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;
    std::cout << "Last Imaginary: " << (points.end() - 1)->imag() << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
