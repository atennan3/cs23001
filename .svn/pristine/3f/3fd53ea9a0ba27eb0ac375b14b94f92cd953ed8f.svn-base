#include "string.hpp"
#include <cassert>
#include <iostream>

//==================================================================
 int main ()
{
  {
    // TEST
    String str;
        
    // VERIFY
    assert(str[0] == '\0');
    assert(str == "");
  }

  {
    // TEST
    String str('a');

    // VERIFY
    assert(str[0] == 'a');
    assert(str[1] == '\0');
  }

  {
    // TEST
    String str("10");
    
    // VERIFY
    assert(str[0] == '1');
    assert(str[1] == '0');    
    assert(str[2] == '\0');
  }
  std::cout << "Done testing default constructor." << std::endl;
    
}
