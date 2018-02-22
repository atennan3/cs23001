

//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES: s == a line from input file
// ENSURES:  Logentry == respective values from line in input file
//
LogEntry::LogEntry(String s) {
    
    std::vector<String> vec = s.split(' ');
    if (vec.size() == 10){
      host = vec[0];                                        //host is the first vector element
      
      std::vector<String> dateAndTime = vec[3].split(':');  // 1st element is date, 
                                                            // 2nd is hours, 
                                                            // 3rd is minutes and 4th is seconds
      
      std::vector<String> dateStr = dateAndTime[0].split('/'); // 1st element is day
                                                            // 2nd element is month
                                                            // 3rd is year

      String day = dateStr[0].substr(1, dateStr[0].length());
      date.setday(day);

      String month = dateStr[1];
      date.setmonth(month);

      int year = dateStr[2].intConvert();
      date.setyear(year);

      time.sethour(dateAndTime[1].intConvert());
      time.setminute(dateAndTime[2].intConvert());
      time.setsecond(dateAndTime[3].intConvert());

      request = vec[5]+vec[6]+vec[7];
      status = vec[8];

      if (vec[9] == '-') {
	number_of_bytes = 0;
      }else {
	number_of_bytes = vec[9].intConvert();
      }
    }else {
      // Fill invalid log entry
      host = "";
      date.setday("");
      date.setmonth("");
      date.setyear(0);
      time.sethour(0);
      time.setminute(0);
      time.setsecond(0);
      request = "";
      status = "";
      number_of_bytes = 0;
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  Input file for in
// ENSURES:   Returned result will contain LogEntry's
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    while (!in.eof()) {
      String s = getline(in);
      LogEntry log(s);
      result.push_back(log);
    }
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  A file passed into out && a constructed vector of LogEntry's
// ENSURES:   The output is a vector of logs
//
void output_all(std::ostream& out, const std::vector<LogEntry>& logs) {
  for (int i = 0; i < logs.size(); ++i) {
    out << logs[i];
  } 
}

////////////////////////////////////////////////////////// 
// REQUIRES:  A file passed into out && a constructed vector of LogEntry's
// ENSURES:   Host of each LogEntry is output
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {
  for (int i = 0; i < logs.size(); ++i) {
    out << logs[i].gethost() << std::endl;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry>& log) {
  int count = 0;
  for (int i = 0; i < log.size(); ++i) {
    count += log[i].getbytes();
  }
    return count;
}

// Get line                                                                                  
//////////////////////////////////////////////////                                                  // 
String String::getline(std::istream& in) {
  String line;
  char ch = '\0';

  for (int i = (in.get(ch), 0); (ch != '\n') && (!in.fail()); ++i, in.get(ch)) {
    if (i == ( line.length() ))
      line.resetCapacity(line.length() * 2);
    line = line + ch;
  }

  return line;
}
