#include "poolball.h"
#include "PoolTable.h"
Poolball::Poolball(void){
    this->xPos = 12;
    this->yPos = 12;
    this->radius = 15;
    this->color = BLUE;
    this->xSpeed = 2;
    this->ySpeed = 2;
}

Poolball::Poolball( int x, int y, int r, ColorName c){
    this->xPos = x;
    this->yPos = y;
    this->radius = r;
    this->color = c;
    this->xSpeed = 2;
    this->ySpeed;
}

void Poolball::setXSpeed( double pos){
    this->xSpeed = pos;
}

void Poolball::setYSpeed( double pos){
    this->ySpeed = pos;
}

void Poolball::setX(int pos) {
    xPos = pos;
}

void Poolball::setY(int pos) {
    yPos = pos;
}

void Poolball::setRadius(int size) {
    radius = size;
}

void Poolball::setBallColor(ColorName color) {
    this->color = color;
}

void Poolball::move(void) {
    xPos += xSpeed;
    yPos += ySpeed;
    //check_collisions();
}

void Poolball::draw(void) {
    setColor(this->color);
    drawFilledCircle(xPos, yPos, radius);
    cout << this->xPos << " " << this->yPos << " " << this->radius << endl;
}

// accessor methods
int Poolball::getX(void) {
    return xPos;
}

int Poolball::getY(void) {
    return yPos;
}

int Poolball::getXSpeed(void){
    return xSpeed;
}

int Poolball::getYSpeed(void){
    return ySpeed;
}

int Poolball::getRadius(void) {
    return radius;
}

ColorName Poolball::getColor(void) {
    return color;
}
