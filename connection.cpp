#include "connection.h"

Connection::Connection(Room * left, Room * right) {
  this->left = left;
  this->right = right;
}