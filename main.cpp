#include "workshop.h"
#include <iostream>
#include <limits>

int main()
{
    hello();
    unsigned int year = 0u;
	std::cout << "Please enter the year: "; 
    std::cin >> year;

    if (!is_leap_year(year))
    {
        std::cout << year << " is not a leap year.\n";
    }
    else
    {
        std::cout << year << " is a leap year.\n";
    }

    // Clear cin buffer to new line
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::string str = "";
    std::cout << "Please enter the string: "; 
    getline(std::cin, str);

    if (!is_palindrome2(str.begin(), str.end()))
    {
        std::cout << "\"" << str << "\"" << " is not a palindrome.\n";
    }
    else
    {
        std::cout << "\"" << str << "\"" << " is a palindrome.\n";
    }
	return 0;
}