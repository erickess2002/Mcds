#include <iostream>
#include "Complex.hpp"

    Complex::Complex(float r, float i){

        real = r;
        imag = i;

    }

    void Complex::print(){

        std::cout << "Numero imaginario: " <<  real << " + " << imag << "i" << std::endl;

    }


    Complex operator+(Complex& n1, Complex& n2){

        float r, i;

        r = n1.real + n2.real;
        i = n1.imag + n2.imag;

        return Complex {r, i};

    }

    std::ostream& operator<<(std::ostream& out, Complex& num){

        out << num.real << " + " << num.imag << "i" << std::endl;

    }

    std::istream& operator>>(std::istream& in, Complex& num){

        in >> num.real >> num.imag;

        return in;

    }

    // Complex Complex::operator+(Complex& num){
    
    //     float r, i;

    //     r = this->real + num.real;
    //     i = this->imag + num.imag;

    //     return Complex {r, i};

    // }
    
    // Complex Complex::operator-(Complex& num){

    //     float r,i;

    //     r = this->real - num.real;
    //     i = this->imag - num.imag;

    //     return Complex {r, i};


    // }

    // Complex Complex::operator*(Complex& num){

    //     float r, i;

    //     r = this->real * num.real;
    //     i = this->imag * num.imag;

    //     return Complex {r, i};

    // }

    // Complex Complex::operator/(Complex& num){

    //     float r, i;

    //     r = this->real / num.real;
    //     i = this->imag / num.imag;

    //     return Complex {r, i};

    // }