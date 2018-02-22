// bigint Test Program
//
// Tests:  subscript, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4);  //Right
    }

    {
      // Setup                                                                                     
      bigint bi(54321);

      // Test                                                                                      
      int digit0 = bi[0];
      int digit1 = bi[1];
      int digit2 = bi[2];
      int digit3 = bi[3];
      int digit4 = bi[4];

      // Verify                                                                                    
      assert(bi    == 54321);                           
      assert(digit0 == 1);
      assert(digit1 == 2);
      assert(digit2 == 3);
      assert(digit3 == 4);
      assert(digit4 == 5);                                                                 
    }

    {
      // Setup                                                                                       
      bigint bi(12345);

      // Test                                                                                        
      int digit0 = bi[0];
      int digit1 = bi[1];
      int digit2 = bi[2];
      int digit3 = bi[3];
      int digit4 = bi[4];

      // Verify                                                                                      
      assert(bi    == 12345);
      assert(digit0 == 5);
      assert(digit1 == 4);
      assert(digit2 == 3);
      assert(digit3 == 2);
      assert(digit4 == 1);
    }


    std::cout << "Done testing subscript." << std::endl;
}

