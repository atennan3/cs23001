//
//  object_test.cpp
//  Lab6
//
//  Created by Andrew Tennant on 10/3/17.
//  Copyright © 2017 Andrew Tennant. All rights reserved.
//

#include <iostream>
#include "object_construction.hpp"
#include "object_construction.cpp"

int main() {
    
  object o;
  o.operator=(o);
  object();
    
  return 0;
}
