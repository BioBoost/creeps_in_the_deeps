#ifndef CONNECTION_HEADER
#define CONNECTION_HEADER

#include "room.h"

// Forward declaration
class Room;

class Connection {

  private:
    Room * left;
    Room * right;

  public:
    Connection(Room * left, Room * right);

};

#endif
