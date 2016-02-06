#include <iostream>
#include <string.h>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList container;
    string name;
    while(true){
        cout << "Enter name('quit' to end--'remove' to delete): " << endl;
        cin >> name;
        if(name == "quit"){break;};
        if( name == "remove"){
            cout << "What name would you like to remove? ";
            string goodbye;
            cin >> goodbye; cout << endl;
            container.removeNode( goodbye);
            continue;
        }
        container.insertAlphabetically(name);
    }
    container.print();
    return 0;
}
