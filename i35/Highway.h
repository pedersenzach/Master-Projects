#pragma once
#include "Car.h"


const int Max_cars = 7;//Control How many number cars are in simulation

class LinkedList{
    public:
        int numberOfNodes = 0;
        Node * head;  //head of list
        Node * tail;  //end of list
    public:
        //constructor
        LinkedList();
        void checkList(void);

        //Mutators
        void insertFront( int val );
        void insertBack( int val );
        void move(void);
        void pass(void);
        void draw(void);
        void initNodes(int);

};

void display(Node*headPtr);




