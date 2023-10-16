#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat
{
private:
	std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat(std::string const &, int grade);
	std::string const &getName() const;
	int getGrade() const;

	void GradeUp();
	void GradeDown();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif