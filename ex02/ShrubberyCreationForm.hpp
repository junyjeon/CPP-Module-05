//Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();

    ShrubberyCreationForm(std::string const &);

    void execute(Bureaucrat const &) const;
};

#endif