// Application.h - Main application class
#include <string>
using namespace std;

class Application {
    public:
        string prog_name;
        string prog_version;

        Application();
        //Starts the graphics/rest of program
        void run( int argc, char * argv[] );
};

