#ifndef CONNECTION_HEADER
#define CONNECTION_HEADER

#include "room.h"

// Forward declaration
class Room;

class Connection {

  private:
    Room * left;
    Room * right;

    std::string left_description;
    std::string right_description;

  public:
    Connection(Room * left, std::string left_description, Room * right, std::string right_description);
    std::string description(Room * from);

};

#endif
