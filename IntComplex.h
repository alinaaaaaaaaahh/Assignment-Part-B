// IntComplex.h

#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H

class IntComplex {
private:
    int real;
    int imag;

public:
    IntComplex();
    IntComplex(int r, int i);
    IntComplex operator+(const IntComplex& other) const;
    IntComplex operator-(const IntComplex& other) const;
    IntComplex operator*(const IntComplex& other) const;
    IntComplex operator/(const IntComplex& other) const;

    void display() const;
};

#endif
