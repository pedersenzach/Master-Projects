#include "Car.h"
#include <time.h>

//Constructors
Node::Node(void){
    int id = 0;
    nextNode = NULL;
    prevNode = NULL;
    //randomly generated
    lane = randomizer(0,2);
    xPos = -1;
    yPos = 0;
    //randomly generated
    xSpeed = randomizer(1,3);
    ySpeed = 0;
    //randomly generated
    int c = randomizer(1,13);
    color = findColor(c);
    active = false;
}


Node::Node( int val, Node * prevPtr){
    id = val;
    prevNode = prevPtr;
    nextNode = NULL;
    //randomly generated
    lane = randomizer(0,2);
    xPos = -1;
    yPos = 0;
    //randomly generated
    xSpeed = randomizer(1,3);
    ySpeed = 0;
    //randomly generated
    int c = randomizer(1,13);
    color = findColor(c);
    active = false;
}


Node::Node( int val, Node * nextptr, Node * prevptr ){
    id = val;
    prevNode = prevptr;
    nextNode = nextptr;
    //randomly generated
    lane = randomizer(0,2);
    xPos = -1;
    yPos = 0;
    //randomly generated
    xSpeed = randomizer(1,3);
    ySpeed = 0;
    //randomly generated
    int c = randomizer(1,13);
    color = findColor(c);
    active = false;
}


//Mutators
void Node::setNextNode( Node * ptr){
    nextNode = ptr;
}

void Node::setPrevNode( Node * ptr){
    this->prevNode = ptr;
}

void Node::setID( int val){
   this->id = val;
}

void Node::setNodeColor(ColorName name){
    this->color = name;
}

void Node::setXPos(int x){
    this->xPos = x;
}

void Node::setYPos(int y){
    this->yPos = y;
}

void Node::setXSpeed(int x){
    this->xSpeed = x;
}

void Node::setYSpeed(int y){
    this->ySpeed = y;
}

void Node::setLane(int l){
    this->lane = l;
}

//Accessors
int Node::getLane(void){
    return this->lane;
}

ColorName Node::getNodeColor(void){
    return this->color;
}

int Node::getXPos(void){
    return this->xPos;
}

int Node::getYPos(void){
    return this->yPos;
}

int Node::getXSpeed(void){
    return this->xSpeed;
}

int Node::getYSpeed(void){
    return this->ySpeed;
}

int Node::getID( void ){
    return id;
}

Node * Node::getNextNode(void){
    return nextNode;
}

Node * Node::getPrevNode(void){
    return this->prevNode;
}

void Node::moveNode(void){
    this->xPos += this->xSpeed;
    this->yPos += this->ySpeed;
}

void Node::drawNode(void){
    setColor(this->color);
    //Car Body
    drawFilledBox(xPos-9, yPos, xPos, yPos + 4);
    setColor(YELLOW);
    //Head lights.
    drawFilledBox(xPos-1, yPos+3, xPos, yPos+4);
    drawFilledBox(xPos-1, yPos, xPos, yPos+1 );
    setColor(RED);
    //tail lights
    drawFilledBox(xPos-9, yPos, xPos-8, yPos+1);
    drawFilledBox(xPos-9, yPos+3, xPos-8, yPos+4);
}

//Associate randomly generated number with corresponding color
ColorName findColor( int c){
    if( c == 1){return GREY;}if( c == 2){return BLACK;}
    if( c == 3){return RED;}if( c == 4){return ORANGE;}
    if( c == 5){return YELLOW;}if( c == 6){return GREEN;}
    if( c == 7){return FOREST_GREEN;}if( c == 8){return BLUE;}
    if( c == 9){return CYAN;}if( c == 10){return MIDNIGHT_BLUE;}
    if( c == 11){return PURPLE;}if( c == 12){return MAGENTA;}
    if( c == 13){return BROWN;}
}

//RANDOM NUMBER GENERATOR IN RANGE(min, max)
int randomizer( int mn, int mx){ //Adds one to mx so that it includes the max number entered
    mx += 1;
    static bool firstTime = true;
    if( firstTime ){
        //seed random # generator so that numbers are actually random
        srand(time(NULL));
        firstTime = false;
    }
    //get random number between min and max
    int random = mn + rand() % (mx - mn);
    return random;
}
