// Tests                                                                                       

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                                                                                    
    String str("abcdef ");

    // VERIFY                                                                                  

      assert(str.findch(0,'a') == 0);
      assert(str.findch(1,'b') == 1);
      assert(str.findch(2,'c') == 2);
      assert(str.findch(3,'d') == 3);
      assert(str.findch(4,'e') == 4);
      assert(str.findch(5,'f') == 5);
      assert(str.findch(6,' ') == 6);
  }

  std::cout << "Done testing find character." << std::endl;

}
