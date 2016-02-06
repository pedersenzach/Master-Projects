#pragma once
#include "Graphics.h"

class Node{
    private:
        int lane;
        float xPos;
        float yPos;
        float xSpeed;
        float xPassSpeed;
        float ySpeed;
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
        float getXSpeed(void);
        float getYSpeed(void);
        float getXPos(void);
        float getYPos(void);
        void drawNode(void);
        void moveNode(void);


        //Car Mutators
        void setNextNode( Node * ptr);
        void setID( int );
        void setPrevNode( Node * ptr);
        void setLane(int);
        void setNodeColor( ColorName );
        void setXPos(float);
        void setYPos(float);
        void setXSpeed(float);
        void setYSpeed(float);
};

int randomizer(int, int);
ColorName findColor(int);
