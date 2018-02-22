// Tests Greater than

#include "string.hpp" 
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    // Setup
    String str1,
      str2;

    // Test & Verify
    assert(str1 >= str2);
  }

  {
    // Setup
    String str2 = "a",
      str1 = "z";

    // Test & Verify
    assert(str1 >= str2);
  }

  {
    // Setup
    String str2 = "az",
      str1 = "zz";

    // Test & Verify
    assert(str1 >= str2);
  }
  std::cout << "Done testing greater than." << std::endl;
}
