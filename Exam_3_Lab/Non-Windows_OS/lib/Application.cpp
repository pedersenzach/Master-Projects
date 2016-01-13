// Application.cpp - application implementation
#include <iostream>
#include <cstring>
#include "Application.h"
#include "about.h"
#include "commands.h"
#include "Graphics.h"
using namespace std;

// default constructor
Application::Application(){
    this->prog_name = name;
    this->prog_version = version;
}

// main application runner
void Application::run( int argc, char * argv[] ) {
    // say hello
    cout << default_message(
                this->prog_name,
                this->prog_version,
                argc, argv ) << endl;
    // option processing here
    if(argc > 1) {
        if(strncmp(argv[1],"-h", 2) == 0)
            help();
    }

    // start the real application
    Graphics app;
    // start the graphics engine
    app.glut_init( argc, argv );
    // and begin generating images
    app.start();
}

