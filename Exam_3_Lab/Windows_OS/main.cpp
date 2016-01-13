// main.cpp - program entry point. "main" launches app
//Program originally written on OSX. Fine tuned to compile on windows

#include "Application.h"
#include "about.h"
#include "Graphics.h"


int main(int argc, char * argv[] ) {
    // create the application
    Application app;
    // start the app running
    app.run( argc, argv );
    // exit after it finishes
    return 0;
}
