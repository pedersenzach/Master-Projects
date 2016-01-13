#include "LinkedList.h"
#include "Node.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;                                           //create end of list, nothing inside
}

void LinkedList::insert( string val){
    head = new Node( val, head);
}

void LinkedList::insertAlphabetically( string val){
     Node * currentNode, * nextNode, * prevNode;


    if (head == NULL || val < head->getName()) {                    // add to empty list, or as the first item
        insertFront(val);
        return;
    }

                                                                   // add to existing list between current and next nodes
    currentNode = head;
    while( currentNode != NULL) {
        nextNode = currentNode->getNextPtr();
        prevNode = currentNode->getPrevPtr();

        if(nextNode == NULL) {
                                                                   // we have reached the end, add to the end
            currentNode->setNextPtr(new Node(val, currentNode, NULL));
            return;
        }
                                                                   // general case, check if we insert before nextNode
        if( val < nextNode->getName()) {
            Node * newNode = new Node(val, prevNode, nextNode);
            currentNode->setNextPtr(newNode);
            return;
        }
                                                                  // on to the next node to check
        currentNode = nextNode;
    }
}

void LinkedList::insertFront( string val ){
    if( head == NULL){
        head = new Node( val, NULL, NULL);
        tail = head;
    } else {
        Node *ptr = new Node( val, NULL, head );
        head->setPrevPtr(ptr);
        head = ptr;

    }
                                  //head points to node now, which points to previous head.
}

void LinkedList::removeNode(string val) {
    Node * currentNode, * nextNode, * prevNode;

    // see if the list is empty
    if( head == NULL){
        cout << "List is empty" << endl;
        return;
    }

    //continues if not empty
    currentNode = head;
    prevNode = NULL;
    nextNode = head->getNextPtr();

    // see if list has one item
    if(nextNode == NULL) {
        cout << "Removing last name in the List." << endl;
        delete currentNode;
        head = tail = NULL;
        return;
    }

    // is the item in front?
    if( head->getName() == val) {
        cout << "Removing *" << val << "* from the front of the list." << endl;
        delete head;
        head = nextNode;
        head->setPrevPtr(NULL);
        return;
    }
    // general case, find the string in the next node
    while(currentNode != NULL) {
        nextNode = currentNode->getNextPtr();
        if(currentNode->getName() == val) {
            nextNode = currentNode->getNextPtr();
            prevNode = currentNode->getPrevPtr();
            cout << "deleting " << currentNode->getName() << endl;
            if( nextNode == NULL) {
            // deleting the last item in the list
                cout << "null node next" << endl;
                delete currentNode;
                prevNode->setNextPtr(NULL);
                return;
            }
            prevNode->setNextPtr(nextNode);
            nextNode->setPrevPtr(prevNode);
            delete currentNode;

            // hook the old list to the last list

            cout << "2" << endl;
            return;
        }
        currentNode = nextNode;
    }
    cout << "Sorry, *" << val << "* was not in the list" << endl;
}


void LinkedList::print(void){
    Node *ptr = head;
    while(ptr != NULL ){
        string ptrName = ptr->getName();
        cout << ptrName << endl;
        ptr = ptr->getNextPtr();
    }
}
