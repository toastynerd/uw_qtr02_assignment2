#include "TestHarness.h"
#include "../student_list.h"


// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(Student, output)
{
  Student student1("Jeff", 1);
  std::stringstream ss;
  ss << student1;
  CHECK_EQUAL("Jeff id# 1",ss.str());
  CHECK_EQUAL('J', student1.first_letter());
}

TEST(Student, leading_spaces)
{
  std::stringstream ss;
  Student student2("   Greg",2);
  ss << student2;
  CHECK_EQUAL("Greg id# 2",ss.str());
  CHECK_EQUAL('G', student2.first_letter());
}

TEST(StudentList, student_list_test)
{
  StudentList students;
  students.parse_students();
  std::cout << students;
}