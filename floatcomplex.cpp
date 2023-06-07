#include "FloatComplex.h"
#include <iostream>
using namespace std;

FloatComplex::FloatComplex(float r, float i) {
    real = 0.0;
    imag = 0.0;
}
FloatComplex::FloatComplex(float r, float i) : IntComplex(static_cast<int>(r), static_cast<int>(i)) {
    real = r;
    imag = i;
}
//formula for addition of real and imaginary number
FloatComplex FloatComplex::operator+(const FloatComplex& other) const {
    float Real1 = real + other.real;
    float imag1 = imag + other.imag;
    return FloatComplex(Real1, imag1);
}
// formula for Difference of real and imaginary number 
FloatComplex FloatComplex::operator-(const FloatComplex& other) const {
    float Real1 = real - other.real;
    float imag1 = imag - other.imag;
    return FloatComplex(Real1, imag1);
}
//formula for product of real and imaginary number 
FloatComplex FloatComplex::operator*(const FloatComplex& other) const {
    float Real1 = (real * other.real) - (imag * other.imag);
    float imag1 = (real * other.imag) + (imag * other.real);
    return FloatComplex(Real1, imag1);;
}
//formula for Divivsion of real and imaginary number
FloatComplex FloatComplex::operator/(const FloatComplex& other) const {
    float divisor = (other.real * other.real) + (other.imag * other.imag);
    float Real1 = ((real * other.real) + (imag * other.imag)) / divisor;
    float imag1 = ((imag * other.real) - (real * other.imag)) / divisor;
    return FloatComplex(Real1, imag1);
}
//printing real and imaginary number
void FloatComplex::display() const { 
    cout << real << " +  " <<imag << "i"<<endl;
}
