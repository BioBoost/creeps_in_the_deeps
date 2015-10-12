#include "connection.h"

Connection::Connection(Room * left, std::string left_description, Room * right, std::string right_description) {
  this->left = left;
  this->right = right;
  this->left_description = left_description;
  this->right_description = right_description;
}