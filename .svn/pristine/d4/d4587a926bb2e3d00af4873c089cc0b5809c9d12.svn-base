// Tests Capacity Function. 
//Capacity should always be 255.                                         

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
  
  {
    // TEST
    
    String str1;

    // VERIFY
                                                                               
    assert(str1.capacity() == 0);
  }

  {
    // TEST
    
    String str1("abcdefghijklmnopqrstuvwxyz");

    // VERIFY

    assert(str1.capacity() == 26);
  }

  {
    // TEST                                                                

    String str1("1234567890");

    // VERIFY                                                                  

    assert(str1.capacity() == 10);
  }

  std::cout << "Done testing capacity." << std::endl;

}
