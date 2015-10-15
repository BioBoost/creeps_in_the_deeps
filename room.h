#ifndef ROOM_HEADER
#define ROOM_HEADER

#include <string>
#include <vector>
#include "connection.h"

// Forward declaration
class Connection;

class Room {

  private:
    std::string description;
    std::vector<Connection *> connections;

  public:
    Room(std::string description);
    std::string explore(void);
    void addConnection(Connection * connection);

    Room * go(std::string instruction);
};

#endif
