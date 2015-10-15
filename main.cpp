#include <iostream>
#include "room.h"
#include "connection.h"

using namespace std;

int main(void) {
    cout << "Welcome to creeps in the deeps. Moehahaahhahahahaahahahaha\r\n\r\n";

    Room kitchen("Some dark place in ur kitchen.");
    Room cellar("You are in the cellar. The master said we should not be in the cellar.");

    Connection from_kitchen_to_cellar(&kitchen, "A [door] in a dark corner of the room", "door" ,&cellar, "A [door] in the corner where light shatters of the sides", "door");

    kitchen.addConnection(&from_kitchen_to_cellar);
    cellar.addConnection(&from_kitchen_to_cellar);

    Room * current = &kitchen;
    cout << current->explore() << endl;

    // Switch to next room
    current = current->go("door");
    cout << current->explore() << endl;

    return 0;
}