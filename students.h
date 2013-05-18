//Tyler Morgan
//uw c++ class
//assignment 2
//students.h
#include <vector>
#include <string>
#include <iostream>
class Students
{
public:
  Students();
  ~Students();
  void parse_students();
  friend void operator<<(std::ostream&, Students& students);


private:
  std::vector <std::string> my_student_names;
  std::vector <int> my_student_ids;
};