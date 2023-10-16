#include "Form.hpp"

Form::Form() : name(""), isSigned(false), req_grade(0), exc_grade(0) {}

Form::Form(const Form &other)
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return *this;
	isSigned = other.getIsSigned();
	req_grade = other.getReqGrade();
	exc_grade = other.getExcGrade();
	return *this;
}

Form::~Form() {}

Form::Form(std::string const &name, int req_grade, int exc_grade) : name(name), isSigned(false), req_grade(req_grade), exc_grade(exc_grade)
{
	if (req_grade < 1 || exc_grade < 1)
		throw GradeTooHighException();
	else if (150 < req_grade || 150 < exc_grade)
		throw GradeTooLowException();
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
	if (this->req_grade >= b.getGrade())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

void Form::execute(Bureaucrat const &executor) const
{
	if (this->isSigned == false)
		throw FormNotSignedException();
	else if (this->exc_grade > executor.getGrade())
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form const &form)
{
	os << form.getName() << ", form is " << (form.getIsSigned() ? "signed" : "not signed")
	   << ", required grade to sign " << form.getReqGrade()
	   << ", required grade to execute " << form.getExcGrade();
	return os;
}