// Tests                                                                                       

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                                                                                   
    std::cout << "**NOW TESTING INPUT ** -- Type this: Hello!" << std::endl;
    String str;

    std::cin >> str;

    // VERIFY                                                                                  

    assert(str == "Hello!");
  }

  std::cout << "Done testing input." << std::endl;

}
