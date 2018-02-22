// Tests findchar

#include "string.hpp" 
#include <cassert>
#include <iostream>
//===========================================================================
int main ()
{
  {
    // Setup
    String str1 = "It's over 9000!";
    // Test & Verify
    assert(str1 == "It's over 9000!");
    assert(str1.findch('o', 3) == 5);
    assert(str1.findch('z', 3) == -1);
  }
  std::cout << "Done testing find character." << std::endl;
}
