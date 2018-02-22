//////////////////////////////////////////////////////////////////////////////
//File:        string-interface.hpp  
//       
//Version:     1.0
//Date:        Fall 2017
//Author:      Dr. J. Maletic
//
//Description: Interface definition of String class for use with test oracle.
//             For use with Project 2, milestone 2, 3, 4.
//
// To use the supplied test oracles you will need to use this interface and namings.
// You must also have all of these methods and functions defined for your string class.
//
// You can NOT add any attributes/members.  If you do the test oracles will not work.
//
// You need to implement all of the methods and funcitons declared here.
//

#ifndef CS23001_STRING_INTERFACE_HPP
#define CS23001_STRING_INTERFACE_HPP

#include <iostream>


////////////////////////////////////////////////////
// CLASS INV: str[length()] == 0             &&
//            length()      == capacity()    &&
//            capacity()    == stringSize - 1
//
//
class String {
public:
            String        ();                               //Empty string
            String        (char);                           //String('x')
            String        (const char[]);                   //String("abc")
            String        (const String&);                  //Copy Constructor.
            ~String       ();                               //Destructor
    void    swap          (String&);
    String& operator=     (String);                         //Assignment Copy.
    char&   operator[]    (int);                            //Accessor/Modifier.
    char    operator[]    (int)                     const;  //Accessor
    int     capacity      ()                        const;  //Max chars that can be stored (not including null)
    int     length        ()                        const;  //Actual number of chars in string
    String  operator+     (const String&)           const;
    String& operator+=    (String);
    bool    operator==    (const String&)           const;
    bool    operator<     (const String&)           const;
    String  substr        (int, int)                const;
    int     findch        (int, char)               const;
    int     findstr       (int, const String&)      const;

    friend std::ostream& operator<<(std::ostream&, const String&);
    friend std::istream& operator>>(std::istream&, String&);

private:
            String        (int);                              //String of capacity n
            String        (int, const char*);                 //String of capacity n and initial value
    void    resetCapacity (int);                              //Sets new capacity to be n.

    char    *str;
    int     stringSize;    //Size includes NULL terminator
};

String  operator+       (const char*,   const String&);
String  operator+       (char,          const String&);
bool    operator==      (const char*,   const String&);
bool    operator==      (char,          const String&);
bool    operator<       (const char*,   const String&);
bool    operator<       (char,          const String&);
bool    operator<=      (const String&, const String&);
bool    operator!=      (const String&, const String&);
bool    operator>=      (const String&, const String&);
bool    operator>       (const String&, const String&);

#endif
