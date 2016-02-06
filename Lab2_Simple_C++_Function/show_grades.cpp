//Created by Zach Pedersen
//9/19/15
//Function to show and assign Letters to number grades

#include <iostream>
#include "show_grades.h"
using namespace std;

void show_grades(int data[], int arg) {
    for(int i=0; i<arg;i++){
        if (data[i] >= 90){
            cout << endl <<  "A grade of " << data[i] << " is an A." << endl;
        }
        else if (data[i] >= 80){
            cout << endl << "A grade of " << data[i] << " is an B." << endl;
        }
        else if (data[i] >= 70){
            cout << endl <<  "A grade of " << data[i] << " is an C." << endl;
        }
        else if (data[i] >= 60){
            cout << endl <<  "A grade of " << data[i] << " is an D." << endl;
        }
        else if (data[i] >= 0){
            cout << endl << "A grade of " << data[i] << " is an F." << endl;
        }
    }
}

