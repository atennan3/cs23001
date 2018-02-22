// Tests Addition Operator

#include <iostream>
#include "string.hpp" 
#include <cassert>

//===========================================================================
int main ()
{
  {
    // Setup
    String str1,
      str2,
      result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == "\0");
    assert(str2 == "\0");
    assert(result == "\0");
  }

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
    String str1 = 'a',
      str2 = 'b',
      result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == "a");
    assert(str2 == "b");
    assert(result == "ab");
  }

  {
    // Setup
    String str1("a"),
      str2("b"),
      result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == "a");
    assert(str2 == "b");
    assert(result == "ab");
  }

  {
    // Setup
    String str1('a'),
      str2("b"),
      result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == "a");
    assert(str2 == "b");
    assert(result == "ab");
  }

  {
    // Setup
    String str1("a"),
      str2('b'),
      result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == "a");
    assert(str2 == "b");
    assert(result == "ab");
  }

  {
    // Setup
    String str1("My string. "),
      str2("Is not your string."),
      result;

    // Test
    result = str1 + str2;

    // Verify
    assert(str1 == "My string. ");
    assert(str2 == "Is not your string.");
    assert(result == "My string. Is not your string.");
  }

  {
    // Setup
    String str1("This is a test. "),
      result;
    // Test
    result = str1 + "It should pass.";

    // Verify
    assert(str1 == "This is a test. ");
    assert(result == "This is a test. It should pass.");
  }

  {
    // Setup
    String str1("It's over 9000"),
      result;

    // Test
    result = str1 + '!';

    // Verify
    assert(str1 == "It's over 9000");
    assert(result == "It's over 9000!");
  }
  std::cout << "Done testing concatenation." << std::endl;
}
