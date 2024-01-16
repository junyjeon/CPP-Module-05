#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int req_grade;
	const int exc_grade;

	Form();
	Form(const Form &);
	Form &operator=(const Form &);

public:
	~Form();

	Form(std::string const &, int, int);

	std::string const &getName() const;
	int getIsSigned() const;
	int getReqGrade() const;
	int getExcGrade() const;

	void beSigned(Bureaucrat &);

	class FormNotSignedException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade too high!";
		}
	};
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif
