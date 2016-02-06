//Complex.h class for operating on complex numbers. ie: 4+20i
#pragma once
#include <iostream>
using namespace std;

class Complex {
    public:
        //Double type for decimal precision
        double r;
        double i;
        Complex(double, double);
        Complex(double);
        Complex();
        //Division
        Complex operator /(const Complex & rhs);
        //Addition
        Complex operator +(const Complex & rhs);
        //Subtraction
        Complex operator -(const Complex & rhs);
        //Multiplication
        Complex operator *(const Complex & rhs);
        friend ostream & operator<< (ostream & out, const Complex);
        double magnitude(void);
};


