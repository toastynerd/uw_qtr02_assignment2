//Tyler Morgan
//uw c++ class
//assignment 2
//student.h
#include <string>
#include <iostream>

class Student
{
public:
  Student(std::string, int);
  ~Student();
  char first_letter();
  friend std::ostream& operator<<(std::ostream&, Student& student);

private:
  std::string my_name;
  int my_id;
};


