//Tyler Morgan
//uw c++ class
//assignment 2
//students.cpp
#include "students.h"
#include <sstream>
#include <fstream>

Students::Students()
{

}

Students::~Students()
{

}

void Students::parse_students()
{
  std::ifstream readFile;
  readFile.open("students.txt");
  std::stringstream ss;
  char ch;
  while(!readFile.eof())
  {
    readFile.get(ch);
    if(ch == ';')
    {
      my_student_names.push_back(ss.str());
      ss.clear();
      ss.str("");
      int student_id = 0;
      while(!readFile.eof())
      {
        readFile.get(ch);
        if (ch == ',' || ch == '\n' || ch == 'eof')
        {
          break;
        }
        ss << ch;
      }
      ss >> student_id;
      my_student_ids.push_back(student_id);
      ss.clear();
      ss.str("");
    }
    
    else if(ch == ',')
    {
      my_student_names.push_back(ss.str());
      ss.clear();
      ss.str("");
    }

    else if(ch == '\n')
    {
      //don't read newlines into a name
    }

    else
    {
      ss << ch;
    }
    // std::cout << ch << std::endl;
  }
}

void operator<< (std::ostream& os, Students& students)
{
  os << "Students: " << std::endl;
  for(int x = 0;x<students.my_student_names.size();x++)
  {
    os << students.my_student_names[x] << " id#: " << students.my_student_ids[x] << std::endl;
  }
}