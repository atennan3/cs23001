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
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases
    }
    
    {
      //------------------------------------------------------                                     
      // Setup fixture                                                                             
      bigint bi(234);

      // Test                                                                                      
      bi = bi.times10(2);

      // Verify                                                                                    
      assert(bi == 23400);                                
    }

    {
      //------------------------------------------------------                                       
      // Setup fixture                                                                               
      bigint bi(20);

      // Test                                                                                        
      bi = bi.times10(5);

      // Verify                                                                                      
      assert(bi == 2000000);
    }



    std::cout << "Done testing times_10" << std::endl;
}

