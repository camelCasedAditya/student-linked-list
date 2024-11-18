#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Student* newStudent);
void print(Node* next);

Node* head = NULL;

int main() {
  Student* one = new Student();
  int oneID = 123;
  one->setStudentID(oneID);
  add(one);
  print(head);
  
  Student* two = new Student();
  int twoID = 256;
  two->setStudentID(twoID);
  add(two);
  print(head);
  
  Student* three = new Student();
  int threeID = 980;
  three->setStudentID(threeID);
  add(three);
  print(head);
  
  return 0;
}

void add(Student* newStudent) {
  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head->setValue(newStudent);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newStudent);
  }
}

void print(Node* next) {
  if (next == head) {
    cout << "LIST: ";
  }
  if (next != NULL) {
    cout << next->getValue()->getStudentID() << " ";
    print(next->getNext());
  }
}
