//Tyler Morgan
//uw c++ class
//assignment 2
//students.cpp
#include "student.h"


Student::Student(std::string name, int id)
  :my_id(id)
{
  int x = 0;
  while(name.substr(x,1)==" ")
  {
    //remove leading spaces
    x++;
  }
  if(x > 0)
  {
    my_name = name.substr(x,(name.length()-x));
  }
  else
  {
    my_name = name;
  }
}

Student::~Student()
{

}

char Student::first_letter()
{
  return my_name[0];
}
std::ostream& operator<< (std::ostream& os, Student& student)
{
  os << student.my_name << " id# " << student.my_id;
}
