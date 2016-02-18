#include "Highway.h"

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
    Node *ptr = head;
    while(ptr != NULL){
        ptr->drawNode();
        ptr = ptr->getPrevNode();
    }
}

//Update or move the objects in the list
void LinkedList::move(void){
    Node*ptr = tail;
    while(ptr != NULL){
	if(ptr->getXMinSpeed() < ptr->getXSpeed()){
		ptr->moveMinNode();
	}
	else{
		ptr->moveNode();
	}
        //if node gets past 1000(screen length)
        if(ptr->getXPos() > 1009){
            //reset node back to just off the beginning of the screen
            ptr->setXPos(-1);//car length is 9 pixels long
        }
        ptr = ptr->getNextNode();
    }
}


//Initializes the position in which each car will spawn
void LinkedList::initNodes(int x){
    for(int i=0;i<x;i++){
        //insert object into back of list
        insertBack(i);
        //set coordinates to the corresponding lane (Top-Bottom)
        if(tail->getLane() == 2){
            tail->setYPos(373);    //set to left most lane(Top)
        }
        if(tail->getLane() == 1){  //set to middle lane
            tail->setYPos(357);
        }
        if(tail->getLane() == 0){  //set to right most lane(bottom)
            tail->setYPos(343);
        }
    }
    Node*headPtr = head;
    while( headPtr != NULL){
        if(headPtr == head){
            headPtr->setXPos(-1); //sets first node just off the screen to the left
            display(headPtr);    //Display current node information in the console
            headPtr = headPtr->getPrevNode();
            continue;
        }
        Node*next = headPtr->getNextNode();
        headPtr->setXPos(next->getXPos() - 20);  //set position of next node one car length away + 2 pixels for asthetics.
        display(headPtr);        //Display current node information in the console
        headPtr = headPtr->getPrevNode();
        }
}

void display(Node*headPtr){
    cout << "Node " << headPtr->getID() << " xPos: " << headPtr->getXPos() << " lane:" << headPtr->getLane() << " speed:" << \
                                                        headPtr->getXSpeed() << endl;
}

void LinkedList::antiCollision(void){
    Node*headPtr = head;
    Node*ptr = head->getPrevNode();
    while( headPtr != NULL){    //Start loop to check list
        ptr = head;             //Make sure headptr is compared to previous nodes when further in scan
        while( ptr != NULL){    //start cycling through list to compare to headptr
            if(headPtr == ptr){ //if they are the same node, skip to next node to compare to.
                ptr = ptr->getPrevNode();
                continue;
            }
            if(headPtr->getLane() == ptr->getLane()){ //If nodes are in the same lane
               if(headPtr->getXPos() > ptr->getXPos()){
                    int dist = headPtr->getXPos() - ptr->getXPos();
                    if( dist <= 30 && headPtr->getXSpeed() < ptr->getXSpeed()){
                        if(ptr->getXPos() >= headPtr->getXPos() - 18){
                            ptr->setXMinSpeed(headPtr->getXSpeed());
                        }
                    }
               }
               else
               if(headPtr->getXPos() < ptr->getXPos()){
                    int dist = ptr->getXPos() - headPtr->getXPos();
                    if( dist <= 30 && headPtr->getXSpeed() > ptr->getXSpeed()){
                        if(ptr->getXPos() <= headPtr->getXPos() - 18){
                            headPtr->setXMinSpeed(ptr->getXSpeed());
                        }
                    }
                }
            }
        ptr = ptr->getPrevNode();
        }
    headPtr = headPtr->getPrevNode();
    }
}


/*
void LinkedList::checkList(void){
    Node*headPtr = head;
    Node*ptr = head->getPrevNode();
    while( headPtr != NULL){
        while( ptr != NULL){
            ptr = ptr->getPrevNode();
        }
    headPtr = headPtr->getPrevNode();
    if( headPtr == NULL){
        return;
    }
    ptr = headPtr->getPrevNode();
    }
}*/
