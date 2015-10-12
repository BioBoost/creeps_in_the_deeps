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