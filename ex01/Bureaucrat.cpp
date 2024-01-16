#include "Bureaucrat.hpp"

/* private methods */
Bureaucrat::Bureaucrat() : name(""), grade(150) {}

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

/* private methods */
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (150 < grade)
		throw GradeTooLowException();
}

/* getters */
std::string const &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

/* grade */
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

/* form */
void Bureaucrat::signForm(bool isSigned, std::string const &formName) const
{
	try {
		if (isSigned)
			std::cout << this->name << " signs " << formName << std::endl;
		else
			throw std::runtime_error("some reason");
	}
	catch (const std::exception &e) {
		std::cout << this->name << " couldn’t sign " << formName << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
