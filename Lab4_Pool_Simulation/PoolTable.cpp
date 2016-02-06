#include "PoolTable.h"
#include "poolball.h"
#include "Graphics.h"
#include <iostream>
using namespace std;
#include <cmath>

PoolTable::PoolTable( int x){
    placeBalls( x );
}

void PoolTable::placeBalls( int x ){
    number_of_balls = x;
    for( int i = 0; i < x; i++){
        balls[i].setX( balls[i].getRadius() + i * 20 );
        balls[i].setY( balls[i].getRadius() + i * 30 );
    }
}

void PoolTable::drawBalls(void){
    for( int i = 0; i < number_of_balls; i++){
        balls[i].draw();
    }
}

void PoolTable::moveBalls(void){
    for( int i = 0; i < number_of_balls; i++){
        balls[i].move();
    }
    checkCollisions();
}


double find_angle(double vx, double vy) {
    // determine the angle between poolballs when they collide
    double t; double PI = acos(-1.0);
    if(vx < 0) // vertical collision
        t = PI + atan(vy/vx);
    else if(vx > 0.0 && vy >= 0.0) // 1st quardant collision
        t = atan(vy/vx);
    else if(vx > 0.0 && vy < 0.0) //
        t = 2.0*PI + atan(vy/vx);
    else if( vx == 0.0 && vy == 0.0)
        t = 0.0;
    else if(vx == 0 && vy >= 0.0)
        t = PI/2.0;
    else
        t = 1.5 * PI;
    return t;
}


void PoolTable::check_collisions_with_balls(int i, int j) {
    // handle ball collisions
    //  ref: http://director-online.com/buildArticle.php?id=532
    double PI = acos(-1.0);
    double x1 = balls[i].getX();
    double y1 = balls[i].getY();
    double x2 = balls[j].getX();
    double y2 = balls[j].getY();
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dist = sqrt(dx*dx+dy*dy);

    // did a collision occur
    if(dist >= 2 * balls[i].getRadius()) {

        double phi; // angle between the two ball centers
        // watch for vertical hits
        if(dx == 0.0)
            phi = PI/2.0;
        else
            phi = atan2 (dy, dx);

        // now compute the total velocities of the two balls
        double vx1 = balls[i].xSpeed;
        double vy1 = balls[i].getYSpeed();
        double v1total = sqrt(vx1*vx1 + vy1*vy1);
        double vx2 = balls[j].getXSpeed();
        double vy2 = balls[j].getYSpeed();
        double v2total = sqrt(vx2*vx2 + vy2*vy2);

        // find the angle of each ball's velocity
        double ang1 = find_angle(vx1,vy1);
        double ang2 = find_angle(vx2,vy2);

        // transform velocities into normal.tangential components
        double v1xr = v1total * cos(ang1 - phi);
        double v1yr = v1total * sin(ang1 - phi);
        double v2xr = v2total * cos(ang2 - phi);
        double v2yr = v2total * sin(ang2 - phi);

        // now find the final velocities (assuming equal mass)
        double v1fxr = v2xr;
        double v2fxr = v1xr;
        double v1fyr = v1yr;
        double v2fyr = v2yr;

        // reset the velocities
        balls[i].setXSpeed(cos(phi)*v1fxr + cos(phi+PI/2)*v1fyr);
        balls[i].setYSpeed(sin(phi)*v1fxr + sin(phi+PI/2)*v1fyr);
        balls[j].setXSpeed(cos(phi)*v2fxr + cos(phi+PI/2)*v2fyr);
        balls[j].setYSpeed(sin(phi)*v2fxr + sin(phi+PI/2)*v2fyr);
    }
}

void PoolTable::checkCollisions(void){
    for( int i = 0; i < number_of_balls; i++){
        for( int j = i + 1; j < number_of_balls; j++){
            //void check_collisions_with_balls( int i, int j);
            cout << "Collision detector runnig!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            double PI = acos(-1.0);
            double x1 = balls[i].getX();
            double y1 = balls[i].getY();
            double x2 = balls[j].getX();
            double y2 = balls[j].getY();
            double dx = x2 - x1;
            double dy = y2 - y1;
            double dist = sqrt(dx*dx+dy*dy);

            // did a collision occur
            if(dist <= 2 * balls[i].getRadius()) {

                double phi; // angle between the two ball centers
                // watch for vertical hits
                if(dx == 0.0)
                    phi = PI/2.0;
                else
                    phi = atan2 (dy, dx);

        // now compute the total velocities of the two balls
        double vx1 = balls[i].getXSpeed();
        double vy1 = balls[i].getYSpeed();
        double v1total = sqrt(vx1*vx1 + vy1*vy1);
        double vx2 = balls[j].getXSpeed();
        double vy2 = balls[j].getYSpeed();
        double v2total = sqrt(vx2*vx2 + vy2*vy2);

        // find the angle of each ball's velocity
        double ang1 = find_angle(vx1,vy1);
        double ang2 = find_angle(vx2,vy2);

        // transform velocities into normal.tangential components
        double v1xr = v1total * cos(ang1 - phi);
        double v1yr = v1total * sin(ang1 - phi);
        double v2xr = v2total * cos(ang2 - phi);
        double v2yr = v2total * sin(ang2 - phi);

        // now find the final velocities (assuming equal mass)
        double v1fxr = v2xr;
        double v2fxr = v1xr;
        double v1fyr = v1yr;
        double v2fyr = v2yr;

        // reset the velocities
        balls[i].setXSpeed(cos(phi)*v1fxr + cos(phi+PI/2)*v1fyr);
        balls[i].setYSpeed(sin(phi)*v1fxr + sin(phi+PI/2)*v1fyr);
        balls[j].setXSpeed(cos(phi)*v2fxr + cos(phi+PI/2)*v2fyr);
        balls[j].setYSpeed(sin(phi)*v2fxr + sin(phi+PI/2)*v2fyr);
        }}
        if(balls[i].getY() > WINDOW_HEIGHT - balls[i].getRadius()) {
            balls[i].ySpeed =  -(balls[i].ySpeed);
        }
        if(balls[i].getY() < 0 + balls[i].getRadius()){
            balls[i].ySpeed =  -(balls[i].ySpeed);
        }
        if(balls[i].getX() > WINDOW_WIDTH - balls[i].getRadius()){
            balls[i].xSpeed =  -(balls[i].xSpeed);
        }
        if(balls[i].getX() < 0 + balls[i].getRadius()){
            balls[i].xSpeed =  -(balls[i].xSpeed);
        }
    }
}

