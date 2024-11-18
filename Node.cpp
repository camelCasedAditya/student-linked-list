#include "Node.h"
#include "Student.h"
Node::Node() {
  value = new Student();
  next = NULL;
}

Node::~Node() {
  delete &value;
  next = NULL;
}

void Node::setValue(Student* newStudent) {
  value = newStudent;
}
Student* Node::getValue() {
  return value;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

Node* Node::getNext() {
  return next;
}
