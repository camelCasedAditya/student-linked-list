#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
  studentID = 0;
}

void Student::setStudentID(int newStudentID) {
  studentID = newStudentID;
}

int Student::getStudentID() {
  return studentID;
}
