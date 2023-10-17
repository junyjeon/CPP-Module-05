#ifndef FORMNOTSIGNEDEXCEPTION_HPP
#define FORMNOTSIGNEDEXCEPTION_HPP

#include <iostream>

class FormNotSignedException : public std::exception
{
public:
    const char *what() const throw();
};

#endif
