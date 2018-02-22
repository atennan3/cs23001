/*                                                                                                   
  Andrew Tennant                                                                                     
                                                                                                     
  test_infix_to_postfix.cpp                                                                                       
                                                                                                    
  Reads a set of infix expressions from a file and writes the infix and postfix expressions to another file.                                                                                           
*/

#include <iostream>
#include <fstream>
#include "stack.hpp"
#include "utilities.cpp"                                                                    

int main() {

  std::ifstream infix("data3-1.txt");

  std::ofstream postfix("testOutput.txt");

  toPostfix(infix, postfix);

  infix.close();
  postfix.close();

  return 0;
}

