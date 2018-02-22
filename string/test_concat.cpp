// Tests String concatenation                                                                                      

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // Setup
    String str1,
      str2('q'),
      result;
        
    // Test
    result = str1 + str2;
        
    // Verify
    assert(str1 == "\0");
    assert(str2 == "q");
    assert(result == "q");
  }

  {
    // Setup
    String str1('q'), str2, result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == 'q');
    assert(str2 == '\0');
    assert(result == 'q');
  }

  {
    // Setup
    String str1("abc"),
      str2("def"),
      result;
        
    // Test
    result = str1 + str2;
        
    // Verify
    assert(str1 == "abc");
    assert(str2 == "def");
    assert(result == "abcdef");
  }

  {
    // SETUP
    String str1("Ready.."), str2(" GO!"), result;

    // TEST
    result = str1 + str2;

    // VERIFY
    assert(result == "Ready.. GO!");
  }

  {
    // SETUP                                                                    
    String str1("..............."), str2("..............."), result;

    // TEST                                                                     
    result = str1 + str2;
   
    // VERIFY                                                                   
    assert(result == "..............................");
  }  

  std::cout << "Done testing concatenation." << std::endl;

}
