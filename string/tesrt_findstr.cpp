// Tests                                                                                       

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                                                                                    
    String str("abcdefghij");

    // VERIFY                                                                                  

    assert(str.findstr(1, "bcd") == 1);
  }

  std::cout << "Done testing ." << std::endl;

}
