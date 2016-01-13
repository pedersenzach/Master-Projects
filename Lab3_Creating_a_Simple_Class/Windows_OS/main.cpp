//Program to generate the Star Wars name of a person using custom classes
//Written by Zachary Pedersen
//Lab 3


#include <iostream>
#include "people.h"
using namespace std;

int main() {
    cout << "Star Wars name Generator By Zachary Pedersen" << endl;
    cout << "-------------------------------------------------------------------------------" << endl << endl;

    People person[5];                               //Number of people
    int listSize = sizeof(person)/sizeof(People);   //Number of people in the array above

    for( int i = 0 ; i < listSize; i++){
        person[i].set_name();                       //Sets First and last name of person
        person[i].set_maiden();                     //Sets mother's maiden name of person
        person[i].set_birth();                      //Sets Birth City of person
        person[i].gen_star_wars();                  //Generates the Star Wars name of the person using the data above

        cout << endl << endl << endl << endl << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    }

    return 0;
}
