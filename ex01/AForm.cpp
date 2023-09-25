#include "AForm.hpp"

AForm::AForm() : name(""), isSigned(false), req_grade(0), exc_grade(0) {}

AForm::AForm(const AForm &other) {
	*this = other;
}

AForm &AForm::operator=(const AForm &other) {
	if (this == &other)
		return *this;
	isSigned = other.getIsSIgned();
	req_grade = other.getReqGrade();
	exc_grade = other.getExcGrade();
	return *this;
}

AForm::~AForm() {}

AForm::AForm(std::string const &name, int isSigned, int req_grade, int exc_grade) : name(name), isSigned(isSigned), req_grade(req_grade), exc_grade(exc_grade) {
	if (req_grade < 1 || exc_grade)
		throw GradeTooHighException();
	else if (150 < req_grade || 150 < exc_grade)
		throw GradeTooLowException();
}

std::string const &AForm::getName() const {
	return this->name;
}

int AForm::getIsSIgned() const {
	return this->isSigned;
}

int AForm::getReqGrade() const {
	return this->req_grade;
}

int AForm::getExcGrade() const {
	return this->exc_grade;
}

void AForm::beSigned(Bureaucrat &b){
	if (this->req_grade <= b.getGrade())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, AForm const &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}