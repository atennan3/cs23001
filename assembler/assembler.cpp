/* Andrew Tennant

   assembler.cpp

   Reads a set of postfix expressions a from a file and converts them to assembly code. Writes them to a new file.
*/

#include <iostream>
#include <fstream>
#include "stack.hpp"
#include "utilities.hpp"

int main(int argc, char const* argv[]) {
  if (argc < 2) {
    std::cerr << "Input file not found!" << std::endl;
    return 0;
  }

  std::ifstream postfix(argv[1]);

  if (!postfix) {
    std::cerr << "Infix file not found!" << std::endl;
    return 0;
  }

  std::ofstream assembly(argv[2]);

  if(!assembly) {
    std::cerr << "Can't open output file. Try again!" << std::endl;
    return 0;
  }

  toAssembly(postfix, assembly);

  postfix.close();
  assembly.close();

  return 0;

}
