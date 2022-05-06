class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration

private :
  int studentId;
  char name[20];

public :
  void assignDetails(int sId, const char sname[]);
  void display();
};