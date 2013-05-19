#include "student_list.h"
#include <cstdlib>
#include <sstream>
StudentList::StudentList()
{
  srand(time(NULL));

}

StudentList::~StudentList()
{

}

void StudentList::parse_students()
{
  std::string name = "";
  int student_id = 0;
  std::ifstream readFile;
  readFile.open("students.txt");
  std::stringstream ss;
  char ch;
  while(!readFile.eof())
  {
    readFile.get(ch);
    if(ch == ';')
    {
      name = ss.str();
      ss.clear();
      ss.str("");
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
      Student temp_student(name,student_id);
      my_student_list.push_back(temp_student);
      ss.clear();
      ss.str("");
    }
    
    else if(ch == ',')
    {
      name = ss.str();
      ss.clear();
      ss.str("");
      student_id = get_new_student_id();
      //put a new student here
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

int StudentList::get_new_student_id()
{
  int the_int = 0;
  while(true)
  {
    the_int = rand() % 1000;
    if(check_id_unique(the_int))
    {
      break;
    }
  }
  return the_int;
}

bool StudentList::check_id_unique(int student_id)
{
  // for(int x =0;x<my_student_ids.size();x++)
  // {
  //   if(student_id == my_student_ids[x])
  //   {
  //     return false;
  //   }
  // }
  return true;
}

void operator<<(std::ostream& os, StudentList& students)
{
  os << "Students:" <<std::endl;
  for(int x =0;x<students.my_student_list.size();x++)
  {
    os << students.my_student_list.at(x) << std::endl; //can't get this line to work
  }
}