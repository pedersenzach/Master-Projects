//Created by Zach Pedersen
//9/19/15
//Function for finding the lowest grade in the list

#include <iostream>
#include "MinFunction.h"
using namespace std;


void minGrade( int data[], int arg ){
    int holder;
    for(int i=0; i<arg;i++){
        if (data[i] < holder){
                holder = data[i];
        }

    }
    cout << endl <<  "The lowest grade is an " << holder << endl;
}

