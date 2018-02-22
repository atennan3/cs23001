/*                                                                               Andrew Tennant

  utilities.cpp

  Contains utility functions for stack class

*/

#include "utilities.hpp"
#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <fstream>
#include <string>

void toPostfix(std::ifstream& in, std::ostream& out) {
  
  stack<String> stk;
  String left, right, oper, currentToken;


  while(!in.eof()) {
    in >> currentToken;

    if(in.eof()) {
      break;
    }

    while(currentToken != ";") {
      if (currentToken == ")"){
	right = stk.pop();
	oper = stk.pop();
	left = stk.pop();
	stk.push(left + right + oper);
      } else if (currentToken != "(") stk.push(currentToken);
      in >> currentToken;
    }
    out << stk.pop() << std::endl;
  }
}

void toAssembly(std::ifstream& in, std:: ostream& out) {
  stack<String> stk;
  String left, right, oper, temp, currentToken;
  int tempInt = 1;

  while(!in.eof()) {

    if(!in.eof()) {
      currentToken = getToken(in);
      //currentToken = currentToken - '\n';
    } else {
      break;
    }

    if (currentToken == ";") {
      out << "---------------------------------" << std::endl;
      tempInt = 1;
    }

    if (!in.eof() && currentToken != "+" && currentToken != "-" && currentToken        != "*" && currentToken != "/") {
      stk.push(currentToken);
    } else if (!in.eof()) {
      right = stk.pop();
      left = stk.pop();
      
      out << "LDR\t" << left << std::endl;
      
      oper = evaluate(currentToken);
      out << oper << right << std::endl;

      temp = "TEMP" + i_to_s(tempInt++);
      stk.push(temp);

      out << "STR\t" << temp << std::endl;
    }
  }
}

String evaluate(const String& oper) {
  switch(oper[0]) {
  case '+':
    return "ADD\t";
    break;
  case '-':
    return "SUB\t";
    break;
  case '*':
    return "MUL\t";
    break;
  case '/':
    return "DIV\t";
    break;
  default:
    return "UNDEFINED\t";
  }
}

String getToken(std::ifstream& in) {
  String result;
  char token = '\0';

  for (int i = 0; token != ' ' && !in.eof(); ++i) {
    in.get(token);
    if (token == ';') {
      return ";";
    } else if (token != ' ') {
      result += token;
    }
  }

  return result;
}

String i_to_s(int x) {
  if (!x) {
    return "0";
  }

  int tens, ones;
  char tensChar, onesChar;
  char arr[2];

  tens = x / 10;
  ones = x % 10;

  tensChar = i_to_char(tens);
  onesChar = i_to_char(ones);

  arr[0] = tensChar;
  arr[1] = onesChar;

  String result(arr);

  return result;
}

char i_to_char(int x) {
  switch(x) {
  case 0:
    return '0';
    break;
  case 1:
    return '1';
    break;
  case 2:
    return '2';
    break;
  case 3:
    return '3';
    break;
  case 4:
    return '4';
    break;
  case 5:
    return '5';
    break;
  case 6:
    return '6';
    break;
  case 7:
    return '7';
    break;
  case 8:
    return '8';
    break;
  case 9:
    return '9';
    break;
  default:
    return 0;
  }
}
