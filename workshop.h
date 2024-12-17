#ifndef WORKSHOP_H
#define WORKSHOP_H
#include <string>

void hello();
bool is_leap_year(unsigned int year);
bool is_palindrome(const std::string& word);
bool is_palindrome2(std::string::const_iterator fwd, std::string::const_iterator rev);

#endif