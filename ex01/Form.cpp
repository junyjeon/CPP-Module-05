#include "Form.hpp"

Form::Form() : name(""), isSigned(false), req_grade(150), exc_grade(150) {}

Form::Form(const Form &other) : req_grade(other.req_grade), exc_grade(other.req_grade)
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return *this;
	isSigned = other.getIsSigned();
	return *this;
}

Form::~Form() {}

Form::Form(std::string const &name, int req_grade, int exc_grade) : name(name), isSigned(false), req_grade(req_grade), exc_grade(exc_grade)
{
	if (req_grade < 1 || exc_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (150 < req_grade || 150 < exc_grade)
		throw Bureaucrat::GradeTooLowException();
}

std::string const &Form::getName() const
{
	return this->name;
}

int Form::getIsSigned() const
{
	return this->isSigned;
}

int Form::getReqGrade() const
{
	return this->req_grade;
}

int Form::getExcGrade() const
{
	return this->exc_grade;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->req_grade)
		this->isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << form.getName() << ", form is " << (form.getIsSigned() ? "signed" : "not signed")
	   << ", required grade to sign " << form.getReqGrade()
	   << ", required grade to execute " << form.getExcGrade();
	return os;
}
