// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);
        // Verify
	assert(bi == 3);
    }

    {
      //------------------------------------------------------                                     
      // Setup fixture                                                                             
      bigint bi(11);

      // Test                                                                                      
      bi = bi.timesDigit(3);
      // Verify                                                                                    
      assert(bi == 33);                                       
    }

    {
      //------------------------------------------------------                                     
      // Setup fixture                                                                             
      bigint bi(100);

      // Test                                                                                      
      bi = bi.timesDigit(0);
      // Verify                                                                                    
      assert(bi == 0);                                       
    }

    {
      //------------------------------------------------------                                     
      // Setup fixture                                                                             
      bigint bi(1000);

      // Test                                                                                      
      bi = bi.timesDigit(9);
      // Verify                                                                                    
      assert(bi == 9000);                                       
    }

    {
      //------------------------------------------------------                                       
      // Setup fixture                                                                               
      bigint bi(10000000000);

      // Test                                                                                        
      bi = bi.timesDigit(1);
      // Verify                                                                                      
      assert(bi == 10000000000);
    }









    
    std::cout << "Done testing bigint * digit" << std::endl;
}
