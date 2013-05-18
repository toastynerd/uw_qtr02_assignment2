#include "TestHarness.h"
#include "../students.h"


// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(Students_input,students)
{
  Students student_list;
  student_list.parse_students();
  std::cout << student_list;
  CHECK(1==1);
}