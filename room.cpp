#include "room.h"

Room::Room(std::string description) {
  this->description = description;
}

std::string Room::explore(void) {
  std::string descrip = description + " You see\r\n";
  for (unsigned int i = 0; i < connections.size(); i++) {
    descrip += "- " + connections[i]->description(this) + "\r\n";
  }
  return descrip;
}

void Room::addConnection(Connection * connection) {
  // Should we check for duplicates ?
  connections.push_back(connection);
}

Room * Room::go(std::string instruction) {
  // Based on current room and instruction we need to find out where the
  // user wants to go
  unsigned int i = 0;
  while (!connections[i]->instructionMatch(this, instruction) && i < connections.size()) {
    i++;
  }

  if (i < connections.size()) {
    return connections[i]->getOppositeRoom(this);
  }
  return NULL;
}