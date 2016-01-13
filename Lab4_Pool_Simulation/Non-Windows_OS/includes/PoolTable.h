#pragma once
#include "Poolball.h"

const int MAX_BALLS = 5;

class PoolTable{
    private:
        int number_of_balls;


    public:
        void check_collisions_with_balls(int i, int j);
        Poolball balls[MAX_BALLS];
        void checkCollisions(void);

        // constructor
        PoolTable( int x );

        // mutators
        void placeBalls( int x );
        void drawBalls( void );
        void moveBalls( void );
};
