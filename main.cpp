/*
  Aditya Chandrashekaran
  11/20/2024
  Program that sets up a linked list to hold student info
*/

#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

// Intialize functions
void add(Student* newStudent);
void print(Node* next);
void deleteNode(Student* student); 

// Create start of linked list
Node* head = NULL;

int main() {
  // Add each student to linked list and print out the linked list
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

  // Delete one of the students from the linked list
  deleteNode(two);
  print(head);
  
  return 0;
}

// Function to add item to a linked list
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

// function to print items in the linked list
void print(Node* next) {
  if (next == head) {
    cout << "LIST: ";
  }
  if (next != NULL) {
    cout << next->getValue()->getStudentID() << " ";
    print(next->getNext());
  }
}

// function to delete a node in the linked list based on a student object
void deleteNode(Student* student) {
  Node* current = head->getNext();
  Node* previous = head;
  if (head->getValue() == student) {
    head = head->getNext();
    delete previous;
  }
  while (current != NULL) {
    if (current->getValue() == student) {
      previous->setNext(current->getNext());
      delete current;
      return;
    }
    previous = previous->getNext();
    current = current->getNext();
  }
}
