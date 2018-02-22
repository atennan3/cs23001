// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    assert(1 == 2);   //WRONG. This will fail, of course.
                      //You need to add more test cases here.

    
    //Add test cases as needed.
    {
      //------------------------------------------------------
      // Setup FIxture
      bigint left(0);
      bigint right(1);
      bigint result;
      
      // Test
      result = left + right;

      // Verify
      assert(left == 0);
      assert(right == 1);
      assert(result == 1);
    }

    {
      //------------------------------------------------------
      // Setup Fixture
      bigint left(10);
      bigint right(20);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left == 10);
      assert(right == 20);
      assert(result == 30);
    }

    {
      //------------------------------------------------------                                                                                                                                              
      // Setup Fixture                                                                                                                                                                                      
      bigint left(100);
      bigint right(200);
      bigint result;

      // Test                                                                                                                                                                                               
      result = left + right;

      // Verify                                                                                                                                                                                             
      assert(left == 100);
      assert(right == 200);
      assert(result == 300);
    }

    {
      //------------------------------------------------------                                                                                                                                              
      // Setup FIxture                                                                                                                                                                                      
      bigint left(10);
      bigint right(100);
      bigint result;

      // Test                                                                                                                                                                                               
      result = left + right;

      // Verify                                                                                                                                                                                             
      assert(left == 10);
      assert(right == 100);
      assert(result == 110);
    }

    std::cout << "Done with testing addition." << std::endl;
}

