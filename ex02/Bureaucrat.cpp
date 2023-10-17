#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(0) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return *this;
	grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (150 < grade)
		throw GradeTooLowException();
}

std::string const &Bureaucrat::getName() const
{
	return this->name;
}

int const &Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::GradeUp()
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::GradeDown()
{
	if (150 <= this->grade)
		throw GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(AForm &aform)
{
	try
	{
		aform.beSigned(*this);
		std::cout << this->name << " signed " << aform.getName() << '.' << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cout << this->name << " couldn't sign " << aform.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << '.';
	return os;
}