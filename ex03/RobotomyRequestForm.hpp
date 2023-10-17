// Makes some drilling noises. Then, informs that <target> has been robotomized successfully 50% of the time. Otherwise, informs that the robotomy failed.
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &);
    ~RobotomyRequestForm();

    RobotomyRequestForm(std::string const &);

    void execute(Bureaucrat const &) const;
};

#endif
