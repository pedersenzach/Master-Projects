#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex( long double _r, long double _i) {
    this->r = _r;
    this->i = _i;
}

Complex::Complex(long double _r) {
    this->r = _r;
    this->i = 0.0;
}

Complex::Complex() {
    this->r = 0.0;
    this->i = 0.0;
}


Complex Complex::operator / (const Complex & rhs){
    Complex temp;
        temp.r = (((this->r * rhs.r) + (this->i * rhs.i))/((rhs.r * rhs.r) + (rhs.i * rhs.i)));
        temp.i = (((this->i * rhs.r) - (this->r * rhs.i))/((rhs.r * rhs.r) + (rhs.i * rhs.i)));
        return temp;

}
Complex Complex::operator - (const Complex & rhs){
    Complex temp;
    temp.r = this->r - rhs.r;
    temp.i = this->i - rhs.i;
    return temp;
}

Complex Complex::operator * (const Complex & rhs){
    Complex temp;
    if( this->i == 0){
        temp.r = this->r * rhs.r;
        temp.i = this->r * rhs.i;
        return temp;
    }
    else if( this->i != 0){
        temp.r = this->r*rhs.r - this->i * rhs.i;
        temp.i = this->r*rhs.i + this->i * rhs.r;
        return temp;
    }
}

Complex Complex::operator + (const Complex & rhs) {
        Complex temp;
        temp.r = this->r + rhs.r;
        temp.i = this->i + rhs.i;
        return temp;
}

ostream  & operator << (ostream & out, const Complex rhs) {
    if( rhs.i < 0){
        return out << rhs.r << rhs.i << "i";
    }
    else{
        return out << rhs.r << "+" << rhs.i << "i";
    }
}
