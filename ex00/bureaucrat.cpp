#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(NULL), grade(0) {}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this == &other)
		return *this;
	name = other.getName();
	grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string const &Bureaucrat::getName() const {
	return this->name;
}
