#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "IntComplex.h"
class FloatComplex {
private: 
    float real;
    float imag;

public:
    FloatComplex();  //default constructor
    FloatComplex(float r, float i);  //non default constructor
    FloatComplex operator+(const FloatComplex& obj) const; //declaring functions
    FloatComplex operator/(const FloatComplex& obj) const;
    FloatComplex operator-(const FloatComplex& obj) const;
    FloatComplex operator*(const FloatComplex& obj) const;
    void display() const; //printing real and imaginary number functions
};
#endif  // ending definition of headerfloat
