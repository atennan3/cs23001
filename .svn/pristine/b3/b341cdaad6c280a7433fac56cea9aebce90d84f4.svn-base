/*
  test_push_pop.cpp

  Tests push and pop functions on a stack of int and String.

*/

#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <cassert>

int main() {

  {
    stack<int> test;
    int data = 1;

    test.push(1);
    assert(test.top() == 1); 

    test.push(data);
    assert(test.top() == data == 1);
    
    test.push(3);
    assert(test.top() == 3);
    
    test.push(4);
    assert(test.top() == 4);

    test.push(5);
    assert(test.top() == 5);
    
    assert(test.pop() == 5);
    assert(test.top() == 4);

    // Ensure test isn't empty
    assert(!test.empty());

    std::cout << "-Push and Pop for int passed.\n\n";
  }

  {
    stack<String> test;
    String data = "foo",
           data2 = "bar",
           data3 = "";

    test.push(data);
    assert(test.top() == data);

    test.push(data2);
    assert(test.top() == data2);

    test.push(data3);
    assert(test.top() == data3);

    assert(test.pop() == data3);
    assert(test.top() == data2);

    // Ensure test isn't empty
    assert(!test.empty());

    std::cout << "-Push and Pop for String passed.\n\n";
  }

  std::cout << "-Done testing Push and Pop.\n\n";
  
}
