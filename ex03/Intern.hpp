#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &);
    Intern &operator=(const Intern &);
    ~Intern();

    AForm *makeForm(const std::string &, const std::string &);
    class UnknownFormException : public std::exception
    {
    public:
		const char *what() const throw()
		{
			return "Unknown form!";
		}
    };
};

#endif
