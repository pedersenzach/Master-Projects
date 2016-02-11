#include "Car.h"

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
    xMinSpeed = 1;
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
    xMinSpeed = 1;
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
    xPos = 0;
    yPos = 0;
    //randomly generated
    xSpeed = randomizer(1,3);
    xMinSpeed = 1;
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

void Node::setXPos(float x){
    this->xPos = x;
}

void Node::setYPos(float y){
    this->yPos = y;
}

void Node::setXSpeed(float x){
    this->xSpeed = x;
}

void Node::setXMinSpeed(float x){
    this->xMinSpeed = x;
}

void Node::setXMaxSpeed(float x){
    this->xMaxSpeed = x;
}

void Node::setYSpeed(float y){
    this->ySpeed = y;
}

void Node::setLane(int l){
    this->lane = l;
}

//Accessors
int Node::getLane(void)const{
    return this->lane;
}

ColorName Node::getNodeColor(void)const{
    return this->color;
}

float Node::getXPos(void)const{
    return this->xPos;
}

float Node::getYPos(void)const{
    return this->yPos;
}

float Node::getXSpeed(void)const{
    return this->xSpeed;
}

float Node::getXMaxSpeed(void)const{
    return this->xMaxSpeed;
}

float Node::getXMinSpeed(void)const{
    return this->xMinSpeed;
}

float Node::getYSpeed(void)const{
    return this->ySpeed;
}

int Node::getID( void )const{
    return id;
}

Node * Node::getNextNode(void)const{
    return nextNode;
}

Node * Node::getPrevNode(void)const{
    return this->prevNode;
}

void Node::moveNode(void){
    this->xPos += this->xSpeed;
    this->yPos += this->ySpeed;
}

void Node::drawNode(void){
    //Car Outline
    setColor(this->color);
    //Car Body
    drawFilledBox(xPos-9, yPos-1, xPos+1, yPos + 4);
    setColor(YELLOW);
    //Head lights.
    drawFilledBox(xPos-1, yPos+3, xPos, yPos+4);
    drawFilledBox(xPos-1, yPos, xPos, yPos+1 );
    setColor(BLACK);
	drawBox(xPos-9, yPos-1, xPos+1, yPos + 4);
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
