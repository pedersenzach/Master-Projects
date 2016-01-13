//Written By Zach Pedersen
//Hypotenuse Program for float points

#include <iostream>
#include <cmath> //Thanks to cplusplus.org for showing me how to squareroot

using namespace std;

float doMath( float(first), float(second)){
    float(hypotenuse) = (first * first) + (second * second);
    float(Answer) = sqrt(hypotenuse);


    return Answer;
}

float getInputs(int x){
    float(a) = 4.20;
    if ( x < 1 )
        {
        cout << "Enter the length of the first side.( Ex: 8.2): " << endl << "" << endl;
        cin >> a;
        }
    else
        {
        cout << "Enter the length of the second side( Ex: 4.20).: " << endl << "" << endl;
        cin >> a;
        cout << "" << endl;
        }
    return a;
    }

int main()
{
    cout << "HYPOTENUSE CALCULATOR FOR TRIANGLES" << endl << "By Zach Pedersen" << endl;
    cout << "" << endl;
    cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" <<endl;
    cout << "" << endl;
    float(first_side) = 0.0;
    float(second_side) = 0.0;
    int(x) = 0;

    while( first_side >= 0 )
        {
            first_side = getInputs( x );
            if(first_side < 0){
                cout << "Calculator quit..." << endl;
            }
            else{
            second_side = getInputs( 1 );
            float(hypotenuse) = doMath(float(first_side), float(second_side));
            cout << "The length of the hypotenuse is " << hypotenuse << endl << "" << endl << "" << endl;
            cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl;
            cout << "Enter a Negative integer for the first side to quit" << endl;
            cout << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*" << endl << endl << endl;
            }
        }

    return 0;
}
