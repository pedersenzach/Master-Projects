#include "Highway.h"
#include "Car.h"
#include <iostream>
using namespace std;

//Constructors
LinkedList::LinkedList(){
    int numberOfNodes;
    head = NULL;
    tail = NULL;
    initNodes(Max_cars);
}

//Insert node into back of list (tail)
void LinkedList::insertBack(int val){
    //If list is empty
    if( head == NULL){
        //Head and tail are now the new node
        head = new Node( val, NULL, NULL);
        tail = head;
        //increase number of objects in list by 1
        numberOfNodes += 1;
    } else {
        //If list isn't empty, create pointer for new node
        Node *ptr = new Node( val, tail, NULL );
        //set and hook the current node's previous object pointer with new node
        tail->setPrevNode(ptr);
        //set tail/current node to the new object
        tail = ptr;
        numberOfNodes += 1;
    }
}

//insert object into the front of the list
void LinkedList::insertFront( int val ){
    //If list is empty
    if( head == NULL){
        head = new Node( val, NULL, NULL);
        tail = head;
        numberOfNodes += 1;
    } else {
        //if list isn't emptly
        Node *ptr = new Node( val, NULL, head );
        head->setNextNode(ptr);
        head = ptr;
        numberOfNodes += 1;
    }
}

//Draw the list
void LinkedList::draw(void){
    setColor(BLACK);
    //Draw the Highway on to the screen
    drawBox(-2, 380, 1002, 365);
    drawBox(-2, 365, 1002, 350);
    drawBox(-2, 350, 1002, 335);
    //Draw the objects in the list
    Node *ptr = tail;
    while(ptr != NULL){
        ptr->drawNode();
        ptr = ptr->getNextNode();
    }
}

//Update or move the objects in the list
void LinkedList::move(void){
    Node*ptr = tail;
    while(ptr != NULL){
        ptr->moveNode();
        //if node gets past 1000(screen length)
        if(ptr->getXPos() > 1000){
            //reset node back to just off the beginning of the screen
            ptr->setXPos(-9);//car length is 9 pixels long
        }
        ptr = ptr->getNextNode();
    }
}

//Print out the list objects and have them identify themselves
void LinkedList::print(void){
    Node *ptr = tail;
    while(ptr != NULL ){
        int ptrID = ptr->getID();
        cout << "The Node ID is **" << ptrID << "**. There are **" << numberOfNodes << "** nodes stored currently." << endl;
        ptr = ptr->getNextNode();
    }
}

//Initializes the position in which each car will spawn
void LinkedList::initNodes(int x){
    for(int i=0;i<x;i++){
        //insert object into back of list
        insertBack(i);
        //set coordinates to the corresponding lane (Top-Bottom)
        if(tail->getLane() == 0){
            tail->setYPos(373);
        }
        if(tail->getLane() == 1){
            tail->setYPos(357);
        }
        if(tail->getLane() == 2){
            tail->setYPos(343);
        }
    }
    //Make sure objects/cars don't spawn on top of each other
    Node*headPtr = head;
    Node*tailPtr = tail;
    int counter = 1;
        while(headPtr->getPrevNode() != NULL){
            Node*prev = headPtr->getPrevNode();
            headPtr->setXPos(-20*counter);
            if(prev->getLane() == headPtr->getLane()){
                prev->setXPos(prev->getXPos() -20);
            }
            int id = headPtr->getID();
            cout << "Node " << counter << " xPos: " << headPtr->getXPos() << endl;
            headPtr = headPtr->getPrevNode();
            counter += 1;
        }
        if(headPtr->getPrevNode() == NULL){
            headPtr->setXPos(-9);
            int id = headPtr->getID();
            cout << "Node " << counter << " xPos: " << headPtr->getXPos() << endl;
        }
}
