// Tests assignment

#include <iostream>
#include "string.hpp" 
#include <cassert>

//===========================================================================
int main ()
{
  {
    // Setup
    String str1, str2("abc");
    // Test
    str1 = str2;
    // Verify
    assert(str1 == "abc");
    assert(str1.capacity() == 3);
  }
  {
    // Setup
    String str1;
    // Test
    str1 = "Testing 1 2 3.";
    
    // Verify
    assert(str1 == "Testing 1 2 3.");
  }

  {
    // Setup                                                                  
 
    String str1;
    // Test                                                                  
 
    str1 = "            0";
   
    // Verify                                                                 
 
    assert(str1 == "            0");
  }

  {
    // Setup                                                                   

    String str1;

    // Test                                                                    
                                                                               
    str1 = "            0   ";

    // Verify                                                                  
                                                                               
    assert(str1 == "            0   ");
  }

  {
    // SETUP

    String str;

    // TEST
    
    str = "!@#$%^&*()_+}{POIUYYTREWQASDFGHJKL:''/?><MNBVCXZ";

    // VERIFY
    assert(str == "!@#$%^&*()_+}{POIUYYTREWQASDFGHJKL:''/?><MNBVCXZ");
  }

  {
    // SETUP
    String str;

    // TEST
    str = "abc";

    // Verify
    assert(str == "abc");
    assert(str.capacity() == 3);
  }

  {
    // SETUP
    String str("abc");

    // TEST
    str = "def";

    // VERIFY
    assert(str == "def");
    assert(str.capacity() == 3);
  }
  std::cout << "Done testing assignment" << std::endl;
}
