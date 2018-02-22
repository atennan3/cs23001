// Tests Relational Operators                                                                                       

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                

    String str1('b'), str2('a');

    // VERIFY                                                                                  
    assert(str1 > str2);
    assert(str1 >= str2);
    assert(str2 < str1);
    assert(str2 <= str1);
    assert(str1 != str2);
  }

  {
    // TEST
    String str1("abcdefg"), str2("abcdejg"), str3("abpdefg");

    // VERIFY
    assert(str3 > str2);
    assert(str3 >= str2);
    assert(str3 > str1);
    assert(str3 >= str1);
    assert(str1 < str3);
    assert(str1 <= str3);
    assert(str1 < str2);
    assert(str1 <= str2);
    assert(str2 > str1);
    assert(str2 >= str1);
    assert(str2 < str3);
    assert(str2 <= str3);

    assert(str1 != str2);
    assert(str2 != str3);
    assert(str3 != str1);
  }

  std::cout << "Done testing relational operators." << std::endl;

}
