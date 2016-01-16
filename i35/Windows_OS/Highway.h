#pragma once
#include "Car.h"

//Control How max number cars are in simulation
const int Max_cars = 6;

class LinkedList{
    private:
        int numberOfNodes = 0;
        Node * head;
        Node * tail;
    public:
        //constructor
        LinkedList();

        //Mutators
        void pass();
        void insertFront( int val );
        void insertBack( int val );
        void move(void);
        void draw(void);
        void print(void);
        void initNodes(int);
};


