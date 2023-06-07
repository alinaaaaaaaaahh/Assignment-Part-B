// IntComplex.cpp
#include "IntComplex.h"
#include <iostream>
using namespace std;

IntComplex::IntComplex() {
    real = 0;
    imag = 0;
}
IntComplex::IntComplex(int r, int i) { //non default constructor
    real = r;
    imag = i;
}
IntComplex IntComplex::operator+(const IntComplex& other) const {
    int sumReal = real + other.real;
    int sumImaginary = imag + other.imag;
    return IntComplex(sumReal, sumImaginary);
}

IntComplex IntComplex::operator-(const IntComplex& other) const {
    int diffReal =  real - other. real;
    int diffImaginary = imag - other.imag;
    return IntComplex(diffReal, diffImaginary);
}

IntComplex IntComplex::operator*(const IntComplex& other) const {
    int prodReal = (real * other.real) - (imag * other.imag);
    int prodImaginary = (real * other.imag) + (imag * other.real);
    return IntComplex(prodReal, prodImaginary);
}

IntComplex IntComplex::operator/(const IntComplex& other) const {
    int divisor = (other.real * other.real) + (other.imag * other.imag);
    int divReal = ((real * other.real) + (imag * other.imag)) / divisor;
    int divImaginary = ((imag * other.real) - (real * other.imag)) / divisor;
    return IntComplex(divReal, divImaginary);
}


void IntComplex::display() const { //printing real and imaginary number
    cout << real << " +  " <<imag << "i" <<endl;
}
