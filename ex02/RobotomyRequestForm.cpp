#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        return *this;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm(target, 72, 45) {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getExcGrade())
    {
        std::cout << executor.getName() << ", cannot execute " << getName() << " because ";
        throw GradeTooLowException();
    }
    std::cout << "Drilling noises...\n";

    srand(time(NULL));

    if (rand() % 2)
        std::cout << getName() << " has been robotomized successfully.\n";
    else
        std::cout << "Robotomy failed\n";
}
