#pragma once
#include "Graphics.h"

class Node{
    private:
        int lane;
        float xPos;
        float yPos;
        float xSpeed;
        float xMinSpeed;
        float xMaxSpeed;
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
        int getID(void)const;
        Node * getPrevNode(void)const;
        Node * getNextNode(void)const;
        int getLane(void)const;
        ColorName getNodeColor(void)const;
        float getXSpeed(void)const;
        float getXMinSpeed(void)const;
        float getXMaxSpeed(void)const;
        float getYSpeed(void)const;
        float getXPos(void)const;
        float getYPos(void)const;
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
        void setXMinSpeed(float);
        void setXMaxSpeed(float);
        void setYSpeed(float);
};

int randomizer(int, int);
ColorName findColor(int);
