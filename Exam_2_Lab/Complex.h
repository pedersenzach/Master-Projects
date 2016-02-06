#pragma once
#include <iostream>
using namespace std;

class Complex {
    public:
        long double r;
        long double i;
        Complex(long double, long double);
        Complex(long double);
        Complex();
        Complex operator /(const Complex & rhs);
        Complex operator +(const Complex & rhs);
        Complex operator -(const Complex & rhs);
        Complex operator *(const Complex & rhs);
        friend ostream & operator<< (ostream & out, const Complex);
};


