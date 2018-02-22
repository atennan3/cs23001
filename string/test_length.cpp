// Tests length function

#include "string.hpp" 
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String str("1234");

    // VERIFY
    assert(str.length() == 4);
    }

    {
    // Setup
    String str('a');

    // Verify
    assert(str.length() == 1);
    }

    {
    // Test
    String str("It's over 9000!");

    // Verify
    assert(str.length() == 15);
    }
  std::cout << "Done testing length." << std::endl;
}
