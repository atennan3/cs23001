//
//  object_construction.cpp
//  Lab6
//
//  Created by Andrew Tennant on 10/3/17.
//  Copyright © 2017 Andrew Tennant. All rights reserved.
//

#include <iostream>
#include "object_construction.hpp"

// Constructor
object::object() {
  std::cout << "Called: Constructor." << std::endl;
}

//Assignment Operator
void object::operator=(const object&) {
  std::cout << "Called Assignment." << std:: endl;
}

// Copy Constructor
object::object(object& obj) {
  std::cout << "Called Copy Constructor." << std::endl;
}

// Destuctor
object:: ~object() {
  std::cout << "Called Destructor." << std::endl;
}
