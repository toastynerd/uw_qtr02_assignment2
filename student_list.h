//Tyler Morgan
//uw c++ class
//assignment 2
//student_list.h
#include "student.h"
#include <fstream>
#include <vector>

class StudentList
{
public:
  StudentList();
  ~StudentList();
  void parse_students();
  friend void operator<<(std::ostream&, StudentList& students);


private:
  std::vector<Student> my_student_list;
  int get_new_student_id();
  bool check_id_unique(int);
};