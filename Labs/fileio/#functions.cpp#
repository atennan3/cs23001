//
//  functions.cpp
//  Lab 4
//
//  Created by Andrew Tennant on 9/21/17.
//  Copyright © 2017 Andrew Tennant. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <string>


#include "functions.hpp"

void readUntilSpace() {
  std::ifstream file ("fileio-data-1.txt");
  if(!file.is_open()) {
    std::cout << "Unable to open file\n";
    return;
  }
    
  char ch;
  file.get(ch);
  while (!file.eof()) {
    if ((ch != ' ') && (ch != '\t') && (ch != '\n') && (ch != '\r')) {
      std::cout << ch;
    }
    file.get(ch);
  }
  std::cout << '\n';
  file.close();
}

void addInts() {
  std::ifstream file ("fileio-data-1.txt");
  if(!file.is_open()) {
    std::cout << "Unable to open file\n";
    return;
  }
  
  char ch;
  int i = 0; // index to assure only two numbers are read
  file >> ch;
  int int1 = 0, int2 = 0;

  while (!file.eof()) {
    std::string read = ""; // string to be read from file and converted to int
    while (ch != ';' && !file.eof()) {
      read += ch;
      file >> ch;
    }
    ++i;
    if (i == 1) int1 = std::stoi(read);
    if (i == 2) int2 = std::stoi(read);
    file >> ch;
  }

  int sum = int1 + int2;
  std::cout << sum << std::endl;
}
