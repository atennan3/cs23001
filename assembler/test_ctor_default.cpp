/*
 * Tests Default Constructor for Stack class 
 */

#include <iostream>
#include <cassert>
#include "stack.hpp"
#include "../string/string.hpp"

int main() {

  /*-------------------------------------------------
  * Default Constructor should create an empty stack.
  *---------------------------------------------------*/
  {
    stack<int> emptyintStack;
    assert(emptyintStack.empty());
  }

  {
    stack<String> emptyStringStack;
    assert(emptyStringStack.empty());
  }

  std::cout << "-Done testing Default Constructor\n\n";;
}
