#include <iostream>
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex{

    private:
        float real, imag;

    public:

    Complex(float = 0.0, float = 0.0);
    void print();
    // Complex operator+(Complex&);
    // Complex operator-(Complex&);
    // Complex operator*(Complex&);
    // Complex operator/(Complex&);
    friend Complex operator+(Complex&, Complex&);
    friend std::ostream& operator<<(std::ostream&, Complex&);
    friend std::istream& operator>>(std::istream&, Complex&);
};



#endif