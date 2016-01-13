#include "Highway.h"
#include "Car.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList(){
    int numberOfNodes = 0;
    head = NULL;
    tail = NULL;
    initNodes(Max_cars);
}

void LinkedList::insert( int val){
    head = new Node( val, head);
}

void LinkedList::insertBack(int val){
    if( head == NULL){
        head = new Node( val, NULL, NULL);
        tail = head;
        cout << tail->getXPos() << endl;
        numberOfNodes += 1;
    } else {
        Node *ptr = new Node( val, tail, NULL );
        tail->setPrevNode(ptr);
        tail = ptr;
        cout << tail->getXPos() << endl;
        numberOfNodes += 1;
    }
}

void LinkedList::insertFront( int val ){
    if( head == NULL){
        head = new Node( val, NULL, NULL);
        tail = head;
        numberOfNodes += 1;
    } else {
        Node *ptr = new Node( val, NULL, head );
        head->setNextNode(ptr);
        head = ptr;
        numberOfNodes += 1;
    }
}

void LinkedList::draw(void){
    setColor(BLACK);
    drawBox(-2, 380, 1002, 365);
    drawBox(-2, 365, 1002, 350);
    drawBox(-2, 350, 1002, 335);
    Node *ptr = tail;
    while(ptr != NULL){
        ptr->drawNode();
        ptr = ptr->getNextNode();
    }
}

void LinkedList::move(void){
    Node*ptr = tail;
    while(ptr != NULL){
        ptr->moveNode();
        ptr = ptr->getNextNode();
    }
}

void LinkedList::print(void){
    Node *ptr = tail;
    while(ptr != NULL ){
        int ptrID = ptr->getID();
        cout << "The Node ID is **" << ptrID << "**. There are **" << numberOfNodes << "** nodes stored currently." << endl;
        ptr = ptr->getNextNode();
    }
}

void LinkedList::initNodes(int x){
    for(int i=0;i<=x;i++){
        insertBack(i);
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
    Node*ptr = head;
        while(ptr->getPrevNode() != NULL){
            Node*prev = ptr->getPrevNode();
            if(prev->getLane() == ptr->getLane()){
                prev->setXPos(prev->getXPos() -10);
            }
            ptr = ptr->getPrevNode();
        }
}
