#include <iostream>

class GradeTooHighException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade too high!";
    }
};