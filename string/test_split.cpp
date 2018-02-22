// Tests split function for String class

#include "string.hpp"
#include <iostream>
#include <vector>
#include <cassert>

int main() {

  {
    // SETUP
    String str("abc ef gh");
    
    // TEST
    str.split(' ');
    std::cout << "-----Split test 1 -----------------------------" << std::endl;
    std::cout << str.split(' ')[0] << std::endl;
    std::cout << str.split(' ')[1] << std::endl;
    std::cout << str.split(' ')[2] << std::endl;

    // VERIFY
    assert(str.split(' ')[0] == "abc");
    assert(str.split(' ')[1] == "ef");
    assert(str.split(' ')[2] == "gh");



  }
  
  {
    // SETUP                                                                    
    String str("-a--b-");

    // TEST                                                                     
    str.split('-');
    std:: cout << "-----Split test 2 ------------------------------" << std::endl;
    std::cout << "'" <<  str.split('-')[0]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[1]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[2]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[3]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[4]<< "'" << std::endl;

    // VERIFY                                                                   
    assert(str.split('-')[0] == "");
    assert(str.split('-')[1] == "a");
    assert(str.split('-')[2] == "");
    assert(str.split('-')[3] == "b");
    assert(str.split('-')[4] == "");

  }

  {
    // SETUP
    String str("-----");

    // TEST
    str.split('-');
    std:: cout << "-----Split test 3 ------------------------------" << std::endl;
    std::cout << "'" <<  str.split('-')[0]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[1]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[2]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[3]<< "'" << std::endl;
    std::cout << "'" <<  str.split('-')[4]<< "'" << std::endl;

    // VERIFY
    assert(str.split('-')[0] == "");
    assert(str.split('-')[1] == "");
    assert(str.split('-')[2] == "");
    assert(str.split('-')[3] == "");
    assert(str.split('-')[4] == "");


  }


  {
  // SETUP
  String str;

  // TEST
  str.split('-');
  std:: cout << "-----Split test 3 ------------------------------" << std::endl;
  std::cout << "'" <<  str.split('-')[0]<< "'" << std::endl;

  // VERIFY
  assert(str.split('-')[0] == "");


  }

}
