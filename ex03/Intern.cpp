#include "Intern.hpp"

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
    Form *form = nullptr;
    enum FormName
    {
        Shrubbery,
        Robot,
        president,
        Unknown
    };

    FormName val =
        name == "shrubbery creation"    ? Shrubbery
        : name == "robotomy request"    ? Robot
        : name == "presidential pardon" ? president
                                        : Unknown;

    switch (val)
    {
    case Shrubbery:
        std::cout << "Intern maked ShrubberyCreationForm!" << std::endl;
        return ShrubberyCreationForm::ShrubberyCreationForm();
    case Robot:
        std::cout << "Intern maked RobotomyRequest Form!" << std::endl;
        return RobotomyRequestForm::RobotomyRequestForm();
        break;
    case president:
        std::cout << "Intern maked PresidentialPardon Form!" << std::endl;
        return PresidentialPardonForm();
    default:
        std::cout << "Unknown Form name!";
    }
}

// vscode에 gpt= cursor, copliot
// form만들고,  24번째줄 수정학;
