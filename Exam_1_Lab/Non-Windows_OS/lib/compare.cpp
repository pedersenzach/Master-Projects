#include <iostream>
#include "compare.h"


char compare( float param1, float param2){
    float x = param1; //Making sure the function has control of the caller's variables
    float y = param2; //Making sure the function has control of the caller's variables
    if( x == y){
        return '=';
    }
    else if( x > y){
        return '>';
    }
    else if( x < y){
        return '<';
    }
}


