#include "workshop.h"
#include <iostream>

// void hello(); // linker error
/*
/usr/bin/ld: main.o: in function `main':
main.cpp:(.text+0x5): undefined reference to `hello()'
collect2: error: ld returned 1 exit status
*/
void hello()
{
  std::cout << "Hello! These are sample utility functions for the Makefile Workshop (:\n";
}

bool is_leap_year(unsigned int year)
{
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool is_palindrome(const std::string& word){
  std::string::const_iterator fwd = word.begin();
  std::string::const_iterator rev = word.end();
  if(rev - fwd <= 1) return true;
  if(*fwd++ != *--rev) return false;
  return is_palindrome(std::string(fwd, rev));
}

bool is_palindrome2(std::string::const_iterator fwd, std::string::const_iterator rev){
  return rev - fwd <= 1 || (*fwd++ == *--rev && is_palindrome2(fwd, rev));
}
