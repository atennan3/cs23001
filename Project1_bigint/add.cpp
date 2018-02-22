//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    bigint bi1, bi2;
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    while(!in.eof()){
      //read using >>                                                                          
      while (in >> bi1 && in >> bi2){
	// operands                                                                          
	std::cout << "left:   " << bi1 << std::endl;
	std::cout << "right:  " << bi2 << std::endl;

	// Add                                                                               
	bigint sum = bi1 + bi2;

	// Output                                                                            
	std::cout << "The result is: " << sum << std::endl;;
      }
    }

    
 
    in.close();
    return 0;
}

