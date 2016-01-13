//Created by Zach Pedersen
//9/19/15
//Function for finding the highest grade in the list

#include <iostream>
#include "MaxFunction.h"
using namespace std;

void maxGrade( int data[], int arg){
    int holder;
    for(int i=0; i<arg;i++){
        if (data[i] > holder){
                holder = data[i];
        }
    }
    cout << endl <<  "The Highest grade is an " << holder << endl;
}

