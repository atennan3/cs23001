// Tests                                                                                       

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                                                                                   
    String str("abcdefg");

    // VERIFY                                                                                  
    assert(str.substr(3,5) == "def");  
  }

  {
    // TEST
    String str("Check this out!");

    // VERIFY
    assert(str.substr(0,14) == "Check this out!");
    assert(str.substr(0,0)  == 'C');
    assert(str.substr(14,14) == '!');
  }

  std::cout << "Done testing substring." << std::endl;

}
