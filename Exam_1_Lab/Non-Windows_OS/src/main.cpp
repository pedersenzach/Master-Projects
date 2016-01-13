//Program for comparing two user entered numbers
//Written By Zachary Pedersen



#include <iostream>
#include "compare.h"                               //Add Compare Functions from compare.cpp/.h
using namespace std;

int main()
{
    cout << "COMPARE TWO NUMBERS by Zach P" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    float param1;
    float param2;
    cout << "Enter first number: ";                //Get First Number
    cin >> param1;
    cout << endl << "Enter second number: ";       //Get Second Number
    cin >> param2;
    char code = compare( param1, param2 );         //Compares the two by sending them to the compare function and returning a value
    if( code == '='){
        cout << endl << param1 << " is equal to " << param2 << endl;
    }
    if( code == '<'){
        cout << endl << param1 << " is less than " << param2 << endl;
    }
    if( code == '>'){
        cout << endl << param1 << " is greater than " << param2 << endl;
    }
    char keepGoing;
    cout << "Continue? (y/n)";                     //Compare Again?
    cin >> keepGoing;
    cout << endl << endl << endl;
    if(keepGoing == 'y'){
        main();
    }
    return 0;
}
