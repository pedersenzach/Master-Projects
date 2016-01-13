// Mandlebrot.h - generate Mandlebrot image
#pragma once


class Mandlebrot {
    public:
        int IMAGE_WIDTH;
        int IMAGE_HEIGHT;
        unsigned char * bitmap;

        // zone controls
        double xMax;
        double xMin;
        double yMax;
        double yMin;

        // positioning controls
        float xOff;
        float yOff;
        double scale;

        double pixelHeight;
        double pixelWidth;
        int max_iterations;

        // defaut constructor
        Mandlebrot();
        void init( int w, int h );
        void update( int dx, int dy, int dn );
        int pixelValue( double x, double y );
        void initBitmap();
        unsigned char *  generate( void );
};
