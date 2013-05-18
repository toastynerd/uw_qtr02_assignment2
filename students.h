//Tyler Morgan
//uw c++ class
//assignment 2
//students.h
#include <vector>
#include <fstream>

class Students
{
public:
  Students();
  ~Students();
  void parse_students(std::ifstream&);


private:
  std::vector <std::string> my_student_names;
  std::vector <int> my_student_ids;
};