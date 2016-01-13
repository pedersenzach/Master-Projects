#pragma once
#include "Node.h"

class LinkedList{
    private:
        Node * head;
        Node * tail;
    public:
        LinkedList();
        void insert(string val);
        void insertFront( string val );
        void insertBack( string val);
        void insertAlphabetically( string val);
        void removeNode( string val );
        void print(void);
};


