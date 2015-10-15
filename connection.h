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

    std::string left_instruction;
    std::string right_instruction;

  public:
    Connection(Room * left, std::string left_description, std::string left_instruction,
      Room * right, std::string right_description, std::string right_instruction);
    std::string description(Room * from);

    // Check if players instruction's matches the current connection
    bool instructionMatch(Room * from, std::string instruction);

    Room * getOppositeRoom(Room * from);
};

#endif
