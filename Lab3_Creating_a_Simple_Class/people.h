#ifndef PEOPLE_H
#define PEOPLE_H
//Program to generate the Star Wars name of a person using custom classes
//Written by Zachary Pedersen
//Lab 3

#include <string>
using namespace std;

class People {
    private:
        string first_name;
        string last_name;
        string maiden_name;
        string birth_town;

    public:
        void set_name(void);          // store the first and last name strings
        void set_maiden(void);        // store maiden name staring
        void set_birth(void);         // store birth town string

        void gen_star_wars(void);     // return the star wars name from loaded data
};

#endif
