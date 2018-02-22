// Tests cout

#include <iostream>
#include "string.hpp" 
#include <cassert>

//===========================================================================
int main ()
{
  {
    // Setup
    String str = "String";

    // Test & Verify
    std::cout << str << std::endl;
  }

  {
    // Setup
    String str = "a";

    // Test & Verify
    std::cout << str << std::endl;
  }

  {
    // Setup
    String str = "This is my string";

    // Test & Verify
    std::cout << str << std::endl;
  }

  {
    // Setup
    String str;

    // Test & Verify
    std::cout << str << std::endl;
  }
  std::cout << "Done testing cout." << std::endl; 
}
