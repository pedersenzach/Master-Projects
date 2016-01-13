#pragma once
#include "Graphics.h"
#include <iostream>
using namespace std;

class Node{
    private:
        int lane;
        int xPos;
        int yPos;
        int xSpeed;
        int ySpeed;
        int id;
        Node * prevNode;
        Node * nextNode;
        ColorName color;
        bool active;
    public:
        //Constructors
        Node();
        Node( int val, Node * prevNode);
        Node( int val, Node * nextNode, Node * prevNode);

        //Car Accessors
        int getID(void);
        Node * getPrevNode( void);
        Node * getNextNode(void);
        int getLane(void);
        ColorName getNodeColor(void);
        int getXSpeed(void);
        int getYSpeed(void);
        int getXPos(void);
        int getYPos(void);
        void drawNode(void);
        void moveNode(void);


        //Car Mutators
        void setNextNode( Node * ptr);
        void setID( int );
        void setPrevNode( Node * ptr);
        void setLane(int);
        void setNodeColor( ColorName );
        void setXPos(int);
        void setYPos(int);
        void setXSpeed(int);
        void setYSpeed(int);
};

int randomizer(int, int);
ColorName findColor(int);
