// Informs that <target> has been pardoned by Zaphod Beeblebrox.
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
private:
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &);
    ~PresidentialPardonForm();

    PresidentialPardonForm(std::string const &);

    void execute(Bureaucrat const &) const;
};

#endif
