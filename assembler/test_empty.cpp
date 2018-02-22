/*                                                                            
  test_empty.cpp                   
*/

#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <cassert>

int main() {

  // Test Empty for int Stack
  {
    stack<int> test;

    assert(test.empty());

    test.push(1);
    test.pop();
    assert(test.empty());

    std::cout << "-Empty for int stack passed\n\n";
  }

  // Test Empty for String stack
  {
    stack<String> test;
    
    assert(test.empty());
    
    test.push("foo");
    test.pop();
    assert(test.empty());

    std::cout << "-Empty for String stack passed\n\n";
  }
  
  std:: cout << "-Done testing empty.\n\n";
}
