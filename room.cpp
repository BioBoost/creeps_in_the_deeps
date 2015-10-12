#include "room.h"

Room::Room(std::string description) {
  this->description = description;
}

std::string Room::explore(void) {
  return description;
}

void Room::addConnection(Connection * connection) {
  // Should we check for duplicates ?
  connections.push_back(connection);
}