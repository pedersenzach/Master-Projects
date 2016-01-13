#pragma once
#include "Graphics.h"

class Poolball {
    private:
        int xPos;                   // current X position on screen
        int yPos;                   // current Y position on screen
        int radius;                 // size of ball n pixels
        ColorName color;            // color of this ball



    public:
        double xSpeed;                 // speed in X direction
        double ySpeed;
        // constructors

        Poolball(void);             // anonymous constructor
        Poolball(int xPos, int ypos, int radius, ColorName color);

        //mutator methods
        void setX(int pos);         // set current X position on screen
        void setY(int pos);         // set current Y position on screen
        void setXSpeed( double pos);   // set current speed on the x axis
        void setYSpeed( double pos);   // set current speed on the y axis
        void setRadius(int size);   // set ball radius
        void setBallColor(ColorName color); // set current ball color

        void draw(void);
        void move(void);

        // accessor methods
        int getX(void);             // return current ball X position
        int getY(void);             // return current ball Y position
        int getXSpeed(void);        // return the current ball speed on the x axis
        int getYSpeed(void);        // return the current ball speed on the y axis
        int getRadius(void);        // return current ball radius
        ColorName getColor(void);   // return current ball color
};

