#include <iostream>
#include "room.h"
#include "connection.h"

using namespace std;

int main(void) {
    cout << "Welcome to creeps in the deeps";

    Room kitchen("Some dark place in ur kitchen.");
    Room cellar("You are in the cellar. The master said we should not be in the cellar.");


    cout << kitchen.explore() << "\r\n";
    cout << cellar.explore() << endl;

    Connection from_kitchen_to_cellar(&kitchen, &cellar);

    kitchen.addConnection(&from_kitchen_to_cellar);
    cellar.addConnection(&from_kitchen_to_cellar);

    return 0;
}