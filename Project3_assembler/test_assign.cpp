/*                                                                             
  test_assign.cpp    

  Test assignment operator and swap function 
  for stack class of int and String types

  assign() REQUIRES: swap() to be correct.
*/

#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <cassert>

int main() {
  
  {// Test for int stack
    stack<int> test, clean, copy;
    int first = 1, second = 2, third = 3;
    
    // Fill test stack with some data
    test.push(first);
    test.push(second);
    test.push(third);

    // Testing assignment of one stack to another.
    copy = test;

    // Ensuring all elements are correct.
    assert(copy.top() == third);
    copy.pop();
    assert(copy.top() == second);
    copy.pop();
    assert(copy.top() == first);

    // Testing assignment to an empty stack.
    assert(clean.empty());
    
    test = clean;

    assert(test.empty());
    
    std::cout << "-Assignment works for int stack\n\n";
  }
  

  {
    stack<String> test, clean, copy;
    String first("first"), second("second"), third("third");

    // Fill test stack with some data                        
    test.push(first);
    test.push(second);
    test.push(third);

    // Testing assignment of one stack to another.           
    copy = test;

    // Ensuring all elements are correct.                    
    assert(copy.top() == third);
    copy.pop();
    assert(copy.top() == second);
    copy.pop();
    assert(copy.top() == first);

    // Testing assignment to an empty stack.                 
    assert(clean.empty());

    test = clean;

    assert(test.empty());

    std::cout << "-Assignment works for String stack\n\n";
  }

  std::cout << "-Done testing assignment operator and swap function\n\n"; 
  
}
