// Tests accessor function for String class as well as cout.                                                                                     

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

  {
    // TEST                                                
                                   
    String str("abc");

    // VERIFY                                               
    
    assert(str[0] == 'a');
    std:: cout << "Accessing str[0]. It is " << str[0] << std::endl;
    assert(str[1] == 'b');
    std:: cout << "Accessing str[1]. It is " << str[1] << std::endl;
    assert(str[2] == 'c');
    std:: cout << "Accessing str[2]. It is " << str[2] << std::endl;
    

  }

  {
    // TEST                                                                     
    String str;

    // VERIFY                                                                  

    assert(str[0] == '\0');
    std:: cout << "Accessing str[0]. It is NULL." << std::endl;

  }

  {
    // TEST                                                                    

    String str('a');

    // VERIFY                                                                  

    assert(str[0] == 'a');
    std:: cout << "Accessing str[0]. It is " << str[0] << std::endl;

  }

  {
    // TEST                                                                     

    String str("Hello, World!");

    // VERIFY                                                                   

    assert(str[0] == 'H');
    std:: cout << "Accessing str[0]. It is " << str[0] << std::endl;
    assert(str[1] == 'e');
    std:: cout << "Accessing str[1]. It is " << str[1] << std::endl;
    assert(str[2] == 'l');
    std:: cout << "Accessing str[2]. It is " << str[2] << std::endl;
    assert(str[3] == 'l');
    std:: cout << "Accessing str[3]. It is " << str[3] << std::endl;
    assert(str[4] == 'o');
    std:: cout << "Accessing str[4]. It is " << str[4] << std::endl;
    assert(str[5] == ',');
    std:: cout << "Accessing str[5]. It is " << str[5] << std::endl;
    assert(str[6] == ' ');
    std:: cout << "Accessing str[6]. It is " << str[6] << std::endl;
    assert(str[7] == 'W');
    std:: cout << "Accessing str[7]. It is " << str[7] << std::endl;
    assert(str[8] == 'o');
    std:: cout << "Accessing str[9]. It is " << str[8] << std::endl;
    assert(str[9] == 'r');
    std:: cout << "Accessing str[9]. It is " << str[9] << std::endl;
    assert(str[10] == 'l');
    std:: cout << "Accessing str[10]. It is " << str[10] << std::endl;
    assert(str[11] == 'd');
    std:: cout << "Accessing str[11]. It is " << str[11] << std::endl;
    assert(str[12] == '!');
    std:: cout << "Accessing str[12]. It is " << str[12] << std::endl;

  }

  std::cout << "Done testing accessor." << std::endl;

}
