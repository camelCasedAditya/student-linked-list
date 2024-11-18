#ifndef STUDENT_HEADER
#define STUDENT_HEADER
#include <iostream>

using namespace std;

class Student {
 public:
  Student();
  void setStudentID(int newStudentID);
  int getStudentID();

 private:
  int studentID;
};

#endif
