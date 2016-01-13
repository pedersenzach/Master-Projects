// Commands.h - command line processing for C++ apps
#include <iostream>
#include <string>
using namespace std;
#include "commands.h"

#include "about.h"

string prog_name;

string default_message( string name, string version, int argc, char * argv[] ) {
    string msg = "Welcome to " + name + "\n";
    prog_name = (string)(argv[0]);
    msg += "  (running as " + prog_name + ")\n";
    if( argc == 1)
        msg += "  use -h option for help.";
    return msg;
}

void help( void ) {
    cout << "usage: " << prog_name << " [-h]" << endl;
    cout << "  where:" << endl;
    cout << "    -h - get help (this message)" << endl;
    cout << "(c)" << copyright << " by " << author << endl;
}

