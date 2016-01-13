//Created by Zach Pedersen
//9/19/15
//Reads a list of grades and produces various outputs
//Using multiple files

#include <iostream>
using namespace std;

void show_grades( int data[], int arg);
void maxGrade( int data[], int arg);
void minGrade( int data[], int arg);
int gradeList[15] {55, 87, 93, 77, 92, 88, 67, 81, 84, 73, 81, 92, 89, 100, 62};
int listSize = sizeof(gradeList)/sizeof(int);

int main()
{
    cout << "Grade List Calculator" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    show_grades( gradeList, listSize);                     //Reads through list and assigns letter grades
    minGrade( gradeList, listSize);                        //Goes through list of grades and finds lowest grade
    maxGrade( gradeList, listSize);                        //Goes through list of grades and finds highest grade

    return 0;
}
