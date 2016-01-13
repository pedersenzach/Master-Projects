#include "Node.h"
#include <string.h>
Node::Node(void){
    string name = "";
    next = NULL;
}

Node::Node( string val, Node * nextNode){
    name = val;
    next = nextNode;
    prev = NULL;
}

Node::Node( string val, Node * prevptr, Node * nextptr ){
    name = val;
    prev = prevptr;
    next = nextptr;

}

Node * Node::getNextPtr(void){
    return next;
}

void Node::setNextPtr( Node * ptr){
    next = ptr;
}

Node * Node::getPrevPtr(void){
    return this->prev;
}

void Node::setPrevPtr( Node * ptr){
    this->prev = ptr;
}

void Node::setName( string val){
   name = val;
}

string Node::getName( void ){
    return name;
}
