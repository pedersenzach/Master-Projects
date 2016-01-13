#pragma once
#include "Car.h"

const int Max_cars = 15;

class LinkedList{
    private:
        int numberOfNodes = 0;
        Node * head;
        Node * tail;
    public:
        LinkedList();
        void insert( int val );
        void insertFront( int val );
        void insertBack( int val );
        void move(void);
        void draw(void);
        void print(void);
        void initNodes(int);
};


