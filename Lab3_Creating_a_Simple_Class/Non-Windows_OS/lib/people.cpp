//Program to generate the Star Wars name of a person using custom classes
//Written by Zachary Pedersen
//Lab 3

#include <iostream>
#include "people.h"
#include <string>

string x;

void People::set_name(){
    cout << "What is your first name?: ";
    cin >> x;
    first_name = x;
    cout << endl;

    cout << "What is your last name?: ";
    cin >> x;
    last_name = x;
    cout << endl;
}

void People::set_maiden(){
    cout << "What is your mother's maiden name?: ";
    cin >> x;
    maiden_name = x;
    cout << endl;

}

void People::set_birth(){
    cout << "Where were you born?: ";
    cin >> x;
    birth_town = x;
    cout << endl;

}

string toLowerCase(string data){
    for( int i = 0; i < data.length(); i++){
        data[i] = tolower(data[i]);
    }
    return data;
}

void People::gen_star_wars(){
    string part1 = last_name.substr(0,3);     //Grabs a portion of the string that was entered by the user
    string part2 = first_name.substr(0,2);    //Grabs a portion of the string that was entered by the user
    string part3 = maiden_name.substr(0,2);   //Grabs a portion of the string that was entered by the user
    string part4 = birth_town.substr(0,3);    //Grabs a portion of the string that was entered by the user
    part1 = toLowerCase(part1);               //Deals with cases of the characters
    part2 = toLowerCase(part2);               //Deals with cases of the characters
    part3 = toLowerCase(part3);               //Deals with cases of the characters
    part4 = toLowerCase(part4);               //Deals with cases of the characters
    part1[0] = toupper(part1[0]);             //Deals with cases of the characters
    part3[0] = toupper(part3[0]);             //Deals with cases of the characters
    string swFirstName = part1 + part2;
    string swLastName = part3 + part4;
    string star_wars_name = swFirstName + " " + swLastName;
    cout << star_wars_name << endl;
}
