#include "Student.h"
#include <iostream>
#include <string.h>

using namespace std;
// Assign studentId and name
void Student::assignDetails(int sId,const char sname[]) {
  studentId = sId;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student Id : "<<studentId<<endl;
  cout<<"Student name : "<<name<<endl;
}
