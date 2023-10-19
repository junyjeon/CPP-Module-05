#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool isSigned;
	const int req_grade;
	const int exc_grade;

	AForm(const AForm &);
	AForm &operator=(const AForm &);

public:
	AForm();
	~AForm();

	AForm(std::string const &, int, int);
	std::string const &getName() const;
	int getIsSigned() const;
	int getReqGrade() const;
	int getExcGrade() const;

	void beSigned(Bureaucrat &);

	virtual void execute(Bureaucrat const &) const = 0;

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade too high!";
		}
	};
};

std::ostream &operator<<(std::ostream &, AForm const &);

#endif
