// Tests Compound Concatenation                                                                                      

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                                                                    

    String str1("abc"), str2("def");
    str1 += str2;

    // VERIFY                                                                 

    assert(str1 == "abcdef");
    assert(str2 == "def");
  }

  {
    // TEST
    String str1("Hello!"), str2;
    str1 += str2;

    // VERIFY
    assert(str1 == "Hello!");
    assert(str2 == "");
  }

  {
    // TEST                                                                   
 
    String str1("Hello!"), str2(" World!");
    str1 += str2;

    // VERIFY                                                                 

    assert(str1 == "Hello! World!");
    assert(str2 == " World!");
  }

  {
    // TEST                                                                    

    String str1, str2;
    str1 += str2;

    // VERIFY                                                                  

    assert(str1 == "");
    assert(str2 == "");
  }


  std::cout << "Done testing compound concatenation." << std::endl;

}
