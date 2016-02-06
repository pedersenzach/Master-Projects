//Program that can add, subtract, multiply, and divide Complex numbers
//created by Zach Pedersen for Exam lab 2

#include "Complex.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {

    cout << "Complex Number Calculator by Zach Pedersen" << endl << endl;                 //Program Header
    cout << "-----------------------------------------------------------------" << endl;

    int counter = 0;                                                                      //Initiate counter for loop
    bool go = true;                                                                       //Initiate condition for loop
    while( go == true ){
        if(counter != 0){
            cout << endl << endl << endl;                                                 //If Looping back, space out text
        }

        cout << "Enter the REAL number of the first complex number(ex. 4): ";
        long double a;
        cin >> a;                                                                         //Get real number from user
        cout << endl;
        cout << "Enter the IMAGINARY number of the first Complex number(ex. 2): ";
        long double b;
        cin >> b;                                                                         //Get i from user
        if( b < 0){
            cout << "First Complex number: " << a << b << "i" << endl << endl;            //Removes + if number is a negative
        }
        else{
            cout << "First Complex number: " << a << "+" << b << "i" << endl << endl;
        }

        cout << "Would you like to add, subtract, multiply, or divide('+','-','*','/'): ";
        string x;                                                                         //Get operator from user
        cin >> x;

        cout << endl << endl << endl << endl << endl << "Enter the REAL number of the second complex number(ex. 0): ";
        long double c;
        cin >> c;                                                                         //Get second real number from user
        cout << endl << "Enter the IMAGINARY number of the second Complex number(ex. 66): ";
        long double d;
        cin >> d;                                                                         //Get second i from user
        if( d < 0){
            cout << "Second Complex number: " << c << d << "i" << endl << endl << endl;   //Removes +if number is negative
        }
        else{
            cout << "Second Complex number: " << c << "+" << d << "i" << endl << endl << endl;
        }
        Complex c1(a, b);                                                                 //Input data from user into class
        Complex c2(c, d);
        if( x == "-"){                                                                    //Subtraction
            Complex c3 = c1 - c2;                                                         //Subtraction
            if( b < 0){
                cout << a << b << "i " << "- ";
            }
            else if( b >= 0){
                cout << a << "+" << b << "i " << "- ";
            }
            if( d < 0){
                cout << c << d << "i " << "= " << c3 << endl;
            }
            else if( d >= 0){                                                             //Subtraction
                cout << c << "+" << d << "i " << "= " << c3 << endl;                      //Subtraction
            }
        }
        else if(x == "+"){
            Complex c3 = c1 + c2;                                                         //Addition
            if( b < 0){                                                                   //Addition
                cout << a << b << "i " << "+ ";
            }
            else if( b >= 0){
                cout << a << "+" << b << "i " << "+ ";
            }
            if( d < 0){
                cout << c << d << "i " << "= " << c3 << endl;
            }
            else if( d >= 0){
                cout << c << "+" << d << "i " << "= " << c3 << endl;                      //Addition
            }                                                                             //Addition
        }
        else if(x == "*"){
            Complex c3 = c1 * c2;                                                         //Multiplication
            if( b < 0){                                                                   //Multiplication
                cout << a << b << "i " << "* ";
            }
            else if( b >= 0){
                cout << a << "+" << b << "i " << "* ";
            }
            if( d < 0){
                cout << c << d << "i " << "= " << c3 << endl;
            }
            else if( d >= 0){
                cout << c << "+" << d << "i " << "= " << c3 << endl;                      //Multiplication
            }
        }
        else if(x == "/"){
            Complex c3 = c1 / c2;
            if( b < 0){
                cout << a << b << "i " << "/ ";                                           //Division
            }
            else if( b >= 0){
                cout << a << "+" << b << "i " << "/ ";
            }
            if( d < 0){
                cout << c << d << "i " << "= " << c3 << endl;
            }
            else if( d >= 0){
                cout << c << "+" << d << "i " << "= " << c3 << endl;                      //Division
            }
        }
    counter += 1;
    cout << "Continue(y/n)?: ";
    string n;
    cin >> n;
    if( n == "y" or "Y"){                                                                 //Do you want to loop back?
        go = true;
    }
    else{
        go = false;
    }
    }

}
