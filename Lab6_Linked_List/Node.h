#pragma once
#include <iostream>
using namespace std;

class Node{
    private:
    string name;
    Node * prev;
    Node * next;

    public:
    Node();
    Node( string val, Node * nextNode);
    Node( string val, Node * prevNode, Node * nextNode);
    string getName(void);
    Node * getNextPtr(void);
    void setNextPtr( Node * ptr);
    void setName( string );
    void setPrevPtr( Node * ptr);
    Node * getPrevPtr( void);

};
