#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        return *this;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm(target, 25, 5) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getExcGrade())
    {
        std::cout << executor.getName() << ", cannot execute " << getName() << " because ";
        throw GradeTooLowException();
    }
    std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox.\n";
}
