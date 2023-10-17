#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

#include <iostream>

class GradeTooLowException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade too low!";
    }
};

#endif
