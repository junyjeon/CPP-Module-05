#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "FormNotSignedException.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	int req_grade;
	int exc_grade;

public:
	Form();
	Form(const Form &);
	Form &operator=(const Form &);
	virtual ~Form();

	Form(std::string const &, int, int);
	std::string const &getName() const;
	int getIsSigned() const;
	int getReqGrade() const;
	int getExcGrade() const;

	void beSigned(Bureaucrat &);

	void execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif