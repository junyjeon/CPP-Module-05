#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "FormNotSignedException.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool isSigned;
	int req_grade;
	int exc_grade;

public:
	AForm();
	AForm(const AForm &);
	AForm &operator=(const AForm &);
	virtual ~AForm();

	AForm(std::string const &, int, int);
	std::string const &getName() const;
	int getIsSigned() const;
	int getReqGrade() const;
	int getExcGrade() const;

	void beSigned(Bureaucrat &);

	virtual void execute(Bureaucrat const &) const = 0;
};

std::ostream &operator<<(std::ostream &, AForm const &);

#endif
