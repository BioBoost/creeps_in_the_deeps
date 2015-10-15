#include "connection.h"

Connection::Connection(Room * left, std::string left_description, std::string left_instruction,
      Room * right, std::string right_description, std::string right_instruction) {

  this->left = left;
  this->right = right;
  this->left_description = left_description;
  this->right_description = right_description;
  this->left_instruction = left_instruction;
  this->right_instruction = right_instruction;
}

std::string Connection::description(Room * from) {
  if (from == left) {
    return left_description;
  } else if (from == right) {
    return right_description;
  } else {
    return "";    // Here we could throw exception
  }
}

// Check if players instruction's matches the current connection
bool Connection::instructionMatch(Room * from, std::string instruction) {
  if (((from == left) && (instruction == left_instruction))
      || ((from == right) && (instruction == right_instruction))) {
    return true;
  }
  return false;
}

Room * Connection::getOppositeRoom(Room * from) {
  if (from == left) {
    return right;
  } else if (from == right) {
    return left;
  }
  return NULL;
}