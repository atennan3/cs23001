// Tests less than

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
    assert(str1 <= str2);
  }

  {
    // Setup
    String str1 = "a",
      str2 = "z";

    // Test & Verify
    //assert(str1 <= str2);
  }

  {
    // Setup
    String str1 = "az",
      str2 = "zz";

    // Test & Verify
    assert(str1 <= str2);
  }

  {
    // Setup
    String str1 = "az",
      str2 = "z";

    // Test & Verify
    //assert(str1 < str2);
  }
  std::cout << "Done testing less than." << std::endl;
}
