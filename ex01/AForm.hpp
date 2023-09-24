#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class AForm {
private:
	const std::string name;
	bool isSigned;
	int req_grade;
	int	exc_grade;
public:
	AForm();
	AForm(const AForm &);
	AForm &operator=(const AForm &);
	virtual ~AForm();
	
	AForm(std::string const &name, int isSigned, int req_grade, int exc_grade);
	std::string const & getName() const;
	int getIsSIgned() const;
	int getReqGrade() const;
	int getExcGrade() const;

	beSigned() const;

	virtual void execute() const = 0;
};

#endif